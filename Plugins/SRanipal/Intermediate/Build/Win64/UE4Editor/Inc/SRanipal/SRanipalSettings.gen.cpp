// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipal/Private/SRanipalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipalSettings() {}
// Cross Module References
	SRANIPAL_API UClass* Z_Construct_UClass_USRanipalSettings_NoRegister();
	SRANIPAL_API UClass* Z_Construct_UClass_USRanipalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SRanipal();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedEyeVersion();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedLipVersion();
// End Cross Module References
	void USRanipalSettings::StaticRegisterNativesUSRanipalSettings()
	{
	}
	UClass* Z_Construct_UClass_USRanipalSettings_NoRegister()
	{
		return USRanipalSettings::StaticClass();
	}
	struct Z_Construct_UClass_USRanipalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableEyeByDefault_MetaData[];
#endif
		static void NewProp_EnableEyeByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableEyeByDefault;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeVersion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableLipByDefault_MetaData[];
#endif
		static void NewProp_EnableLipByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableLipByDefault;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LipVersion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LipVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LipVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USRanipalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the SRanipal.\n */" },
		{ "IncludePath", "SRanipalSettings.h" },
		{ "ModuleRelativePath", "Private/SRanipalSettings.h" },
		{ "ToolTip", "Implements the settings for the SRanipal." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault_MetaData[] = {
		{ "Category", "Eye Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/SRanipalSettings.h" },
	};
#endif
	void Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault_SetBit(void* Obj)
	{
		((USRanipalSettings*)Obj)->EnableEyeByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault = { "EnableEyeByDefault", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USRanipalSettings), &Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion_MetaData[] = {
		{ "Category", "Eye Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/SRanipalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion = { "EyeVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USRanipalSettings, EyeVersion), Z_Construct_UEnum_SRanipal_SupportedEyeVersion, METADATA_PARAMS(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault_MetaData[] = {
		{ "Category", "Lip Settings" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/SRanipalSettings.h" },
	};
#endif
	void Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault_SetBit(void* Obj)
	{
		((USRanipalSettings*)Obj)->EnableLipByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault = { "EnableLipByDefault", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USRanipalSettings), &Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion_MetaData[] = {
		{ "Category", "Lip Settings" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/SRanipalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion = { "LipVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USRanipalSettings, LipVersion), Z_Construct_UEnum_SRanipal_SupportedLipVersion, METADATA_PARAMS(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USRanipalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableEyeByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EyeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_EnableLipByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USRanipalSettings_Statics::NewProp_LipVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USRanipalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USRanipalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USRanipalSettings_Statics::ClassParams = {
		&USRanipalSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USRanipalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USRanipalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USRanipalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USRanipalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USRanipalSettings, 4205936970);
	template<> SRANIPAL_API UClass* StaticClass<USRanipalSettings>()
	{
		return USRanipalSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USRanipalSettings(Z_Construct_UClass_USRanipalSettings, &USRanipalSettings::StaticClass, TEXT("/Script/SRanipal"), TEXT("USRanipalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USRanipalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
