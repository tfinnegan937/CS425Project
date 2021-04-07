// Fill out your copyright notice in the Description page of Project Settings.


#include "TestController.h"
#include "ASmoothPursuit.h"
#include "ASaccadesHorizontal.h"
#include "ASaccadeVertical.h"
#include "AConvergence.h"
#include "AVORHorizontal.h"
#include "AVORVertical.h"
#include "AVMS.h"
// Sets default values
ATestController::ATestController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	testManager = new TestQueueManager(this);
}

// Called when the game starts or when spawned
void ATestController::BeginPlay()
{

	Super::BeginPlay();
	//instantiate_shared_mem();
	ipcController = new IPCCreator(TEXT(BUFF_NAME));
	FString project_directory = FPaths::ProjectDir();
	FString binary = project_directory.Append("\\Binaries\\Win64\\DesktopInterface.exe");
	FPlatformProcess::CreateProc(*binary, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);


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



}

void ATestController::SignalUITestsDone() {
	ipcController->sendMessage(TESTS_COMPLETED);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SIGNALLED"));
}



TestQueueManager::TestQueueManager(AActor* parent_in) {
	parent = parent_in;
}

AActor* TestQueueManager::getTest(FString testNameContains) {
	TArray<AActor*> tests; 
	parent->GetAttachedActors(tests);
	for (int i = 0; i < tests.Num(); i++) {
		if (tests[i]->GetName().ToLower().Contains(testNameContains)) {
			return tests[i];
		}
	}
	return nullptr; 
}

void TestQueueManager::queueTests(UINT16 mess_in) {
	if (!testsStarted) {
		testsStarted = true;
		testQueue.Empty();
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



}

void TestQueueManager::tick() {
	if (testsStarted) {
		if (!currentTestStarted && !testQueue.IsEmpty()) {
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
	}
	else if (activeTest.ToLower().Contains("saccadeshorizontal")) {
		((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->StartTest();
	}
	else if (activeTest.ToLower().Contains("saccadevertical")) {
		((AASaccadeVertical*)getTest("saccadevertical"))->StartTest();
	}
	else if (activeTest.ToLower().Contains("vorhorizontal")) {
		((AAVORHorizontal*)getTest("vorhorizontal"))->StartTest();
	}
	else if (activeTest.ToLower().Contains("vorvertical")) {
		((AAVORVertical*)getTest("vorvertical"))->StartTest();
	}
	else if (activeTest.ToLower().Contains("convergence")) {
		((AAConvergence*)getTest("convergence"))->StartTest();
	}
	else if (activeTest.ToLower().Contains("vms")) {
		((AAVMS*)getTest("vms"))->StartTest();
	}
	else {
		//Handle Error?
	}
}

bool TestQueueManager::isActiveTestDone() {
	if (activeTest.ToLower().Contains("smooth")) {
		return ((AASmoothPursuit*)getTest("smooth"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("saccadeshorizontal")) {
		return ((AASaccadesHorizontal*)getTest("saccadeshorizontal"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("saccadevertical")) {
		return ((AASaccadeVertical*)getTest("saccadevertical"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vorhorizontal")) {
		return ((AAVORHorizontal*)getTest("vorhorizontal"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vorvertical")) {
		return ((AAVORVertical*)getTest("vorvertical"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("convergence")) {
		return ((AAConvergence*)getTest("convergence"))->isCompleted;
	}
	else if (activeTest.ToLower().Contains("vms")) {
		return ((AAVMS*)getTest("vms"))->isCompleted;
	}
	else {
		return false;
	}
}
