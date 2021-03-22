// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
struct EyeFrameData
{
	EyeFrameData();
	~EyeFrameData();
	float[3] fixation;
	float[3] leftEyeDirection;
	float[3] rightEyeDirection;
	float[3] leftEyeOrigin;
	float[3] leftEyeOrigin;
	__int16 timestamp;
};
