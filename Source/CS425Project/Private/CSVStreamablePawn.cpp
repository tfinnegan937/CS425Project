// Fill out your copyright notice in the Description page of Project Settings.


#include "CSVStreamablePawn.h"
#include "SymptomScores.h"
#include "CreateEyeFrame.h"
// Sets default values
ACSVStreamablePawn::ACSVStreamablePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACSVStreamablePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACSVStreamablePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACSVStreamablePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACSVStreamablePawn::SaveSymptomData(int headache, int dizziness, int nausea, int fogginess) {
	SymptomScores scores;

	scores.headache = headache;
	scores.dizziness = dizziness;
	scores.nausea = nausea;
	scores.fogginess = fogginess;

	csvStream->SaveSymptomScore(scores);
}


void ACSVStreamablePawn::SaveConvergenceData(float first, float second, float third) {
	csvStream->SaveConvergence(first, second, third);
}

void ACSVStreamablePawn::SaveEyeFrameData(float timestamp, int test, FEyeTrackerGazeData combinedEye, FEyeTrackerStereoGazeData soloEyes, FVector localBallPosition, FVector worldBallPosition, FVector headPosition, FVector headOrientation) {
	EyeFrameData frame = CreateEyeFrame(timestamp, (EyeTests::Tests)test, combinedEye, soloEyes, localBallPosition, worldBallPosition, headPosition, headOrientation);
}

void ACSVStreamablePawn::Closeup(int test) {
	csvStream->CloseoutTemp((EyeTests::Tests)test);
}