// Fill out your copyright notice in the Description page of Project Settings.


#include "CreateEyeFrame.h"

EyeFrameData CreateEyeFrame(float timestamp, int test_number, FEyeTrackerGazeData& combinedEye, FEyeTrackerStereoGazeData& soloEyes, FVector& localBallPosition, FVector& worldBallPosition, FVector& headPosition, FVector& headOrientation)
{
	EyeFrameData to_return;

	to_return.timestamp = timestamp;
	to_return.test = test_number;

	to_return.localDotPosition[0] = localBallPosition[0];
	to_return.localDotPosition[1] = localBallPosition[1];
	to_return.localDotPosition[2] = localBallPosition[2];

	to_return.worldDotPosition[0] = worldBallPosition[0];
	to_return.worldDotPosition[1] = worldBallPosition[1];
	to_return.worldDotPosition[2] = worldBallPosition[2];

	to_return.headPosition[0] = headPosition[0];
	to_return.headPosition[1] = headPosition[1];
	to_return.headPosition[2] = headPosition[2];

	to_return.headOrientation[0] = headOrientation[0];
	to_return.headOrientation[1] = headOrientation[1];
	to_return.headOrientation[2] = headOrientation[2];

	to_return.leftEyeOrigin[0] = soloEyes.LeftEyeOrigin[0];
	to_return.leftEyeOrigin[1] = soloEyes.LeftEyeOrigin[1];
	to_return.leftEyeOrigin[2] = soloEyes.LeftEyeOrigin[2];

	to_return.leftEyeDirection[0] = soloEyes.LeftEyeDirection[0];
	to_return.leftEyeDirection[1] = soloEyes.LeftEyeDirection[1];
	to_return.leftEyeDirection[2] = soloEyes.LeftEyeDirection[2];

	to_return.rightEyeOrigin[0] = soloEyes.RightEyeOrigin[0];
	to_return.rightEyeOrigin[1] = soloEyes.RightEyeOrigin[1];
	to_return.rightEyeOrigin[2] = soloEyes.RightEyeOrigin[2];

	to_return.rightEyeDirection[0] = soloEyes.RightEyeDirection[0];
	to_return.rightEyeDirection[1] = soloEyes.RightEyeDirection[1];
	to_return.rightEyeDirection[2] = soloEyes.RightEyeDirection[2];

	to_return.combinedEyeDirection[0] = combinedEye.GazeDirection[0];
	to_return.combinedEyeDirection[1] = combinedEye.GazeDirection[1];
	to_return.combinedEyeDirection[2] = combinedEye.GazeDirection[2];

	to_return.combinedEyeOrigin[0] = combinedEye.GazeOrigin[0];
	to_return.combinedEyeOrigin[1] = combinedEye.GazeOrigin[1];
	to_return.combinedEyeOrigin[2] = combinedEye.GazeOrigin[2];

	to_return.fixation[0] = combinedEye.FixationPoint[0];
	to_return.fixation[1] = combinedEye.FixationPoint[1];
	to_return.fixation[2] = combinedEye.FixationPoint[2];

	return to_return;
}