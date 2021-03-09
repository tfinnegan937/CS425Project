// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class LipShapeEnum_v2 : uint8; 
enum class LipShapeEnum : uint8; 
enum class SupportedLipVersion : uint8;
#ifdef SRANIPALLIP_SRanipalLip_FunctionLibrary_generated_h
#error "SRanipalLip_FunctionLibrary.generated.h already included, missing '#pragma once' in SRanipalLip_FunctionLibrary.h"
#endif
#define SRANIPALLIP_SRanipalLip_FunctionLibrary_generated_h

#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTexture) \
	{ \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::UpdateTexture(Z_Param_Out_texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLipWeightings_v2) \
	{ \
		P_GET_TMAP_REF(LipShapeEnum_v2,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::GetLipWeightings_v2(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLipWeightings) \
	{ \
		P_GET_TMAP_REF(LipShapeEnum,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::GetLipWeightings(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLipFramework) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::StopLipFramework(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartLipFramework) \
	{ \
		P_GET_ENUM(SupportedLipVersion,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::StartLipFramework(SupportedLipVersion(Z_Param_version)); \
		P_NATIVE_END; \
	}


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTexture) \
	{ \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::UpdateTexture(Z_Param_Out_texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLipWeightings_v2) \
	{ \
		P_GET_TMAP_REF(LipShapeEnum_v2,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::GetLipWeightings_v2(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLipWeightings) \
	{ \
		P_GET_TMAP_REF(LipShapeEnum,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::GetLipWeightings(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLipFramework) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::StopLipFramework(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartLipFramework) \
	{ \
		P_GET_ENUM(SupportedLipVersion,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalLip_FunctionLibrary::StartLipFramework(SupportedLipVersion(Z_Param_version)); \
		P_NATIVE_END; \
	}


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSRanipalLip_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalLip_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalLip"), NO_API) \
	DECLARE_SERIALIZER(USRanipalLip_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSRanipalLip_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalLip_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalLip"), NO_API) \
	DECLARE_SERIALIZER(USRanipalLip_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalLip_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalLip_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalLip_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalLip_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalLip_FunctionLibrary(USRanipalLip_FunctionLibrary&&); \
	NO_API USRanipalLip_FunctionLibrary(const USRanipalLip_FunctionLibrary&); \
public:


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalLip_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalLip_FunctionLibrary(USRanipalLip_FunctionLibrary&&); \
	NO_API USRanipalLip_FunctionLibrary(const USRanipalLip_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalLip_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalLip_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalLip_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_13_PROLOG
#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SRANIPALLIP_API UClass* StaticClass<class USRanipalLip_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject6_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
