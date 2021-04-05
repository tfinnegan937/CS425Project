// Fill out your copyright notice in the Description page of Project Settings.


#include "TestController.h"
// Sets default values
ATestController::ATestController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
 
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
}

// Called every frame
void ATestController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

