// Fill out your copyright notice in the Description page of Project Settings.


#include "CSVStreamable.h"
#include "SymptomScores.h"
#include "CreateEyeFrame.h"
CSVStreamable::CSVStreamable()
{
	csvStream = new CSVTempStream();
}



void CSVStreamable::SaveSymptomData(int headache, int dizziness, int nausea, int fogginess) {
	SymptomScores scores;

	scores.headache = headache;
	scores.dizziness = dizziness;
	scores.nausea = nausea;
	scores.fogginess = fogginess;

	csvStream->SaveSymptomScore(scores);
}


void CSVStreamable::SaveConvergenceData(float first, float second, float third) {
	csvStream->SaveConvergence(first, second, third);
}

void CSVStreamable::SaveEyeFrameData(float timestamp, int test, FEyeTrackerGazeData combinedEye, FEyeTrackerStereoGazeData soloEyes, FVector localBallPosition, FVector worldBallPosition, FVector headPosition, FVector headOrientation) {
	EyeFrameData frame = CreateEyeFrame(timestamp, (EyeTests::Tests)test, combinedEye, soloEyes, localBallPosition, worldBallPosition, headPosition, headOrientation);
	//csvStream->SaveFrameToTemp(frame); ??? 
}

void CSVStreamable::Closeup(int test) {
	csvStream->CloseoutTemp((EyeTests::Tests)test);
}