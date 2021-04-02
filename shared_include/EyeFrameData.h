// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define EyeFrameNumOfMembers 12

//#include "CoreMinimal.h"

/**
 * 
 */
struct EyeFrameData
{
    EyeFrameData(){};
    ~EyeFrameData(){};
    int timestamp = 0;
    float localDotPosition[3] = {0};
    float worldDotPosition[3] = {0};
    float headPosition[3] = {0};
    float headOrientation[3] = {0};
    float leftEyeOrigin[3] = {0};
    float leftEyeDirection[3] = {0};
    float rightEyeDirection[3] = {0};
    float rightEyeOrigin[3] = {0};
    float combinedEyeDirection[3] = {0};
    float combinedEyeOrigin[3] = {0};
    float fixation[3] = {0};
};
