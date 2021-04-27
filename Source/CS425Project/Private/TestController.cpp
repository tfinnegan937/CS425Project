// Fill out your copyright notice in the Description page of Project Settings.


#include "TestController.h"
#include "ASmoothPursuit.h"
#include "ASaccadesHorizontal.h"
#include "ASaccadeVertical.h"
#include "AConvergence.h"
#include "AVORHorizontal.h"
#include "AVORVertical.h"
#include "AVMS.h"
#include "AUIController.h"
#include "Kismet/KismetSystemLibrary.h"
// Sets default values
ATestController::ATestController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	testManager = new TestQueueManager(this);
	ipcController = new IPCCreator(TEXT(BUFF_NAME));

}

// Called when the game starts or when spawned
void ATestController::BeginPlay()
{
	Super::BeginPlay();
	//instantiate_shared_mem();
	FString project_directory = FPaths::ProjectDir();
	//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Opening physician's interface...")));
	FString binary = project_directory.Append("\\Binaries\\Win64\\DesktopInterface.exe");
	FProcHandle tempHandle = FPlatformProcess::CreateProc(*binary, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, binary);
	if (!tempHandle.IsValid()) {
		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Failed to open physician's interface!")));
	}


	GetWorldTimerManager().SetTimer(ipcTimerHandle, this, &ATestController::ipcTimerTick, .1F, true, .1f); //Initializes the IPC timer to call every 100 miliseconds after an initial 100 milisecond delay
}



// Called every frame
void ATestController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	testManager->tick();

}

void ATestController::ipcTimerTick() {

	UINT16 message = 0x00;
	ipcController->sendMessage(0x00);
	if (ipcController->messageReceived()) {
		message = ipcController->receiveMessage();
	}
	handleMessage(message);
}

void ATestController::handleMessage(UINT16 mess_in) {
	if (mess_in == 0x00) {
		return;
	}
	if (mess_in & QUEUE_SP) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_CON) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_SH) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_SV) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_VMS) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_VORH) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & QUEUE_VORV) {
		if (!testManager->testsStarted) {
			testManager->queueTests(mess_in);
		}
	}
	if (mess_in & STOP_ALL) {
		if (testManager->testsStarted) {
			testManager->stopAllTests();
		}
	}
	if (mess_in & REQ_SHUTDOWN) {
		ipcController->sendMessage(CONF_SHUTDOWN);
		UKismetSystemLibrary::QuitGame(this->GetWorld(), 0, EQuitPreference::Quit, true);

	}



}

void ATestController::SignalUITestsDone() {
	ipcController->sendMessage(TESTS_COMPLETED);
}



TestQueueManager::TestQueueManager(AActor* parent_in) {
	parent = parent_in;
}

AActor* TestQueueManager::getTest(FString testNameContains) {
	TArray<AActor*> tests; 
	parent->GetAttachedActors(tests);
	for (int i = 0; i < tests.Num(); i++) {
		if (tests[i]->GetName().ToLower().Contains(testNameContains)) {
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, tests[i]->GetName());

			return tests[i];
		}
	}
	return nullptr; 
}

void TestQueueManager::queueTests(UINT16 mess_in) {
	if (!testsStarted) {
		testsStarted = true;
		testQueue.Empty();
		if (getTest("AUI") == nullptr) {
			//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("nullptr"));
		}
		testQueue.Enqueue(getTest("AUI"));
		activeTest = "AUI";
		if (mess_in & QUEUE_SP) {
			if (testQueue.IsEmpty()) {
				activeTest = "smooth";
			}
			testQueue.Enqueue(getTest("smooth"));

		}

		if (mess_in & QUEUE_SH) {
			if (testQueue.IsEmpty()) {
				activeTest = "saccadeshorizontal";
			}
			testQueue.Enqueue(getTest("saccadeshorizontal"));
		}
		if (mess_in & QUEUE_SV) {

			if (testQueue.IsEmpty()) {
				activeTest = "saccadevertical";
			}
			testQueue.Enqueue(getTest("saccadevertical"));
		}

		if (mess_in & QUEUE_VORH) {
			if (testQueue.IsEmpty()) {
				activeTest = "vorhorizontal";
			}
			testQueue.Enqueue(getTest("vorhorizontal"));
		}
		if (mess_in & QUEUE_VORV) {
			if (testQueue.IsEmpty()) {
				activeTest = "vorvertical";
			}
			testQueue.Enqueue(getTest("vorvertical"));
		}
		if (mess_in & QUEUE_CON) {
			if (testQueue.IsEmpty()) {
				activeTest = "convergence";
			}
			testQueue.Enqueue(getTest("convergence"));
		}
		if (mess_in & QUEUE_VMS) {
			if (testQueue.IsEmpty()) {
				activeTest = "vms";
			}

			testQueue.Enqueue(getTest("vms"));
		}
	}
}

