// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AConvergence.generated.h"

UCLASS()
class CS425PROJECT_API AAConvergence : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAConvergence();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Output")
	void StartTest();

	UFUNCTION(BlueprintImplementableEvent, Category = "Output")
	void StopTest();


};
