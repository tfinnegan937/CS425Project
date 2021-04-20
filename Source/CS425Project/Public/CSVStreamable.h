// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EyeTrackerTypes.h"
#include "SaveTestToTempCSV.h"
/**
 * 
 */
class CS425PROJECT_API CSVStreamable
{
private:
	CSVTempStream * csvStream;
public:
	CSVStreamable();
	~CSVStreamable();

	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
	void SaveSymptomData(int headache, int dizziness, int nausea, int fogginess);

	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
	void SaveConvergenceData(float first, float second, float third);

	UFUNCTION(BlueprintCallable, Category = "IPC Functions")
	void SaveEyeFrameData(float timestamp, int test, FEyeTrackerGazeData& combinedEye, FEyeTrackerStereoGazeData& soloEyes, FVector& localBallPosition, FVector& worldBallPosition, FVector& headPosition, FVector& headOrientation);
	
	void Closeup(int test);

};
