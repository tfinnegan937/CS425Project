// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalLip/Public/SRanipalLip_FunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipalLip_FunctionLibrary() {}
// Cross Module References
	SRANIPALLIP_API UClass* Z_Construct_UClass_USRanipalLip_FunctionLibrary_NoRegister();
	SRANIPALLIP_API UClass* Z_Construct_UClass_USRanipalLip_FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SRanipalLip();
	SRANIPALLIP_API UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum();
	SRANIPALLIP_API UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedLipVersion();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USRanipalLip_FunctionLibrary::execUpdateTexture)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalLip_FunctionLibrary::UpdateTexture(Z_Param_Out_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalLip_FunctionLibrary::execGetLipWeightings_v2)
	{
		P_GET_TMAP_REF(LipShapeEnum_v2,float,Z_Param_Out_shapes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalLip_FunctionLibrary::GetLipWeightings_v2(Z_Param_Out_shapes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalLip_FunctionLibrary::execGetLipWeightings)
	{
		P_GET_TMAP_REF(LipShapeEnum,float,Z_Param_Out_shapes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalLip_FunctionLibrary::GetLipWeightings(Z_Param_Out_shapes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalLip_FunctionLibrary::execStopLipFramework)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalLip_FunctionLibrary::StopLipFramework();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USRanipalLip_FunctionLibrary::execStartLipFramework)
	{
		P_GET_ENUM(SupportedLipVersion,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		USRanipalLip_FunctionLibrary::StartLipFramework(SupportedLipVersion(Z_Param_version));
		P_NATIVE_END;
	}
	void USRanipalLip_FunctionLibrary::StaticRegisterNativesUSRanipalLip_FunctionLibrary()
	{
		UClass* Class = USRanipalLip_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLipWeightings", &USRanipalLip_FunctionLibrary::execGetLipWeightings },
			{ "GetLipWeightings_v2", &USRanipalLip_FunctionLibrary::execGetLipWeightings_v2 },
			{ "StartLipFramework", &USRanipalLip_FunctionLibrary::execStartLipFramework },
			{ "StopLipFramework", &USRanipalLip_FunctionLibrary::execStopLipFramework },
			{ "UpdateTexture", &USRanipalLip_FunctionLibrary::execUpdateTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics
	{
		struct SRanipalLip_FunctionLibrary_eventGetLipWeightings_Parms
		{
			TMap<LipShapeEnum,float> shapes;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shapes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_shapes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_shapes_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_shapes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_ValueProp = { "shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_Key_KeyProp = { "shapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SRanipalLip_LipShapeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes = { "shapes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalLip_FunctionLibrary_eventGetLipWeightings_Parms, shapes), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::NewProp_shapes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Lip" },
		{ "Comment", "/**\n\x09* @summary Get a TArray that stores weighting with respect to LipShape.\n\x09* @param[out] weightings A TArray that stores individual weighting with respect to LipShape\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@summary Get a TArray that stores weighting with respect to LipShape.\n@param[out] weightings A TArray that stores individual weighting with respect to LipShape" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalLip_FunctionLibrary, nullptr, "GetLipWeightings", nullptr, nullptr, sizeof(SRanipalLip_FunctionLibrary_eventGetLipWeightings_Parms), Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics
	{
		struct SRanipalLip_FunctionLibrary_eventGetLipWeightings_v2_Parms
		{
			TMap<LipShapeEnum_v2,float> shapes;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shapes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_shapes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_shapes_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_shapes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_ValueProp = { "shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_Key_KeyProp = { "shapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes = { "shapes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalLip_FunctionLibrary_eventGetLipWeightings_v2_Parms, shapes), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::NewProp_shapes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Lip" },
		{ "Comment", "/**\n\x09* @summary Get a TArray that stores weighting with respect to LipShape.\n\x09* @param[out] weightings A TArray that stores individual weighting with respect to LipShape\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@summary Get a TArray that stores weighting with respect to LipShape.\n@param[out] weightings A TArray that stores individual weighting with respect to LipShape" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalLip_FunctionLibrary, nullptr, "GetLipWeightings_v2", nullptr, nullptr, sizeof(SRanipalLip_FunctionLibrary_eventGetLipWeightings_v2_Parms), Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics
	{
		struct SRanipalLip_FunctionLibrary_eventStartLipFramework_Parms
		{
			SupportedLipVersion version;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_version_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::NewProp_version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalLip_FunctionLibrary_eventStartLipFramework_Parms, version), Z_Construct_UEnum_SRanipal_SupportedLipVersion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::NewProp_version_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Lip" },
		{ "Comment", "/**\n\x09* @summary Start specific version of SRanipal lip framework. \n\x09* This function blueprint will NOT work if the \"Enable Lip by Default\" is enabled in project settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@summary Start specific version of SRanipal lip framework.\nThis function blueprint will NOT work if the \"Enable Lip by Default\" is enabled in project settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalLip_FunctionLibrary, nullptr, "StartLipFramework", nullptr, nullptr, sizeof(SRanipalLip_FunctionLibrary_eventStartLipFramework_Parms), Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Lip" },
		{ "Comment", "/**\n\x09* @summary Stop SRanipal lip framework.\n\x09* This function blueprint will NOT work if the \"Enable Lip by Default\" is enabled in project settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@summary Stop SRanipal lip framework.\nThis function blueprint will NOT work if the \"Enable Lip by Default\" is enabled in project settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalLip_FunctionLibrary, nullptr, "StopLipFramework", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics
	{
		struct SRanipalLip_FunctionLibrary_eventUpdateTexture_Parms
		{
			UTexture2D* texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SRanipalLip_FunctionLibrary_eventUpdateTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::NewProp_texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "SRanipal|Lip" },
		{ "Comment", "/**\n\x09* @summary Update given texture2D with lip image.\n\x09* @param[out] texture Target texture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@summary Update given texture2D with lip image.\n@param[out] texture Target texture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USRanipalLip_FunctionLibrary, nullptr, "UpdateTexture", nullptr, nullptr, sizeof(SRanipalLip_FunctionLibrary_eventUpdateTexture_Parms), Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USRanipalLip_FunctionLibrary_NoRegister()
	{
		return USRanipalLip_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalLip,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings, "GetLipWeightings" }, // 2317013521
		{ &Z_Construct_UFunction_USRanipalLip_FunctionLibrary_GetLipWeightings_v2, "GetLipWeightings_v2" }, // 2703117564
		{ &Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StartLipFramework, "StartLipFramework" }, // 3615661867
		{ &Z_Construct_UFunction_USRanipalLip_FunctionLibrary_StopLipFramework, "StopLipFramework" }, // 4163240675
		{ &Z_Construct_UFunction_USRanipalLip_FunctionLibrary_UpdateTexture, "UpdateTexture" }, // 2947031061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief SRanipal function library about lip function.\n */" },
		{ "IncludePath", "SRanipalLip_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SRanipalLip_FunctionLibrary.h" },
		{ "ToolTip", "@brief SRanipal function library about lip function." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USRanipalLip_FunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::ClassParams = {
		&USRanipalLip_FunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USRanipalLip_FunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USRanipalLip_FunctionLibrary, 1251736124);
	template<> SRANIPALLIP_API UClass* StaticClass<USRanipalLip_FunctionLibrary>()
	{
		return USRanipalLip_FunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USRanipalLip_FunctionLibrary(Z_Construct_UClass_USRanipalLip_FunctionLibrary, &USRanipalLip_FunctionLibrary::StaticClass, TEXT("/Script/SRanipalLip"), TEXT("USRanipalLip_FunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USRanipalLip_FunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
