// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Misc/Paths.h"
#include "AInterfaceNetworkHandler.generated.h"

UCLASS()
class CS425PROJECT_API AAInterfaceNetworkHandler : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AAInterfaceNetworkHandler();
private:
	FSocket* Socket;
	FProcHandle InterfaceHandle;
	const int port = 21338;

	bool waitingConnection;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
