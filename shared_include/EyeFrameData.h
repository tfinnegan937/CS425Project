// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define EyeFrameNumOfMembers 6

//#include "CoreMinimal.h"

/**
 * 
 */
struct EyeFrameData
{
    EyeFrameData(){};
    ~EyeFrameData(){};
    int timestamp;
    float fixation;
    float leftEyeDirection;
    float rightEyeDirection;
    float leftEyeOrigin;
    float rightEyeOrigin;
};
