// Fill out your copyright notice in the Description page of Project Settings.


#include "TestController.h"
#include "ASmoothPursuit.h"
// Sets default values
ATestController::ATestController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

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
	bool atLeastOneTest = false;
	if (mess_in == 0x00) {
		return;
	}
	if (mess_in & QUEUE_SP) {
		//if (!testsStarted) {
			//atLeastOneTest = true;
			//Queue the test
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SP selected"));
		//}
	}
	if (mess_in & QUEUE_CON) {
		if (!testsStarted) {
			atLeastOneTest = true;
			//Queue the test
		}
	}
	if (mess_in & QUEUE_SH) {
		if (!testsStarted) {
			atLeastOneTest = true;
			//Queue the test
		}
	}
	if (mess_in & QUEUE_SV) {
		if (!testsStarted) {
			atLeastOneTest = true;
			//Queue the test
		}
	}
	if (mess_in & QUEUE_VMS) {
		//if (!testsStarted) {
			//atLeastOneTest = true;
			//Queue the test
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("VMS Received"));

		//}
	}
	if (mess_in & QUEUE_VORH) {
		if (!testsStarted) {
			atLeastOneTest = true;

			//Queue the test
		}
	}
	if (mess_in & QUEUE_VORV) {
		if (!testsStarted) {
			atLeastOneTest = true;
			//Queue the test
		}
	}
	if (mess_in & STOP_ALL) {
		atLeastOneTest = false;
		testsStarted = false;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("STOP TESTS"));

		ipcController->sendMessage(TESTS_COMPLETED);
	}

	if (atLeastOneTest) {
		testsStarted = true;
		ipcController->sendMessage(SP_STARTED);
	}

}
