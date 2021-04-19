// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EyeFrameData.h"
#include "EyeTestEnum.h"
#include "EyeTrackerTypes.h"
#include "Math/Vector.h"
#include "CoreMinimal.h"


EyeFrameData CreateEyeFrame(float timestamp, EyeTests::Tests test, FEyeTrackerGazeData& combinedEye, FEyeTrackerStereoGazeData& soloEyes, FVector& localBallPosition, FVector& worldBallPosition, FVector& headPosition, FVector& headOrientation);