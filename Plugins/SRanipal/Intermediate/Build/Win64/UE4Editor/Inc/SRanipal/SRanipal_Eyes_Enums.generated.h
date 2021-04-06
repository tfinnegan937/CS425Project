// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SRANIPAL_SRanipal_Eyes_Enums_generated_h
#error "SRanipal_Eyes_Enums.generated.h already included, missing '#pragma once' in SRanipal_Eyes_Enums.h"
#endif
#define SRANIPAL_SRanipal_Eyes_Enums_generated_h

#define VPVR_Plugins_SRanipal_Source_SRanipal_Public_Eye_SRanipal_Eyes_Enums_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFocusInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SRANIPAL_API UScriptStruct* StaticStruct<struct FFocusInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VPVR_Plugins_SRanipal_Source_SRanipal_Public_Eye_SRanipal_Eyes_Enums_h


#define FOREACH_ENUM_CALIBRATIONRESULT(op) \
	op(CalibrationResult::SUCCESS) \
	op(CalibrationResult::FAIL) \
	op(CalibrationResult::BUSY) 

enum class CalibrationResult : uint8;
template<> SRANIPAL_API UEnum* StaticEnum<CalibrationResult>();

#define FOREACH_ENUM_EYESHAPE(op) \
	op(EyeShape::Eye_Left_Blink) \
	op(EyeShape::Eye_Left_Wide) \
	op(EyeShape::Eye_Left_Right) \
	op(EyeShape::Eye_Left_Left) \
	op(EyeShape::Eye_Left_Up) \
	op(EyeShape::Eye_Left_Down) \
	op(EyeShape::Eye_Right_Blink) \
	op(EyeShape::Eye_Right_Wide) \
	op(EyeShape::Eye_Right_Right) \
	op(EyeShape::Eye_Right_Left) \
	op(EyeShape::Eye_Right_Up) \
	op(EyeShape::Eye_Right_Down) \
	op(EyeShape::Eye_Frown) \
	op(EyeShape::Eye_Left_Squeeze) \
	op(EyeShape::Eye_Right_Squeeze) \
	op(EyeShape::Max) \
	op(EyeShape::None) 

enum class EyeShape : uint8;
template<> SRANIPAL_API UEnum* StaticEnum<EyeShape>();

#define FOREACH_ENUM_GAZEINDEX(op) \
	op(GazeIndex::LEFT) \
	op(GazeIndex::RIGHT) \
	op(GazeIndex::COMBINE) 

enum class GazeIndex : uint8;
template<> SRANIPAL_API UEnum* StaticEnum<GazeIndex>();

#define FOREACH_ENUM_EYEINDEX(op) \
	op(EyeIndex::LEFT) \
	op(EyeIndex::RIGHT) 

enum class EyeIndex : uint8;
template<> SRANIPAL_API UEnum* StaticEnum<EyeIndex>();

#define FOREACH_ENUM_SUPPORTEDEYEVERSION(op) \
	op(SupportedEyeVersion::version1) \
	op(SupportedEyeVersion::version2) 

enum class SupportedEyeVersion : uint8;
template<> SRANIPAL_API UEnum* StaticEnum<SupportedEyeVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
