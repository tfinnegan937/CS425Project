// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include "EyeTrackerTypes.h"
#include "SaveTestToTempCSV.h"
#include "CSVStreamablePawn.generated.h"

UCLASS()
class CS425PROJECT_API ACSVStreamablePawn : public APawn
{
	GENERATED_BODY()
private:
	CSVTempStream* csvStream;
public:
	// Sets default values for this pawn's properties
	ACSVStreamablePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
		void SaveSymptomData(int headache, int dizziness, int nausea, int fogginess);

	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
		void SaveConvergenceData(float first, float second, float third);

	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
		void SaveEyeFrameData(float timestamp, int test, FEyeTrackerGazeData combinedEye, FEyeTrackerStereoGazeData soloEyes, FVector localBallPosition, FVector worldBallPosition, FVector headPosition, FVector headOrientation);

	void Closeup(int test);
};
