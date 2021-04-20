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
    float symptomHeadache = 0;
    float symptomDizziness = 0;
    float symptomNausea = 0;
    float symptomFogginess = 0;
    float convergence_measurements[3] = {0.0};
    std::vector<EyeFrameData> eyeFrames;
};
