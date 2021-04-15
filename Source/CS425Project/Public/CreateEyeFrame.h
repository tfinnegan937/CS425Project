// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EyeFrameData.h"
#include "EyeTrackerTypes.h"
#include "Math/Vector.h"
#include "CoreMinimal.h"


EyeFrameData CreateEyeFrame(FEyeTrackerGazeData& soloEyes, FEyeTrackerStereoGazeData& combinedEye, FVector& localBallPosition, FVector& worldBallPosition);