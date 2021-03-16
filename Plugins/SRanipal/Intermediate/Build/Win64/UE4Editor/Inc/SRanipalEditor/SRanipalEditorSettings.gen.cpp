// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalEditor/Private/SRanipalEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipalEditorSettings() {}
// Cross Module References
	SRANIPALEDITOR_API UClass* Z_Construct_UClass_USRanipalEditorSettings_NoRegister();
	SRANIPALEDITOR_API UClass* Z_Construct_UClass_USRanipalEditorSettings();
	SRANIPAL_API UClass* Z_Construct_UClass_USRanipalSettings();
	UPackage* Z_Construct_UPackage__Script_SRanipalEditor();
// End Cross Module References
	void USRanipalEditorSettings::StaticRegisterNativesUSRanipalEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_USRanipalEditorSettings_NoRegister()
	{
		return USRanipalEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USRanipalEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USRanipalEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USRanipalSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USRanipalEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the SRanipal.\n */" },
		{ "IncludePath", "SRanipalEditorSettings.h" },
		{ "ModuleRelativePath", "Private/SRanipalEditorSettings.h" },
		{ "ToolTip", "Implements the settings for the SRanipal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USRanipalEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USRanipalEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USRanipalEditorSettings_Statics::ClassParams = {
		&USRanipalEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USRanipalEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USRanipalEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USRanipalEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USRanipalEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USRanipalEditorSettings, 2118339895);
	template<> SRANIPALEDITOR_API UClass* StaticClass<USRanipalEditorSettings>()
	{
		return USRanipalEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USRanipalEditorSettings(Z_Construct_UClass_USRanipalEditorSettings, &USRanipalEditorSettings::StaticClass, TEXT("/Script/SRanipalEditor"), TEXT("USRanipalEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USRanipalEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
