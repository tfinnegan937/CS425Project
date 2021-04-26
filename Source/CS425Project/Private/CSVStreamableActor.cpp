// Fill out your copyright notice in the Description page of Project Settings.


#include "CSVStreamableActor.h"
#include "SymptomScores.h"
#include "CreateEyeFrame.h"
// Sets default values
ACSVStreamableActor::ACSVStreamableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	csvStream = new CSVTempStream();


}

// Called when the game starts or when spawned
void ACSVStreamableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACSVStreamableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ACSVStreamableActor::SaveSymptomData(int headache, int dizziness, int nausea, int fogginess, bool isBaseline) {
	SymptomScores scores;

	scores.headache = headache;
	scores.dizziness = dizziness;
	scores.nausea = nausea;
	scores.fogginess = fogginess;

	csvStream->SaveSymptomScore(scores, isBaseline);
}


void ACSVStreamableActor::SaveConvergenceData(float first, float second, float third) {
	csvStream->SaveConvergence(first, second, third);
}

void ACSVStreamableActor::SaveEyeFrameData(float timestamp, int test, FEyeTrackerGazeData combinedEye, FEyeTrackerStereoGazeData soloEyes, FVector localBallPosition, FVector worldBallPosition, FVector headPosition, FVector headOrientation) {
	EyeFrameData frame = CreateEyeFrame(timestamp, (EyeTests::Tests)test, combinedEye, soloEyes, localBallPosition, worldBallPosition, headPosition, headOrientation);
}

void ACSVStreamableActor::Closeup(int test) {
	csvStream->CloseoutTemp((EyeTests::Tests)test);
}