void TestQueueManager::stopAllTests() {
	testsStarted = false;
	((AASmoothPursuit*)getTest("smooth"))->StopTest();
	((AASaccadeVertical*)getTest("saccadevertical"))->StopTest();
	((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->StopTest();
	((AAVORVertical*)getTest("vorvertical"))->StopTest();
	((AAVORHorizontal*)getTest("vorhorizontal"))->StopTest();
	((AASaccadeVertical*)getTest("saccadevertical"))->StopTest();
	((AAConvergence*)getTest("convergence"))->StopTest();
	((AAVMS*)getTest("convergence"))->StopTest();
	((ATestController*)parent)->SignalUITestsDone();
	((AAUIController*)getTest("AUI"))->StopTest();
}

void TestQueueManager::tick() {
	if (testsStarted) {
		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Here1"));

		if (!currentTestStarted && !testQueue.IsEmpty()) {
			//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Here2"));

			currentTestStarted = true;
			//Start the test
			startActiveTest();
		}
		else {
			if (testQueue.IsEmpty()) {
				((ATestController*)parent)->SignalUITestsDone();
				testsStarted = false;
			}
			else {
				//Check if the current test is completed. If so, dequeue it and signify that it hasnt been started.
				if (isActiveTestDone()) {
					//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("active done"));

					AActor* dequeuedItem;
					testQueue.Dequeue(dequeuedItem);
					if (!testQueue.IsEmpty()) {
						activeTest = (*(testQueue.Peek()))->GetName();
					}
					currentTestStarted = false;
				}
			}
		}
	}
}

void TestQueueManager::startActiveTest() {
	if (activeTest.ToLower().Contains("smooth")) {
		((AASmoothPursuit*)getTest("smooth"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(SP_STARTED);


	}
	else if (activeTest.ToLower().Contains("saccadeshorizontal")) {
		((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(SH_STARTED);

	}
	else if (activeTest.ToLower().Contains("saccadevertical")) {
		((AASaccadeVertical*)getTest("saccadevertical"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(SV_STARTED);

	}
	else if (activeTest.ToLower().Contains("vorhorizontal")) {
		((AAVORHorizontal*)getTest("vorhorizontal"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(VORH_STARTED);

	}
	else if (activeTest.ToLower().Contains("vorvertical")) {
		((AAVORVertical*)getTest("vorvertical"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(VORV_STARTED);

	}
	else if (activeTest.ToLower().Contains("convergence")) {
		((AAConvergence*)getTest("convergence"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(CON_STARTED);

	}
	else if (activeTest.ToLower().Contains("vms")) {
		((AAVMS*)getTest("vms"))->StartTest();
		((ATestController*)parent)->SignalUISingleTestStarted(VMS_STARTED);

	}
	else if (activeTest.ToLower().Contains("AUI")) {
		((AAUIController*)getTest("AUI"))->StartTest();
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("here3"));


	}
	else {
		//Handle Error?
	}
}

bool TestQueueManager::isActiveTestDone() {
	if (activeTest.ToLower().Contains("smooth")) {
		if (((AASmoothPursuit*)getTest("smooth"))->isCompleted) {
			((AASmoothPursuit*)getTest("smooth"))->Closeup(0);
			((ATestController*)parent)->SignalUISingleTestDone(SP_COMPLETED);
		}
		return ((AASmoothPursuit*)getTest("smooth"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("saccadeshorizontal")) {
		if (((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->isCompleted) {
			((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->Closeup(2);
			((ATestController*)parent)->SignalUISingleTestDone(SH_COMPLETED);

		}
		return ((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("saccadevertical")) {
		if (((AASaccadeVertical*)getTest("saccadevertical"))->isCompleted) {
			((AASaccadeVertical*)getTest("saccadevertical"))->Closeup(1);
			((ATestController*)parent)->SignalUISingleTestDone(SV_COMPLETED);
		}
		return ((AASaccadeVertical*)getTest("saccadevertical"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vorhorizontal")) {
		if (((AAVORHorizontal*)getTest("vorhorizontal"))->isCompleted) {
			((AAVORHorizontal*)getTest("vorhorizontal"))->Closeup(3);
			((ATestController*)parent)->SignalUISingleTestDone(VORH_COMPLETED);
		}
		return ((AAVORHorizontal*)getTest("vorhorizontal"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vorvertical")) {
		if (((AAVORVertical*)getTest("vorvertical"))->isCompleted) {
			((AAVORVertical*)getTest("vorvertical"))->Closeup(4);
			((ATestController*)parent)->SignalUISingleTestDone(VORV_COMPLETED);

		}
		return ((AAVORVertical*)getTest("vorvertical"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("convergence")) {
		if (((AAConvergence*)getTest("convergence"))->isCompleted) {
			((ATestController*)parent)->SignalUISingleTestDone(CON_COMPLETED);
			((AAConvergence*)getTest("convergence"))->Closeup(5);
		}
		return ((AAConvergence*)getTest("convergence"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vms")) {
		if (((AAVMS*)getTest("vms"))->isCompleted) {
			((AAVMS*)getTest("vms"))->Closeup(6);
			((ATestController*)parent)->SignalUISingleTestDone(VMS_COMPLETED);
		}
		return ((AAVMS*)getTest("vms"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("AUI")) {
		return ((AAUIController*)getTest("UI"))->isCompleted;
	}
	else {
		return false;
	}
}

void ATestController::SignalUISingleTestStarted(UINT16 mess) {
	ipcController->sendMessage(mess);
}

void ATestController::SignalUISingleTestDone(UINT16 mess) {
	ipcController->sendMessage(mess);
}