// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AVMS.generated.h"

UCLASS()
class CS425PROJECT_API AAVMS : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAVMS();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Completion Identifiers")
	bool isCompleted = true;
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
