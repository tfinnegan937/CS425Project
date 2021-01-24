// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CS425Project/Public/CommunicationBufferAPIObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommunicationBufferAPIObject() {}
// Cross Module References
	CS425PROJECT_API UClass* Z_Construct_UClass_ACommunicationBufferAPIObject_NoRegister();
	CS425PROJECT_API UClass* Z_Construct_UClass_ACommunicationBufferAPIObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CS425Project();
// End Cross Module References
	void ACommunicationBufferAPIObject::StaticRegisterNativesACommunicationBufferAPIObject()
	{
	}
	UClass* Z_Construct_UClass_ACommunicationBufferAPIObject_NoRegister()
	{
		return ACommunicationBufferAPIObject::StaticClass();
	}
	struct Z_Construct_UClass_ACommunicationBufferAPIObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CS425Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommunicationBufferAPIObject.h" },
		{ "ModuleRelativePath", "Public/CommunicationBufferAPIObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommunicationBufferAPIObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::ClassParams = {
		&ACommunicationBufferAPIObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACommunicationBufferAPIObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACommunicationBufferAPIObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACommunicationBufferAPIObject, 3827605578);
	template<> CS425PROJECT_API UClass* StaticClass<ACommunicationBufferAPIObject>()
	{
		return ACommunicationBufferAPIObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACommunicationBufferAPIObject(Z_Construct_UClass_ACommunicationBufferAPIObject, &ACommunicationBufferAPIObject::StaticClass, TEXT("/Script/CS425Project"), TEXT("ACommunicationBufferAPIObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACommunicationBufferAPIObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
