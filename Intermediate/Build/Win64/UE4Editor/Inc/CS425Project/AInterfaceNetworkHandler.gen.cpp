// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CS425Project/AInterfaceNetworkHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAInterfaceNetworkHandler() {}
// Cross Module References
	CS425PROJECT_API UClass* Z_Construct_UClass_AAInterfaceNetworkHandler_NoRegister();
	CS425PROJECT_API UClass* Z_Construct_UClass_AAInterfaceNetworkHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CS425Project();
// End Cross Module References
	void AAInterfaceNetworkHandler::StaticRegisterNativesAAInterfaceNetworkHandler()
	{
	}
	UClass* Z_Construct_UClass_AAInterfaceNetworkHandler_NoRegister()
	{
		return AAInterfaceNetworkHandler::StaticClass();
	}
	struct Z_Construct_UClass_AAInterfaceNetworkHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CS425Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AInterfaceNetworkHandler.h" },
		{ "ModuleRelativePath", "AInterfaceNetworkHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAInterfaceNetworkHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::ClassParams = {
		&AAInterfaceNetworkHandler::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAInterfaceNetworkHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAInterfaceNetworkHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAInterfaceNetworkHandler, 2959645032);
	template<> CS425PROJECT_API UClass* StaticClass<AAInterfaceNetworkHandler>()
	{
		return AAInterfaceNetworkHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAInterfaceNetworkHandler(Z_Construct_UClass_AAInterfaceNetworkHandler, &AAInterfaceNetworkHandler::StaticClass, TEXT("/Script/CS425Project"), TEXT("AAInterfaceNetworkHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAInterfaceNetworkHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
