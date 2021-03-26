// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define EyeFrameNumOfMembers 6
#include <vector>

//#include "CoreMinimal.h"

/**
 * 
 */
struct EyeFrameData
{
    EyeFrameData(){};
    ~EyeFrameData(){};
    int timestamp = 0;
    float fixation[3] = {0};
    float leftEyeDirection[3] = {0};
    float rightEyeDirection[3] = {0};
    float leftEyeOrigin[3] = {0};
    float rightEyeOrigin[3] = {0};
};
