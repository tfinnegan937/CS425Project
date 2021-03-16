// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalLip/Public/SRanipal_AvatarLipSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipal_AvatarLipSample() {}
// Cross Module References
	SRANIPALLIP_API UClass* Z_Construct_UClass_ASRanipal_AvatarLipSample_NoRegister();
	SRANIPALLIP_API UClass* Z_Construct_UClass_ASRanipal_AvatarLipSample();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SRanipalLip();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedLipVersion();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASRanipal_AvatarLipSample::StaticRegisterNativesASRanipal_AvatarLipSample()
	{
	}
	UClass* Z_Construct_UClass_ASRanipal_AvatarLipSample_NoRegister()
	{
		return ASRanipal_AvatarLipSample::StaticClass();
	}
	struct Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LipVersion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LipVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LipVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalLip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the sample actor to make an avatar with skeletal mesh.\n* In this sample, demonstrate how to use SRanipal's Lip functions to achieve face expression animate.\n*/" },
		{ "IncludePath", "SRanipal_AvatarLipSample.h" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
		{ "ToolTip", "This is the sample actor to make an avatar with skeletal mesh.\nIn this sample, demonstrate how to use SRanipal's Lip functions to achieve face expression animate." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion_MetaData[] = {
		{ "Category", "SRanipal_AvatarLipSample" },
		{ "Comment", "// Declare Lip version\n" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
		{ "ToolTip", "Declare Lip version" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion = { "LipVersion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarLipSample, LipVersion), Z_Construct_UEnum_SRanipal_SupportedLipVersion, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SRanipal_AvatarLipSample" },
		{ "Comment", "// Declare your avatar component here.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
		{ "ToolTip", "Declare your avatar component here." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarLipSample, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_HeadModel_MetaData[] = {
		{ "Category", "SRanipal_AvatarLipSample" },
		{ "Comment", "// The mesh components.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
		{ "ToolTip", "The mesh components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_HeadModel = { "HeadModel", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarLipSample, HeadModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_HeadModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_HeadModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeLeft_MetaData[] = {
		{ "Category", "SRanipal_AvatarLipSample" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeLeft = { "EyeLeft", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarLipSample, EyeLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeRight_MetaData[] = {
		{ "Category", "SRanipal_AvatarLipSample" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarLipSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeRight = { "EyeRight", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarLipSample, EyeRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_LipVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_HeadModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::NewProp_EyeRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRanipal_AvatarLipSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::ClassParams = {
		&ASRanipal_AvatarLipSample::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASRanipal_AvatarLipSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASRanipal_AvatarLipSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASRanipal_AvatarLipSample, 2120078230);
	template<> SRANIPALLIP_API UClass* StaticClass<ASRanipal_AvatarLipSample>()
	{
		return ASRanipal_AvatarLipSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASRanipal_AvatarLipSample(Z_Construct_UClass_ASRanipal_AvatarLipSample, &ASRanipal_AvatarLipSample::StaticClass, TEXT("/Script/SRanipalLip"), TEXT("ASRanipal_AvatarLipSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASRanipal_AvatarLipSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
