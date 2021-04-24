// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSVStreamableActor.h"
#include "AUIController.generated.h"

/**
 * 
 */
UCLASS()
class CS425PROJECT_API AAUIController : public ACSVStreamableActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AAUIController();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Completion Identifiers")
		bool isCompleted = true;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Output")
		void StartTest();

	UFUNCTION(BlueprintImplementableEvent, Category = "Output")
		void StopTest();

};
