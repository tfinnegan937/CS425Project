// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CS425Project/Public/InterfaceNetworkHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceNetworkHandler() {}
// Cross Module References
	CS425PROJECT_API UClass* Z_Construct_UClass_AInterfaceNetworkHandler_NoRegister();
	CS425PROJECT_API UClass* Z_Construct_UClass_AInterfaceNetworkHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CS425Project();
// End Cross Module References
	void AInterfaceNetworkHandler::StaticRegisterNativesAInterfaceNetworkHandler()
	{
	}
	UClass* Z_Construct_UClass_AInterfaceNetworkHandler_NoRegister()
	{
		return AInterfaceNetworkHandler::StaticClass();
	}
	struct Z_Construct_UClass_AInterfaceNetworkHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInterfaceNetworkHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CS425Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterfaceNetworkHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*THIS IS A DEAD CLASS FROM A PREVIOUS VERSION. CANNOT FIGURE OUT HOW TO SAFELY REMOVE IT. DO NOT USE*/" },
		{ "IncludePath", "InterfaceNetworkHandler.h" },
		{ "ModuleRelativePath", "Public/InterfaceNetworkHandler.h" },
		{ "ToolTip", "THIS IS A DEAD CLASS FROM A PREVIOUS VERSION. CANNOT FIGURE OUT HOW TO SAFELY REMOVE IT. DO NOT USE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInterfaceNetworkHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterfaceNetworkHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInterfaceNetworkHandler_Statics::ClassParams = {
		&AInterfaceNetworkHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInterfaceNetworkHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceNetworkHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInterfaceNetworkHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInterfaceNetworkHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInterfaceNetworkHandler, 3066340997);
	template<> CS425PROJECT_API UClass* StaticClass<AInterfaceNetworkHandler>()
	{
		return AInterfaceNetworkHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInterfaceNetworkHandler(Z_Construct_UClass_AInterfaceNetworkHandler, &AInterfaceNetworkHandler::StaticClass, TEXT("/Script/CS425Project"), TEXT("AInterfaceNetworkHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInterfaceNetworkHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
