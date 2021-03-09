// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EyeShape : uint8; 
enum class GazeIndex : uint8;
class APlayerCameraManager;
struct FFocusInfo;
struct FVector;
enum class EyeIndex : uint8;
struct FVector2D;
enum class SupportedEyeVersion : uint8;
#ifdef SRANIPALEYE_SRanipalEye_FunctionLibrary_generated_h
#error "SRanipalEye_FunctionLibrary.generated.h already included, missing '#pragma once' in SRanipalEye_FunctionLibrary.h"
#endif
#define SRANIPALEYE_SRanipalEye_FunctionLibrary_generated_h

#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEyeWeightings) \
	{ \
		P_GET_TMAP_REF(EyeShape,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeWeightings(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocus) \
	{ \
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_OBJECT(APlayerCameraManager,Z_Param_playerCamera); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_STRUCT_REF(FFocusInfo,Z_Param_Out_focusInfo); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::Focus(GazeIndex(Z_Param_gazeIndex),Z_Param_maxDistance,Z_Param_radius,Z_Param_playerCamera,ECollisionChannel(Z_Param_TraceChannel),Z_Param_Out_focusInfo,Z_Param_Out_gazeOrigin,Z_Param_Out_gazeTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeRay) \
	{ \
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetGazeRay(GazeIndex(Z_Param_gazeIndex),Z_Param_Out_origin,Z_Param_Out_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPupilPosition) \
	{ \
		P_GET_ENUM(EyeIndex,Z_Param_eye); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetPupilPosition(EyeIndex(Z_Param_eye),Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeOpenness) \
	{ \
		P_GET_ENUM(EyeIndex,Z_Param_eye); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_openness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeOpenness(EyeIndex(Z_Param_eye),Z_Param_Out_openness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopEyeFramework) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalEye_FunctionLibrary::StopEyeFramework(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEyeFramework) \
	{ \
		P_GET_ENUM(SupportedEyeVersion,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalEye_FunctionLibrary::StartEyeFramework(SupportedEyeVersion(Z_Param_version)); \
		P_NATIVE_END; \
	}


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEyeWeightings) \
	{ \
		P_GET_TMAP_REF(EyeShape,float,Z_Param_Out_shapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeWeightings(Z_Param_Out_shapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocus) \
	{ \
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_OBJECT(APlayerCameraManager,Z_Param_playerCamera); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_STRUCT_REF(FFocusInfo,Z_Param_Out_focusInfo); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_gazeTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::Focus(GazeIndex(Z_Param_gazeIndex),Z_Param_maxDistance,Z_Param_radius,Z_Param_playerCamera,ECollisionChannel(Z_Param_TraceChannel),Z_Param_Out_focusInfo,Z_Param_Out_gazeOrigin,Z_Param_Out_gazeTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeRay) \
	{ \
		P_GET_ENUM(GazeIndex,Z_Param_gazeIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetGazeRay(GazeIndex(Z_Param_gazeIndex),Z_Param_Out_origin,Z_Param_Out_direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPupilPosition) \
	{ \
		P_GET_ENUM(EyeIndex,Z_Param_eye); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetPupilPosition(EyeIndex(Z_Param_eye),Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeOpenness) \
	{ \
		P_GET_ENUM(EyeIndex,Z_Param_eye); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_openness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USRanipalEye_FunctionLibrary::GetEyeOpenness(EyeIndex(Z_Param_eye),Z_Param_Out_openness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopEyeFramework) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalEye_FunctionLibrary::StopEyeFramework(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEyeFramework) \
	{ \
		P_GET_ENUM(SupportedEyeVersion,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USRanipalEye_FunctionLibrary::StartEyeFramework(SupportedEyeVersion(Z_Param_version)); \
		P_NATIVE_END; \
	}


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSRanipalEye_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalEye_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalEye"), NO_API) \
	DECLARE_SERIALIZER(USRanipalEye_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSRanipalEye_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalEye_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalEye"), NO_API) \
	DECLARE_SERIALIZER(USRanipalEye_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalEye_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalEye_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalEye_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalEye_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalEye_FunctionLibrary(USRanipalEye_FunctionLibrary&&); \
	NO_API USRanipalEye_FunctionLibrary(const USRanipalEye_FunctionLibrary&); \
public:


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalEye_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalEye_FunctionLibrary(USRanipalEye_FunctionLibrary&&); \
	NO_API USRanipalEye_FunctionLibrary(const USRanipalEye_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalEye_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalEye_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalEye_FunctionLibrary)


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_14_PROLOG
#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SRANIPALEYE_API UClass* StaticClass<class USRanipalEye_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject6_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
