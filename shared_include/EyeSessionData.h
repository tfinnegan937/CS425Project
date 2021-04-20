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
    int changeOfSymptoms = 0;
    int symptomScore = 0;
    std::vector<EyeFrameData> eyeFrames;
};
