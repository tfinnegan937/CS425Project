// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
struct EyeFrameData
{
	//EyeFrameData();
	//~EyeFrameData();
	float fixation[3];
	float leftEyeDirection[3];
	float rightEyeDirection[3];
	float leftEyeOrigin[3];
	float rightEyeOrigin[3];
	__int16 timestamp;
};
