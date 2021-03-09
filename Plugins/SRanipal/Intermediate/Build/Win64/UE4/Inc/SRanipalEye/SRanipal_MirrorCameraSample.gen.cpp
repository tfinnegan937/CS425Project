// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalEye/Public/SRanipal_MirrorCameraSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipal_MirrorCameraSample() {}
// Cross Module References
	SRANIPALEYE_API UClass* Z_Construct_UClass_ASRanipal_MirrorCameraSample_NoRegister();
	SRANIPALEYE_API UClass* Z_Construct_UClass_ASRanipal_MirrorCameraSample();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SRanipalEye();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ASRanipal_MirrorCameraSample::StaticRegisterNativesASRanipal_MirrorCameraSample()
	{
	}
	UClass* Z_Construct_UClass_ASRanipal_MirrorCameraSample_NoRegister()
	{
		return ASRanipal_MirrorCameraSample::StaticClass();
	}
	struct Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalEye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the sample actor can move a 2D mirror in front of user.\n* The actor can let user see avatar's facial expression in mirror.\n*/" },
		{ "IncludePath", "SRanipal_MirrorCameraSample.h" },
		{ "ModuleRelativePath", "Public/SRanipal_MirrorCameraSample.h" },
		{ "ToolTip", "This is the sample actor can move a 2D mirror in front of user.\nThe actor can let user see avatar's facial expression in mirror." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_PlayerCameraRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/SRanipal_MirrorCameraSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_PlayerCameraRef = { "PlayerCameraRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_MirrorCameraSample, PlayerCameraRef), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_PlayerCameraRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_PlayerCameraRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_MirrorCameraSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_MirrorCameraSample, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_PlayerCameraRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRanipal_MirrorCameraSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::ClassParams = {
		&ASRanipal_MirrorCameraSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASRanipal_MirrorCameraSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASRanipal_MirrorCameraSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASRanipal_MirrorCameraSample, 546652993);
	template<> SRANIPALEYE_API UClass* StaticClass<ASRanipal_MirrorCameraSample>()
	{
		return ASRanipal_MirrorCameraSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASRanipal_MirrorCameraSample(Z_Construct_UClass_ASRanipal_MirrorCameraSample, &ASRanipal_MirrorCameraSample::StaticClass, TEXT("/Script/SRanipalEye"), TEXT("ASRanipal_MirrorCameraSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASRanipal_MirrorCameraSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
