
// Fill out your copyright notice in the Description page of Project Settings.


#include "AInterfaceNetworkHandler.h"

// Sets default values
AAInterfaceNetworkHandler::AAInterfaceNetworkHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Networking configuration
	FIPv4Address ip(127, 0, 0, 1);
	Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetLoopbackAddress();


	if (Socket->Bind(*addr)) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bind Successful!"));

	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bind Not Successful!"));
	}
	
	

}

// Called when the game starts or when spawned
void AAInterfaceNetworkHandler::BeginPlay()
{
	Super::BeginPlay();
	FString path = FPaths::ProjectDir();
	path.Append("Binaries/Win64/DesktopInterface.exe");
	InterfaceHandle = FPlatformProcess::CreateProc(*path, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FPaths::ConvertRelativePathToFull(path));

	if (InterfaceHandle.IsValid()){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Process Loaded!"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid Process!"));

	}

	Socket->Listen(8);



}

// Called every frame
void AAInterfaceNetworkHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	FString socket;
	Socket->Accept(socket);


	
}

