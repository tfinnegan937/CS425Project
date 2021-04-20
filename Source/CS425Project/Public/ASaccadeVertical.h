// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSVStreamable.h"

#include "ASaccadeVertical.generated.h"

UCLASS()
class CS425PROJECT_API AASaccadeVertical : public AActor, public CSVStreamable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AASaccadeVertical();
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
