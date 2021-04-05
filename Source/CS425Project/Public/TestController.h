// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindowsIPCControls.h"
#include "TestController.generated.h"
UCLASS()
class CS425PROJECT_API ATestController : public AActor
{
	GENERATED_BODY()
private:
	IPCCreator* ipcController;
	FTimerHandle ipcTimerHandle;
	void ipcTimerTick();
	void handleMessage(UINT16 mess);
public:	
	// Sets default values for this actor's properties
	ATestController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
