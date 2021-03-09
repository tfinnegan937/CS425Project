// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalEye/Public/DartBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDartBoard() {}
// Cross Module References
	SRANIPALEYE_API UClass* Z_Construct_UClass_ADartBoard_NoRegister();
	SRANIPALEYE_API UClass* Z_Construct_UClass_ADartBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SRanipalEye();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ADartBoard::StaticRegisterNativesADartBoard()
	{
	}
	UClass* Z_Construct_UClass_ADartBoard_NoRegister()
	{
		return ADartBoard::StaticClass();
	}
	struct Z_Construct_UClass_ADartBoard_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoardMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoardMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADartBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipalEye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADartBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DartBoard.h" },
		{ "ModuleRelativePath", "Public/DartBoard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADartBoard_Statics::NewProp_PlayerCameraRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/DartBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADartBoard_Statics::NewProp_PlayerCameraRef = { "PlayerCameraRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADartBoard, PlayerCameraRef), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADartBoard_Statics::NewProp_PlayerCameraRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::NewProp_PlayerCameraRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADartBoard_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "Category", "DartBoard" },
		{ "ModuleRelativePath", "Public/DartBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADartBoard_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADartBoard, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADartBoard_Statics::NewProp_ParentMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::NewProp_ParentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADartBoard_Statics::NewProp_BoardMesh_MetaData[] = {
		{ "Category", "DartBoard" },
		{ "Comment", "// The dartboard's position\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DartBoard.h" },
		{ "ToolTip", "The dartboard's position" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADartBoard_Statics::NewProp_BoardMesh = { "BoardMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADartBoard, BoardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADartBoard_Statics::NewProp_BoardMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::NewProp_BoardMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADartBoard_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "DartBoard" },
		{ "ModuleRelativePath", "Public/DartBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADartBoard_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADartBoard, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADartBoard_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADartBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADartBoard_Statics::NewProp_PlayerCameraRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADartBoard_Statics::NewProp_ParentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADartBoard_Statics::NewProp_BoardMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADartBoard_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADartBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADartBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADartBoard_Statics::ClassParams = {
		&ADartBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADartBoard_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADartBoard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADartBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADartBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADartBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADartBoard, 1348607658);
	template<> SRANIPALEYE_API UClass* StaticClass<ADartBoard>()
	{
		return ADartBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADartBoard(Z_Construct_UClass_ADartBoard, &ADartBoard::StaticClass, TEXT("/Script/SRanipalEye"), TEXT("ADartBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADartBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
