// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipal/Public/Eye/SRanipal_Eyes_Enums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipal_Eyes_Enums() {}
// Cross Module References
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_CalibrationResult();
	UPackage* Z_Construct_UPackage__Script_SRanipal();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_EyeShape();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_GazeIndex();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_EyeIndex();
	SRANIPAL_API UEnum* Z_Construct_UEnum_SRanipal_SupportedEyeVersion();
	SRANIPAL_API UScriptStruct* Z_Construct_UScriptStruct_FFocusInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* CalibrationResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipal_CalibrationResult, Z_Construct_UPackage__Script_SRanipal(), TEXT("CalibrationResult"));
		}
		return Singleton;
	}
	template<> SRANIPAL_API UEnum* StaticEnum<CalibrationResult>()
	{
		return CalibrationResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CalibrationResult(CalibrationResult_StaticEnum, TEXT("/Script/SRanipal"), TEXT("CalibrationResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipal_CalibrationResult_Hash() { return 2960736279U; }
	UEnum* Z_Construct_UEnum_SRanipal_CalibrationResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CalibrationResult"), 0, Get_Z_Construct_UEnum_SRanipal_CalibrationResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CalibrationResult::SUCCESS", (int64)CalibrationResult::SUCCESS },
				{ "CalibrationResult::FAIL", (int64)CalibrationResult::FAIL },
				{ "CalibrationResult::BUSY", (int64)CalibrationResult::BUSY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BUSY.DisplayName", "BUSY" },
				{ "BUSY.Name", "CalibrationResult::BUSY" },
				{ "FAIL.DisplayName", "FAIL" },
				{ "FAIL.Name", "CalibrationResult::FAIL" },
				{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
				{ "SUCCESS.DisplayName", "SUCCESS" },
				{ "SUCCESS.Name", "CalibrationResult::SUCCESS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipal,
				nullptr,
				"CalibrationResult",
				"CalibrationResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EyeShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipal_EyeShape, Z_Construct_UPackage__Script_SRanipal(), TEXT("EyeShape"));
		}
		return Singleton;
	}
	template<> SRANIPAL_API UEnum* StaticEnum<EyeShape>()
	{
		return EyeShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EyeShape(EyeShape_StaticEnum, TEXT("/Script/SRanipal"), TEXT("EyeShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipal_EyeShape_Hash() { return 3203876084U; }
	UEnum* Z_Construct_UEnum_SRanipal_EyeShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EyeShape"), 0, Get_Z_Construct_UEnum_SRanipal_EyeShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EyeShape::Eye_Left_Blink", (int64)EyeShape::Eye_Left_Blink },
				{ "EyeShape::Eye_Left_Wide", (int64)EyeShape::Eye_Left_Wide },
				{ "EyeShape::Eye_Left_Right", (int64)EyeShape::Eye_Left_Right },
				{ "EyeShape::Eye_Left_Left", (int64)EyeShape::Eye_Left_Left },
				{ "EyeShape::Eye_Left_Up", (int64)EyeShape::Eye_Left_Up },
				{ "EyeShape::Eye_Left_Down", (int64)EyeShape::Eye_Left_Down },
				{ "EyeShape::Eye_Right_Blink", (int64)EyeShape::Eye_Right_Blink },
				{ "EyeShape::Eye_Right_Wide", (int64)EyeShape::Eye_Right_Wide },
				{ "EyeShape::Eye_Right_Right", (int64)EyeShape::Eye_Right_Right },
				{ "EyeShape::Eye_Right_Left", (int64)EyeShape::Eye_Right_Left },
				{ "EyeShape::Eye_Right_Up", (int64)EyeShape::Eye_Right_Up },
				{ "EyeShape::Eye_Right_Down", (int64)EyeShape::Eye_Right_Down },
				{ "EyeShape::Eye_Frown", (int64)EyeShape::Eye_Frown },
				{ "EyeShape::Eye_Left_Squeeze", (int64)EyeShape::Eye_Left_Squeeze },
				{ "EyeShape::Eye_Right_Squeeze", (int64)EyeShape::Eye_Right_Squeeze },
				{ "EyeShape::Max", (int64)EyeShape::Max },
				{ "EyeShape::None", (int64)EyeShape::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** The avatar's eye relative blend shape.*/" },
				{ "Eye_Frown.DisplayName", "Eye_Frown" },
				{ "Eye_Frown.Name", "EyeShape::Eye_Frown" },
				{ "Eye_Left_Blink.DisplayName", "Eye_Left_Blink" },
				{ "Eye_Left_Blink.Name", "EyeShape::Eye_Left_Blink" },
				{ "Eye_Left_Down.DisplayName", "Eye_Left_Down" },
				{ "Eye_Left_Down.Name", "EyeShape::Eye_Left_Down" },
				{ "Eye_Left_Left.DisplayName", "Eye_Left_Left" },
				{ "Eye_Left_Left.Name", "EyeShape::Eye_Left_Left" },
				{ "Eye_Left_Right.DisplayName", "Eye_Left_Right" },
				{ "Eye_Left_Right.Name", "EyeShape::Eye_Left_Right" },
				{ "Eye_Left_Squeeze.DisplayName", "Eye_Left_Squeeze" },
				{ "Eye_Left_Squeeze.Name", "EyeShape::Eye_Left_Squeeze" },
				{ "Eye_Left_Up.DisplayName", "Eye_Left_Up" },
				{ "Eye_Left_Up.Name", "EyeShape::Eye_Left_Up" },
				{ "Eye_Left_Wide.DisplayName", "Eye_Left_Wide" },
				{ "Eye_Left_Wide.Name", "EyeShape::Eye_Left_Wide" },
				{ "Eye_Right_Blink.DisplayName", "Eye_Right_Blink" },
				{ "Eye_Right_Blink.Name", "EyeShape::Eye_Right_Blink" },
				{ "Eye_Right_Down.DisplayName", "Eye_Right_Down" },
				{ "Eye_Right_Down.Name", "EyeShape::Eye_Right_Down" },
				{ "Eye_Right_Left.DisplayName", "Eye_Right_Left" },
				{ "Eye_Right_Left.Name", "EyeShape::Eye_Right_Left" },
				{ "Eye_Right_Right.DisplayName", "Eye_Right_Right" },
				{ "Eye_Right_Right.Name", "EyeShape::Eye_Right_Right" },
				{ "Eye_Right_Squeeze.DisplayName", "Eye_Right_Squeeze" },
				{ "Eye_Right_Squeeze.Name", "EyeShape::Eye_Right_Squeeze" },
				{ "Eye_Right_Up.DisplayName", "Eye_Right_Up" },
				{ "Eye_Right_Up.Name", "EyeShape::Eye_Right_Up" },
				{ "Eye_Right_Wide.DisplayName", "Eye_Right_Wide" },
				{ "Eye_Right_Wide.Name", "EyeShape::Eye_Right_Wide" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EyeShape::Max" },
				{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EyeShape::None" },
				{ "ToolTip", "The avatar's eye relative blend shape." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipal,
				nullptr,
				"EyeShape",
				"EyeShape",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* GazeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipal_GazeIndex, Z_Construct_UPackage__Script_SRanipal(), TEXT("GazeIndex"));
		}
		return Singleton;
	}
	template<> SRANIPAL_API UEnum* StaticEnum<GazeIndex>()
	{
		return GazeIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GazeIndex(GazeIndex_StaticEnum, TEXT("/Script/SRanipal"), TEXT("GazeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipal_GazeIndex_Hash() { return 644052813U; }
	UEnum* Z_Construct_UEnum_SRanipal_GazeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GazeIndex"), 0, Get_Z_Construct_UEnum_SRanipal_GazeIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GazeIndex::LEFT", (int64)GazeIndex::LEFT },
				{ "GazeIndex::RIGHT", (int64)GazeIndex::RIGHT },
				{ "GazeIndex::COMBINE", (int64)GazeIndex::COMBINE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMBINE.DisplayName", "COMBINE" },
				{ "COMBINE.Name", "GazeIndex::COMBINE" },
				{ "Comment", "/** Used to specify gaze ray's index. */" },
				{ "LEFT.DisplayName", "LEFT" },
				{ "LEFT.Name", "GazeIndex::LEFT" },
				{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
				{ "RIGHT.DisplayName", "RIGHT" },
				{ "RIGHT.Name", "GazeIndex::RIGHT" },
				{ "ToolTip", "Used to specify gaze ray's index." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipal,
				nullptr,
				"GazeIndex",
				"GazeIndex",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EyeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipal_EyeIndex, Z_Construct_UPackage__Script_SRanipal(), TEXT("EyeIndex"));
		}
		return Singleton;
	}
	template<> SRANIPAL_API UEnum* StaticEnum<EyeIndex>()
	{
		return EyeIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EyeIndex(EyeIndex_StaticEnum, TEXT("/Script/SRanipal"), TEXT("EyeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipal_EyeIndex_Hash() { return 1876044287U; }
	UEnum* Z_Construct_UEnum_SRanipal_EyeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EyeIndex"), 0, Get_Z_Construct_UEnum_SRanipal_EyeIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EyeIndex::LEFT", (int64)EyeIndex::LEFT },
				{ "EyeIndex::RIGHT", (int64)EyeIndex::RIGHT },
				{ "EyeIndex::MAX", (int64)EyeIndex::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Used to specify eye's index. */" },
				{ "LEFT.DisplayName", "LEFT" },
				{ "LEFT.Name", "EyeIndex::LEFT" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EyeIndex::MAX" },
				{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
				{ "RIGHT.DisplayName", "RIGHT" },
				{ "RIGHT.Name", "EyeIndex::RIGHT" },
				{ "ToolTip", "Used to specify eye's index." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipal,
				nullptr,
				"EyeIndex",
				"EyeIndex",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SupportedEyeVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipal_SupportedEyeVersion, Z_Construct_UPackage__Script_SRanipal(), TEXT("SupportedEyeVersion"));
		}
		return Singleton;
	}
	template<> SRANIPAL_API UEnum* StaticEnum<SupportedEyeVersion>()
	{
		return SupportedEyeVersion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SupportedEyeVersion(SupportedEyeVersion_StaticEnum, TEXT("/Script/SRanipal"), TEXT("SupportedEyeVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipal_SupportedEyeVersion_Hash() { return 2395102491U; }
	UEnum* Z_Construct_UEnum_SRanipal_SupportedEyeVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SupportedEyeVersion"), 0, Get_Z_Construct_UEnum_SRanipal_SupportedEyeVersion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SupportedEyeVersion::version1", (int64)SupportedEyeVersion::version1 },
				{ "SupportedEyeVersion::version2", (int64)SupportedEyeVersion::version2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
				{ "version1.Name", "SupportedEyeVersion::version1" },
				{ "version2.Name", "SupportedEyeVersion::version2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipal,
				nullptr,
				"SupportedEyeVersion",
				"SupportedEyeVersion",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFocusInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SRANIPAL_API uint32 Get_Z_Construct_UScriptStruct_FFocusInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocusInfo, Z_Construct_UPackage__Script_SRanipal(), TEXT("FocusInfo"), sizeof(FFocusInfo), Get_Z_Construct_UScriptStruct_FFocusInfo_Hash());
	}
	return Singleton;
}
template<> SRANIPAL_API UScriptStruct* StaticStruct<FFocusInfo>()
{
	return FFocusInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFocusInfo(FFocusInfo::StaticStruct, TEXT("/Script/SRanipal"), TEXT("FocusInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SRanipal_StaticRegisterNativesFFocusInfo
{
	FScriptStruct_SRanipal_StaticRegisterNativesFFocusInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FocusInfo")),new UScriptStruct::TCppStructOps<FFocusInfo>);
	}
} ScriptStruct_SRanipal_StaticRegisterNativesFFocusInfo;
	struct Z_Construct_UScriptStruct_FFocusInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct containing all focus information listed below. */" },
		{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
		{ "ToolTip", "A struct containing all focus information listed below." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocusInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocusInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "SRanipal|Struct" },
		{ "Comment", "/** Pointer to the actor which been looking at*/" },
		{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
		{ "ToolTip", "Pointer to the actor which been looking at" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFocusInfo, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_point_MetaData[] = {
		{ "Category", "SRanipal|Struct" },
		{ "Comment", "/** The hit position in world space. */" },
		{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
		{ "ToolTip", "The hit position in world space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFocusInfo, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_normal_MetaData[] = {
		{ "Category", "SRanipal|Struct" },
		{ "Comment", "/** The hit normal in world space. */" },
		{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
		{ "ToolTip", "The hit normal in world space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFocusInfo, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "SRanipal|Struct" },
		{ "Comment", "/** The hit distance from gazeOrigin to gazeTarget */" },
		{ "ModuleRelativePath", "Public/Eye/SRanipal_Eyes_Enums.h" },
		{ "ToolTip", "The hit distance from gazeOrigin to gazeTarget" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFocusInfo, distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocusInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocusInfo_Statics::NewProp_distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocusInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SRanipal,
		nullptr,
		&NewStructOps,
		"FocusInfo",
		sizeof(FFocusInfo),
		alignof(FFocusInfo),
		Z_Construct_UScriptStruct_FFocusInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocusInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFocusInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FocusInfo"), sizeof(FFocusInfo), Get_Z_Construct_UScriptStruct_FFocusInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFocusInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFocusInfo_Hash() { return 3645362952U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
