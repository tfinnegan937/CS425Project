// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "EyeFrameData.h"
//#include "CoreMinimal.h"

/**
 * 
 */
struct EyeSessionData
{
    EyeSessionData(){};
    ~EyeSessionData(){};
    std::vector<EyeFrameData> eyeFrames;
};
