// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalEye/Public/SRanipal_AvatarEyeSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipal_AvatarEyeSample() {}
// Cross Module References
	SRANIPALEYE_API UClass* Z_Construct_UClass_ASRanipal_AvatarEyeSample_NoRegister();
	SRANIPALEYE_API UClass* Z_Construct_UClass_ASRanipal_AvatarEyeSample();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SRanipalEye();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_EyeShape();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedEyeVersion();
// End Cross Module References
	void ASRanipal_AvatarEyeSample::StaticRegisterNativesASRanipal_AvatarEyeSample()
	{
	}
	UClass* Z_Construct_UClass_ASRanipal_AvatarEyeSample_NoRegister()
	{
		return ASRanipal_AvatarEyeSample::StaticClass();
	}
	struct Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeShapeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EyeShapeTable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EyeShapeTable_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeShapeTable_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeShapeTable_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeAnchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EyeAnchors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeAnchors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeAnchorRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeAnchorRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeAnchorLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeAnchorLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeModelRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeModelRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeModelLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyeModelLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeVersion_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalEye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the sample actor to make an avatar with skeletal mesh.\n* In this sample, demonstrate how to use SRanipal's Eye and Lip API to achieve face expression animate.\n*/" },
		{ "IncludePath", "SRanipal_AvatarEyeSample.h" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "This is the sample actor to make an avatar with skeletal mesh.\nIn this sample, demonstrate how to use SRanipal's Eye and Lip API to achieve face expression animate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// Set your model's morph target and choose relative prediction weighting to it.\n" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "Set your model's morph target and choose relative prediction weighting to it." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable = { "EyeShapeTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeShapeTable), METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_Key_KeyProp = { "EyeShapeTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_ValueProp = { "EyeShapeTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_SRanipal_EyeShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// The array to save eye anchors.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "The array to save eye anchors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors = { "EyeAnchors", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeAnchors), METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors_Inner = { "EyeAnchors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorRight_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorRight = { "EyeAnchorRight", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeAnchorRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorLeft_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// The dummy components, used as eye model's pivot.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "The dummy components, used as eye model's pivot." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorLeft = { "EyeAnchorLeft", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeAnchorLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelRight_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelRight = { "EyeModelRight", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeModelRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelLeft_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelLeft = { "EyeModelLeft", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeModelLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_HeadModel_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// The mesh components.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "The mesh components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_HeadModel = { "HeadModel", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, HeadModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_HeadModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_HeadModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// Declare your avatar component here.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "Declare your avatar component here." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion_MetaData[] = {
		{ "Category", "SRanipal_AvatarEyeSample" },
		{ "Comment", "// Declare Lip version\n" },
		{ "ModuleRelativePath", "Public/SRanipal_AvatarEyeSample.h" },
		{ "ToolTip", "Declare Lip version" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion = { "EyeVersion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRanipal_AvatarEyeSample, EyeVersion), Z_Construct_UEnum_SRanipal_SupportedEyeVersion, METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeShapeTable_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeAnchorLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeModelLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_HeadModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::NewProp_EyeVersion_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRanipal_AvatarEyeSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::ClassParams = {
		&ASRanipal_AvatarEyeSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASRanipal_AvatarEyeSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASRanipal_AvatarEyeSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASRanipal_AvatarEyeSample, 200196763);
	template<> SRANIPALEYE_API UClass* StaticClass<ASRanipal_AvatarEyeSample>()
	{
		return ASRanipal_AvatarEyeSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASRanipal_AvatarEyeSample(Z_Construct_UClass_ASRanipal_AvatarEyeSample, &ASRanipal_AvatarEyeSample::StaticClass, TEXT("/Script/SRanipalEye"), TEXT("ASRanipal_AvatarEyeSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASRanipal_AvatarEyeSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
