// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalEye/Public/SRanipalEye_FunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipalEye_FunctionLibrary() {}
// Cross Module References
	SRANIPALEYE_API UClass* Z_Construct_UClass_USRanipalEye_FunctionLibrary_NoRegister();
	SRANIPALEYE_API UClass* Z_Construct_UClass_USRanipalEye_FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SRanipalEye();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_GazeIndex();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	SRANIPAL_API UScriptStruct* Z_Construct_UScriptStruct_FFocusInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_EyeIndex();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_EyeShape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedEyeVersion();
// End Cross Module References
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execGetEyeWeightings)
	{
		P_GET_TMAP_REF(EyeShape,float,Z_Param_Out_shapes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeWeightings(Z_Param_Out_shapes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execFocus)
	{
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_OBJECT(APlayerCameraManager,Z_Param_playerCamera);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_STRUCT_REF(FFocusInfo,Z_Param_Out_focusInfo);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::Focus(GazeIndex(Z_Param_gazeIndex),Z_Param_maxDistance,Z_Param_radius,Z_Param_playerCamera,ECollisionChannel(Z_Param_TraceChannel),Z_Param_Out_focusInfo,Z_Param_Out_gazeOrigin,Z_Param_Out_gazeTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execGetGazeRay)
	{
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetGazeRay(GazeIndex(Z_Param_gazeIndex),Z_Param_Out_origin,Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execGetPupilPosition)
	{
		P_GET_ENUM(EyeIndex,Z_Param_eye);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetPupilPosition(EyeIndex(Z_Param_eye),Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execGetEyeOpenness)
	{
		P_GET_ENUM(EyeIndex,Z_Param_eye);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_openness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeOpenness(EyeIndex(Z_Param_eye),Z_Param_Out_openness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execStopEyeFramework)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalEye_FunctionLibrary::StopEyeFramework();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalEye_FunctionLibrary::execStartEyeFramework)
	{
		P_GET_ENUM(SupportedEyeVersion,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalEye_FunctionLibrary::StartEyeFramework(SupportedEyeVersion(Z_Param_version));
		P_NATIVE_END;
	}
	void USRanipalEye_FunctionLibrary::StaticRegisterNativesUSRanipalEye_FunctionLibrary()
	{
		UClass* Class = USRanipalEye_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Focus", &USRanipalEye_FunctionLibrary::execFocus },
			{ "GetEyeOpenness", &USRanipalEye_FunctionLibrary::execGetEyeOpenness },
			{ "GetEyeWeightings", &USRanipalEye_FunctionLibrary::execGetEyeWeightings },
			{ "GetGazeRay", &USRanipalEye_FunctionLibrary::execGetGazeRay },
			{ "GetPupilPosition", &USRanipalEye_FunctionLibrary::execGetPupilPosition },
			{ "StartEyeFramework", &USRanipalEye_FunctionLibrary::execStartEyeFramework },
			{ "StopEyeFramework", &USRanipalEye_FunctionLibrary::execStopEyeFramework },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventFocus_Parms
		{
			GazeIndex gazeIndex;
			float maxDistance;
			float radius;
			APlayerCameraManager* playerCamera;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			FFocusInfo focusInfo;
			FVector gazeOrigin;
			FVector gazeTarget;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gazeIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gazeIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_focusInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gazeOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gazeTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeIndex = { "gazeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, gazeIndex), Z_Construct_UEnum_SRanipal_GazeIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_maxDistance = { "maxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, maxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, playerCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_focusInfo = { "focusInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, focusInfo), Z_Construct_UScriptStruct_FFocusInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeOrigin = { "gazeOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, gazeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeTarget = { "gazeTarget", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventFocus_Parms, gazeTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SRanipalEye_FunctionLibrary_eventFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SRanipalEye_FunctionLibrary_eventFocus_Parms), &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_maxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_focusInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_gazeTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09* Get the combined gaze ray and focusInfo when any candidate object was focused on.\n\x09* @param gazeIndex Specific which eye.\n\x09* @param maxDistance the max distance the ray should check for collisions.\n\x09* @param radius The radius of the gaze ray.\n\x09* @param playerCamera The player's camera controller. You can get this by UGameplayStatics::GetPlayerController(UWorld*, playerIndex)->PlayerCameraManager.\n\x09* @param[out] focusInfo If true is returned, focusInfo will contain the information about where the actor was focused on.\n\x09* @sa FFocusInfo\n\x09* @returns true if the gaze rays hit any actor, otherwise false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "Get the combined gaze ray and focusInfo when any candidate object was focused on.\n@param gazeIndex Specific which eye.\n@param maxDistance the max distance the ray should check for collisions.\n@param radius The radius of the gaze ray.\n@param playerCamera The player's camera controller. You can get this by UGameplayStatics::GetPlayerController(UWorld*, playerIndex)->PlayerCameraManager.\n@param[out] focusInfo If true is returned, focusInfo will contain the information about where the actor was focused on.\n@sa FFocusInfo\n@returns true if the gaze rays hit any actor, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "Focus", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventFocus_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms
		{
			EyeIndex eye;
			float openness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eye_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eye;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_openness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_eye = { "eye", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms, eye), Z_Construct_UEnum_SRanipal_EyeIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_openness = { "openness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms, openness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms), &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_eye_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_eye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_openness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09 * Get the openness of specific eye.\n\x09 * @param eye Specific which eye.\n\x09 * @param[out] openness The eye openness is clamped to the range [0,1]. when openness = 0, eye is closed. when openness = 1 eye is open.\n\x09 * @return true if the openess is valid, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "Get the openness of specific eye.\n@param eye Specific which eye.\n@param[out] openness The eye openness is clamped to the range [0,1]. when openness = 0, eye is closed. when openness = 1 eye is open.\n@return true if the openess is valid, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "GetEyeOpenness", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventGetEyeOpenness_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventGetEyeWeightings_Parms
		{
			TMap<EyeShape,float> shapes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shapes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_shapes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_shapes_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_shapes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_ValueProp = { "shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_Key_KeyProp = { "shapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SRanipal_EyeShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes = { "shapes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetEyeWeightings_Parms, shapes), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SRanipalEye_FunctionLibrary_eventGetEyeWeightings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SRanipalEye_FunctionLibrary_eventGetEyeWeightings_Parms), &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09* Get a dictionary that stores individual weighting with respect to EyeShape.\n\x09* @param[out] weightings A TArray that stores individual weighting with respect to EyeShape.\n\x09* @return true if there is any new data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "Get a dictionary that stores individual weighting with respect to EyeShape.\n@param[out] weightings A TArray that stores individual weighting with respect to EyeShape.\n@return true if there is any new data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "GetEyeWeightings", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventGetEyeWeightings_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms
		{
			GazeIndex gazeIndex;
			FVector origin;
			FVector direction;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gazeIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gazeIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_gazeIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_gazeIndex = { "gazeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms, gazeIndex), Z_Construct_UEnum_SRanipal_GazeIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms), &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_gazeIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_gazeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09* Get the gaze ray of specific eye.\n\x09* @param param gazeIndex Specific which eye.\n\x09* @param[out] origin The starting point of the ray in local coordinates.\n\x09* @param[out] direction The direction of the ray.\n\x09* @return true if the gaze ray is valid, otherwise false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "Get the gaze ray of specific eye.\n@param param gazeIndex Specific which eye.\n@param[out] origin The starting point of the ray in local coordinates.\n@param[out] direction The direction of the ray.\n@return true if the gaze ray is valid, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "GetGazeRay", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventGetGazeRay_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms
		{
			EyeIndex eye;
			FVector2D position;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eye_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eye;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_eye = { "eye", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms, eye), Z_Construct_UEnum_SRanipal_EyeIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms), &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_eye_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_eye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09 * Get the position of specific pupil. When position = (1, 1), eye looking up and right. When position = (-1, -1), looking down and left.\n\x09 * @param eye Specific which eye.\n\x09 * @param[out] position The 2d vector specify the pupil's position.\n\x09 * @return true if the position is valid, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "Get the position of specific pupil. When position = (1, 1), eye looking up and right. When position = (-1, -1), looking down and left.\n@param eye Specific which eye.\n@param[out] position The 2d vector specify the pupil's position.\n@return true if the position is valid, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "GetPupilPosition", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventGetPupilPosition_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics
	{
		struct SRanipalEye_FunctionLibrary_eventStartEyeFramework_Parms
		{
			SupportedEyeVersion version;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_version_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::NewProp_version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalEye_FunctionLibrary_eventStartEyeFramework_Parms, version), Z_Construct_UEnum_SRanipal_SupportedEyeVersion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::NewProp_version_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09* @summary Start specific version of SRanipal eye framework.\n\x09* This function blueprint will NOT work if the \"Enable Eye by Default\" is enabled in project settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "@summary Start specific version of SRanipal eye framework.\nThis function blueprint will NOT work if the \"Enable Eye by Default\" is enabled in project settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "StartEyeFramework", nullptr, nullptr, sizeof(SRanipalEye_FunctionLibrary_eventStartEyeFramework_Parms), Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Eye" },
		{ "Comment", "/**\n\x09* @summary Stop specific version of SRanipal eye framework.\n\x09* This function blueprint will NOT work if the \"Enable Eye by Default\" is enabled in project settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "@summary Stop specific version of SRanipal eye framework.\nThis function blueprint will NOT work if the \"Enable Eye by Default\" is enabled in project settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalEye_FunctionLibrary, nullptr, "StopEyeFramework", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USRanipalEye_FunctionLibrary_NoRegister()
	{
		return USRanipalEye_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalEye,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_Focus, "Focus" }, // 3348119266
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeOpenness, "GetEyeOpenness" }, // 1062337733
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetEyeWeightings, "GetEyeWeightings" }, // 910994800
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetGazeRay, "GetGazeRay" }, // 61276644
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_GetPupilPosition, "GetPupilPosition" }, // 3320016218
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StartEyeFramework, "StartEyeFramework" }, // 2707021916
		{ &Z_Construct_UFunction_USRanipalEye_FunctionLibrary_StopEyeFramework, "StopEyeFramework" }, // 619368743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief SRanipal blueprint function library about eye function.\n */" },
		{ "IncludePath", "SRanipalEye_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SRanipalEye_FunctionLibrary.h" },
		{ "ToolTip", "@brief SRanipal blueprint function library about eye function." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USRanipalEye_FunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::ClassParams = {
		&USRanipalEye_FunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USRanipalEye_FunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USRanipalEye_FunctionLibrary, 208187869);
	template<> SRANIPALEYE_API UClass* StaticClass<USRanipalEye_FunctionLibrary>()
	{
		return USRanipalEye_FunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USRanipalEye_FunctionLibrary(Z_Construct_UClass_USRanipalEye_FunctionLibrary, &USRanipalEye_FunctionLibrary::StaticClass, TEXT("/Script/SRanipalEye"), TEXT("USRanipalEye_FunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USRanipalEye_FunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
