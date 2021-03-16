// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRanipalLip/Public/SRanipalLip_Core.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRanipalLip_Core() {}
// Cross Module References
	SRANIPALLIP_API UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2();
	UPackage* Z_Construct_UPackage__Script_SRanipalLip();
	SRANIPALLIP_API UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum();
// End Cross Module References
	static UEnum* LipShapeEnum_v2_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2, Z_Construct_UPackage__Script_SRanipalLip(), TEXT("LipShapeEnum_v2"));
		}
		return Singleton;
	}
	template<> SRANIPALLIP_API UEnum* StaticEnum<LipShapeEnum_v2>()
	{
		return LipShapeEnum_v2_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LipShapeEnum_v2(LipShapeEnum_v2_StaticEnum, TEXT("/Script/SRanipalLip"), TEXT("LipShapeEnum_v2"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2_Hash() { return 2390968326U; }
	UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipalLip();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LipShapeEnum_v2"), 0, Get_Z_Construct_UEnum_SRanipalLip_LipShapeEnum_v2_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LipShapeEnum_v2::Jaw_Right", (int64)LipShapeEnum_v2::Jaw_Right },
				{ "LipShapeEnum_v2::Jaw_Left", (int64)LipShapeEnum_v2::Jaw_Left },
				{ "LipShapeEnum_v2::Jaw_Forward", (int64)LipShapeEnum_v2::Jaw_Forward },
				{ "LipShapeEnum_v2::Jaw_Open", (int64)LipShapeEnum_v2::Jaw_Open },
				{ "LipShapeEnum_v2::Mouth_Ape_Shape", (int64)LipShapeEnum_v2::Mouth_Ape_Shape },
				{ "LipShapeEnum_v2::Mouth_Upper_Right", (int64)LipShapeEnum_v2::Mouth_Upper_Right },
				{ "LipShapeEnum_v2::Mouth_Upper_Left", (int64)LipShapeEnum_v2::Mouth_Upper_Left },
				{ "LipShapeEnum_v2::Mouth_Lower_Right", (int64)LipShapeEnum_v2::Mouth_Lower_Right },
				{ "LipShapeEnum_v2::Mouth_Lower_Left", (int64)LipShapeEnum_v2::Mouth_Lower_Left },
				{ "LipShapeEnum_v2::Mouth_Upper_Overturn", (int64)LipShapeEnum_v2::Mouth_Upper_Overturn },
				{ "LipShapeEnum_v2::Mouth_Lower_Overturn", (int64)LipShapeEnum_v2::Mouth_Lower_Overturn },
				{ "LipShapeEnum_v2::Mouth_Pout", (int64)LipShapeEnum_v2::Mouth_Pout },
				{ "LipShapeEnum_v2::Mouth_Smile_Right", (int64)LipShapeEnum_v2::Mouth_Smile_Right },
				{ "LipShapeEnum_v2::Mouth_Smile_Left", (int64)LipShapeEnum_v2::Mouth_Smile_Left },
				{ "LipShapeEnum_v2::Mouth_Sad_Right", (int64)LipShapeEnum_v2::Mouth_Sad_Right },
				{ "LipShapeEnum_v2::Mouth_Sad_Left", (int64)LipShapeEnum_v2::Mouth_Sad_Left },
				{ "LipShapeEnum_v2::Cheek_Puff_Right", (int64)LipShapeEnum_v2::Cheek_Puff_Right },
				{ "LipShapeEnum_v2::Cheek_Puff_Left", (int64)LipShapeEnum_v2::Cheek_Puff_Left },
				{ "LipShapeEnum_v2::Cheek_Suck", (int64)LipShapeEnum_v2::Cheek_Suck },
				{ "LipShapeEnum_v2::Mouth_Upper_UpRight", (int64)LipShapeEnum_v2::Mouth_Upper_UpRight },
				{ "LipShapeEnum_v2::Mouth_Upper_UpLeft", (int64)LipShapeEnum_v2::Mouth_Upper_UpLeft },
				{ "LipShapeEnum_v2::Mouth_Lower_DownRight", (int64)LipShapeEnum_v2::Mouth_Lower_DownRight },
				{ "LipShapeEnum_v2::Mouth_Lower_DownLeft", (int64)LipShapeEnum_v2::Mouth_Lower_DownLeft },
				{ "LipShapeEnum_v2::Mouth_Upper_Inside", (int64)LipShapeEnum_v2::Mouth_Upper_Inside },
				{ "LipShapeEnum_v2::Mouth_Lower_Inside", (int64)LipShapeEnum_v2::Mouth_Lower_Inside },
				{ "LipShapeEnum_v2::Mouth_Lower_Overlay", (int64)LipShapeEnum_v2::Mouth_Lower_Overlay },
				{ "LipShapeEnum_v2::Tongue_LongStep1", (int64)LipShapeEnum_v2::Tongue_LongStep1 },
				{ "LipShapeEnum_v2::Tongue_Left", (int64)LipShapeEnum_v2::Tongue_Left },
				{ "LipShapeEnum_v2::Tongue_Right", (int64)LipShapeEnum_v2::Tongue_Right },
				{ "LipShapeEnum_v2::Tongue_Up", (int64)LipShapeEnum_v2::Tongue_Up },
				{ "LipShapeEnum_v2::Tongue_Down", (int64)LipShapeEnum_v2::Tongue_Down },
				{ "LipShapeEnum_v2::Tongue_Roll", (int64)LipShapeEnum_v2::Tongue_Roll },
				{ "LipShapeEnum_v2::Tongue_LongStep2", (int64)LipShapeEnum_v2::Tongue_LongStep2 },
				{ "LipShapeEnum_v2::Tongue_UpRight_Morph", (int64)LipShapeEnum_v2::Tongue_UpRight_Morph },
				{ "LipShapeEnum_v2::Tongue_UpLeft_Morph", (int64)LipShapeEnum_v2::Tongue_UpLeft_Morph },
				{ "LipShapeEnum_v2::Tongue_DownRight_Morph", (int64)LipShapeEnum_v2::Tongue_DownRight_Morph },
				{ "LipShapeEnum_v2::Tongue_DownLeft_Morph", (int64)LipShapeEnum_v2::Tongue_DownLeft_Morph },
				{ "LipShapeEnum_v2::Max", (int64)LipShapeEnum_v2::Max },
				{ "LipShapeEnum_v2::None", (int64)LipShapeEnum_v2::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cheek_Puff_Left.DisplayName", "Cheek_Puff_Left" },
				{ "Cheek_Puff_Left.Name", "LipShapeEnum_v2::Cheek_Puff_Left" },
				{ "Cheek_Puff_Right.DisplayName", "Cheek_Puff_Right" },
				{ "Cheek_Puff_Right.Name", "LipShapeEnum_v2::Cheek_Puff_Right" },
				{ "Cheek_Suck.DisplayName", "Cheek_Suck" },
				{ "Cheek_Suck.Name", "LipShapeEnum_v2::Cheek_Suck" },
				{ "Comment", "/** The prediction result relative blend shape.*/" },
				{ "Jaw_Forward.DisplayName", "Jaw_Forward" },
				{ "Jaw_Forward.Name", "LipShapeEnum_v2::Jaw_Forward" },
				{ "Jaw_Left.DisplayName", "Jaw_Left" },
				{ "Jaw_Left.Name", "LipShapeEnum_v2::Jaw_Left" },
				{ "Jaw_Open.DisplayName", "Jaw_Open" },
				{ "Jaw_Open.Name", "LipShapeEnum_v2::Jaw_Open" },
				{ "Jaw_Right.DisplayName", "Jaw_Right" },
				{ "Jaw_Right.Name", "LipShapeEnum_v2::Jaw_Right" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "LipShapeEnum_v2::Max" },
				{ "ModuleRelativePath", "Public/SRanipalLip_Core.h" },
				{ "Mouth_Ape_Shape.DisplayName", "Mouth_Ape_Shape" },
				{ "Mouth_Ape_Shape.Name", "LipShapeEnum_v2::Mouth_Ape_Shape" },
				{ "Mouth_Lower_DownLeft.DisplayName", "Mouth_Lower_DownLeft" },
				{ "Mouth_Lower_DownLeft.Name", "LipShapeEnum_v2::Mouth_Lower_DownLeft" },
				{ "Mouth_Lower_DownRight.DisplayName", "Mouth_Lower_DownRight" },
				{ "Mouth_Lower_DownRight.Name", "LipShapeEnum_v2::Mouth_Lower_DownRight" },
				{ "Mouth_Lower_Inside.DisplayName", "Mouth_Lower_Inside" },
				{ "Mouth_Lower_Inside.Name", "LipShapeEnum_v2::Mouth_Lower_Inside" },
				{ "Mouth_Lower_Left.DisplayName", "Mouth_Lower_Left" },
				{ "Mouth_Lower_Left.Name", "LipShapeEnum_v2::Mouth_Lower_Left" },
				{ "Mouth_Lower_Overlay.DisplayName", "Mouth_Lower_Overlay" },
				{ "Mouth_Lower_Overlay.Name", "LipShapeEnum_v2::Mouth_Lower_Overlay" },
				{ "Mouth_Lower_Overturn.DisplayName", "Mouth_Lower_Overturn" },
				{ "Mouth_Lower_Overturn.Name", "LipShapeEnum_v2::Mouth_Lower_Overturn" },
				{ "Mouth_Lower_Right.DisplayName", "Mouth_Lower_Right" },
				{ "Mouth_Lower_Right.Name", "LipShapeEnum_v2::Mouth_Lower_Right" },
				{ "Mouth_Pout.DisplayName", "Mouth_Pout" },
				{ "Mouth_Pout.Name", "LipShapeEnum_v2::Mouth_Pout" },
				{ "Mouth_Sad_Left.DisplayName", "Mouth_Sad_Left" },
				{ "Mouth_Sad_Left.Name", "LipShapeEnum_v2::Mouth_Sad_Left" },
				{ "Mouth_Sad_Right.DisplayName", "Mouth_Sad_Right" },
				{ "Mouth_Sad_Right.Name", "LipShapeEnum_v2::Mouth_Sad_Right" },
				{ "Mouth_Smile_Left.DisplayName", "Mouth_Smile_Left" },
				{ "Mouth_Smile_Left.Name", "LipShapeEnum_v2::Mouth_Smile_Left" },
				{ "Mouth_Smile_Right.DisplayName", "Mouth_Smile_Right" },
				{ "Mouth_Smile_Right.Name", "LipShapeEnum_v2::Mouth_Smile_Right" },
				{ "Mouth_Upper_Inside.DisplayName", "Mouth_Upper_Inside" },
				{ "Mouth_Upper_Inside.Name", "LipShapeEnum_v2::Mouth_Upper_Inside" },
				{ "Mouth_Upper_Left.DisplayName", "Mouth_Upper_Left" },
				{ "Mouth_Upper_Left.Name", "LipShapeEnum_v2::Mouth_Upper_Left" },
				{ "Mouth_Upper_Overturn.DisplayName", "Mouth_Upper_Overturn" },
				{ "Mouth_Upper_Overturn.Name", "LipShapeEnum_v2::Mouth_Upper_Overturn" },
				{ "Mouth_Upper_Right.DisplayName", "Mouth_Upper_Right" },
				{ "Mouth_Upper_Right.Name", "LipShapeEnum_v2::Mouth_Upper_Right" },
				{ "Mouth_Upper_UpLeft.DisplayName", "Mouth_Upper_UpLeft" },
				{ "Mouth_Upper_UpLeft.Name", "LipShapeEnum_v2::Mouth_Upper_UpLeft" },
				{ "Mouth_Upper_UpRight.DisplayName", "Mouth_Upper_UpRight" },
				{ "Mouth_Upper_UpRight.Name", "LipShapeEnum_v2::Mouth_Upper_UpRight" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "LipShapeEnum_v2::None" },
				{ "Tongue_Down.DisplayName", "Tongue_Down" },
				{ "Tongue_Down.Name", "LipShapeEnum_v2::Tongue_Down" },
				{ "Tongue_DownLeft_Morph.DisplayName", "Tongue_DownLeft_Morph" },
				{ "Tongue_DownLeft_Morph.Name", "LipShapeEnum_v2::Tongue_DownLeft_Morph" },
				{ "Tongue_DownRight_Morph.DisplayName", "Tongue_DownRight_Morph" },
				{ "Tongue_DownRight_Morph.Name", "LipShapeEnum_v2::Tongue_DownRight_Morph" },
				{ "Tongue_Left.DisplayName", "Tongue_Left" },
				{ "Tongue_Left.Name", "LipShapeEnum_v2::Tongue_Left" },
				{ "Tongue_LongStep1.DisplayName", "Tongue_LongStep1" },
				{ "Tongue_LongStep1.Name", "LipShapeEnum_v2::Tongue_LongStep1" },
				{ "Tongue_LongStep2.DisplayName", "Tongue_LongStep2" },
				{ "Tongue_LongStep2.Name", "LipShapeEnum_v2::Tongue_LongStep2" },
				{ "Tongue_Right.DisplayName", "Tongue_Right" },
				{ "Tongue_Right.Name", "LipShapeEnum_v2::Tongue_Right" },
				{ "Tongue_Roll.DisplayName", "Tongue_Roll" },
				{ "Tongue_Roll.Name", "LipShapeEnum_v2::Tongue_Roll" },
				{ "Tongue_Up.DisplayName", "Tongue_Up" },
				{ "Tongue_Up.Name", "LipShapeEnum_v2::Tongue_Up" },
				{ "Tongue_UpLeft_Morph.DisplayName", "Tongue_UpLeft_Morph" },
				{ "Tongue_UpLeft_Morph.Name", "LipShapeEnum_v2::Tongue_UpLeft_Morph" },
				{ "Tongue_UpRight_Morph.DisplayName", "Tongue_UpRight_Morph" },
				{ "Tongue_UpRight_Morph.Name", "LipShapeEnum_v2::Tongue_UpRight_Morph" },
				{ "ToolTip", "The prediction result relative blend shape." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipalLip,
				nullptr,
				"LipShapeEnum_v2",
				"LipShapeEnum_v2",
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
	static UEnum* LipShapeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SRanipalLip_LipShapeEnum, Z_Construct_UPackage__Script_SRanipalLip(), TEXT("LipShapeEnum"));
		}
		return Singleton;
	}
	template<> SRANIPALLIP_API UEnum* StaticEnum<LipShapeEnum>()
	{
		return LipShapeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LipShapeEnum(LipShapeEnum_StaticEnum, TEXT("/Script/SRanipalLip"), TEXT("LipShapeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SRanipalLip_LipShapeEnum_Hash() { return 1419285602U; }
	UEnum* Z_Construct_UEnum_SRanipalLip_LipShapeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SRanipalLip();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LipShapeEnum"), 0, Get_Z_Construct_UEnum_SRanipalLip_LipShapeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LipShapeEnum::Jaw_Forward", (int64)LipShapeEnum::Jaw_Forward },
				{ "LipShapeEnum::Jaw_Right", (int64)LipShapeEnum::Jaw_Right },
				{ "LipShapeEnum::Jaw_Left", (int64)LipShapeEnum::Jaw_Left },
				{ "LipShapeEnum::Jaw_Open", (int64)LipShapeEnum::Jaw_Open },
				{ "LipShapeEnum::Mouth_Ape_Shape", (int64)LipShapeEnum::Mouth_Ape_Shape },
				{ "LipShapeEnum::Mouth_O_Shape", (int64)LipShapeEnum::Mouth_O_Shape },
				{ "LipShapeEnum::Mouth_Pout", (int64)LipShapeEnum::Mouth_Pout },
				{ "LipShapeEnum::Mouth_Lower_Right", (int64)LipShapeEnum::Mouth_Lower_Right },
				{ "LipShapeEnum::Mouth_Lower_Left", (int64)LipShapeEnum::Mouth_Lower_Left },
				{ "LipShapeEnum::Mouth_Smile_Right", (int64)LipShapeEnum::Mouth_Smile_Right },
				{ "LipShapeEnum::Mouth_Smile_Left", (int64)LipShapeEnum::Mouth_Smile_Left },
				{ "LipShapeEnum::Mouth_Sad_Right", (int64)LipShapeEnum::Mouth_Sad_Right },
				{ "LipShapeEnum::Mouth_Sad_Left", (int64)LipShapeEnum::Mouth_Sad_Left },
				{ "LipShapeEnum::Cheek_Puff_Right", (int64)LipShapeEnum::Cheek_Puff_Right },
				{ "LipShapeEnum::Cheek_Puff_Left", (int64)LipShapeEnum::Cheek_Puff_Left },
				{ "LipShapeEnum::Mouth_Lower_Inside", (int64)LipShapeEnum::Mouth_Lower_Inside },
				{ "LipShapeEnum::Mouth_Upper_Inside", (int64)LipShapeEnum::Mouth_Upper_Inside },
				{ "LipShapeEnum::Mouth_Lower_Overlay", (int64)LipShapeEnum::Mouth_Lower_Overlay },
				{ "LipShapeEnum::Mouth_Upper_Overlay", (int64)LipShapeEnum::Mouth_Upper_Overlay },
				{ "LipShapeEnum::Cheek_Suck", (int64)LipShapeEnum::Cheek_Suck },
				{ "LipShapeEnum::Mouth_LowerRight_Down", (int64)LipShapeEnum::Mouth_LowerRight_Down },
				{ "LipShapeEnum::Mouth_LowerLeft_Down", (int64)LipShapeEnum::Mouth_LowerLeft_Down },
				{ "LipShapeEnum::Mouth_UpperRight_Up", (int64)LipShapeEnum::Mouth_UpperRight_Up },
				{ "LipShapeEnum::Mouth_UpperLeft_Up", (int64)LipShapeEnum::Mouth_UpperLeft_Up },
				{ "LipShapeEnum::Mouth_Philtrum_Right", (int64)LipShapeEnum::Mouth_Philtrum_Right },
				{ "LipShapeEnum::Mouth_Philtrum_Left", (int64)LipShapeEnum::Mouth_Philtrum_Left },
				{ "LipShapeEnum::Max", (int64)LipShapeEnum::Max },
				{ "LipShapeEnum::None", (int64)LipShapeEnum::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cheek_Puff_Left.DisplayName", "Cheek_Puff_Left" },
				{ "Cheek_Puff_Left.Name", "LipShapeEnum::Cheek_Puff_Left" },
				{ "Cheek_Puff_Right.DisplayName", "Cheek_Puff_Right" },
				{ "Cheek_Puff_Right.Name", "LipShapeEnum::Cheek_Puff_Right" },
				{ "Cheek_Suck.DisplayName", "Cheek_Suck" },
				{ "Cheek_Suck.Name", "LipShapeEnum::Cheek_Suck" },
				{ "Comment", "/** The prediction result relative blend shape.*/" },
				{ "Jaw_Forward.DisplayName", "Jaw_Forward" },
				{ "Jaw_Forward.Name", "LipShapeEnum::Jaw_Forward" },
				{ "Jaw_Left.DisplayName", "Jaw_Left" },
				{ "Jaw_Left.Name", "LipShapeEnum::Jaw_Left" },
				{ "Jaw_Open.DisplayName", "Jaw_Open" },
				{ "Jaw_Open.Name", "LipShapeEnum::Jaw_Open" },
				{ "Jaw_Right.DisplayName", "Jaw_Right" },
				{ "Jaw_Right.Name", "LipShapeEnum::Jaw_Right" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "LipShapeEnum::Max" },
				{ "ModuleRelativePath", "Public/SRanipalLip_Core.h" },
				{ "Mouth_Ape_Shape.DisplayName", "Mouth_Ape_Shape" },
				{ "Mouth_Ape_Shape.Name", "LipShapeEnum::Mouth_Ape_Shape" },
				{ "Mouth_Lower_Inside.DisplayName", "Mouth_Lower_Inside" },
				{ "Mouth_Lower_Inside.Name", "LipShapeEnum::Mouth_Lower_Inside" },
				{ "Mouth_Lower_Left.DisplayName", "Mouth_Lower_Left" },
				{ "Mouth_Lower_Left.Name", "LipShapeEnum::Mouth_Lower_Left" },
				{ "Mouth_Lower_Overlay.DisplayName", "Mouth_Lower_Overlay" },
				{ "Mouth_Lower_Overlay.Name", "LipShapeEnum::Mouth_Lower_Overlay" },
				{ "Mouth_Lower_Right.DisplayName", "Mouth_Lower_Right" },
				{ "Mouth_Lower_Right.Name", "LipShapeEnum::Mouth_Lower_Right" },
				{ "Mouth_LowerLeft_Down.DisplayName", "Mouth_LowerLeft_Down" },
				{ "Mouth_LowerLeft_Down.Name", "LipShapeEnum::Mouth_LowerLeft_Down" },
				{ "Mouth_LowerRight_Down.DisplayName", "Mouth_LowerRight_Down" },
				{ "Mouth_LowerRight_Down.Name", "LipShapeEnum::Mouth_LowerRight_Down" },
				{ "Mouth_O_Shape.DisplayName", "Mouth_O_Shape" },
				{ "Mouth_O_Shape.Name", "LipShapeEnum::Mouth_O_Shape" },
				{ "Mouth_Philtrum_Left.DisplayName", "Mouth_Philtrum_Left" },
				{ "Mouth_Philtrum_Left.Name", "LipShapeEnum::Mouth_Philtrum_Left" },
				{ "Mouth_Philtrum_Right.DisplayName", "Mouth_Philtrum_Right" },
				{ "Mouth_Philtrum_Right.Name", "LipShapeEnum::Mouth_Philtrum_Right" },
				{ "Mouth_Pout.DisplayName", "Mouth_Pout" },
				{ "Mouth_Pout.Name", "LipShapeEnum::Mouth_Pout" },
				{ "Mouth_Sad_Left.DisplayName", "Mouth_Sad_Left" },
				{ "Mouth_Sad_Left.Name", "LipShapeEnum::Mouth_Sad_Left" },
				{ "Mouth_Sad_Right.DisplayName", "Mouth_Sad_Right" },
				{ "Mouth_Sad_Right.Name", "LipShapeEnum::Mouth_Sad_Right" },
				{ "Mouth_Smile_Left.DisplayName", "Mouth_Smile_Left" },
				{ "Mouth_Smile_Left.Name", "LipShapeEnum::Mouth_Smile_Left" },
				{ "Mouth_Smile_Right.DisplayName", "Mouth_Smile_Right" },
				{ "Mouth_Smile_Right.Name", "LipShapeEnum::Mouth_Smile_Right" },
				{ "Mouth_Upper_Inside.DisplayName", "Mouth_Upper_Inside" },
				{ "Mouth_Upper_Inside.Name", "LipShapeEnum::Mouth_Upper_Inside" },
				{ "Mouth_Upper_Overlay.DisplayName", "Mouth_Upper_Overlay" },
				{ "Mouth_Upper_Overlay.Name", "LipShapeEnum::Mouth_Upper_Overlay" },
				{ "Mouth_UpperLeft_Up.DisplayName", "Mouth_UpperLeft_Up" },
				{ "Mouth_UpperLeft_Up.Name", "LipShapeEnum::Mouth_UpperLeft_Up" },
				{ "Mouth_UpperRight_Up.DisplayName", "Mouth_UpperRight_Up" },
				{ "Mouth_UpperRight_Up.Name", "LipShapeEnum::Mouth_UpperRight_Up" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "LipShapeEnum::None" },
				{ "ToolTip", "The prediction result relative blend shape." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SRanipalLip,
				nullptr,
				"LipShapeEnum",
				"LipShapeEnum",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
