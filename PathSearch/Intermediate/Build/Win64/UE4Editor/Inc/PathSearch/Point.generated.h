// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_Point_generated_h
#error "Point.generated.h already included, missing '#pragma once' in Point.h"
#endif
#define PATHSEARCH_Point_generated_h

#define PathSearch_Source_PathSearch_Public_Point_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCost(); \
		P_NATIVE_END; \
	}


#define PathSearch_Source_PathSearch_Public_Point_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCost(); \
		P_NATIVE_END; \
	}


#define PathSearch_Source_PathSearch_Public_Point_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoint(); \
	friend struct Z_Construct_UClass_APoint_Statics; \
public: \
	DECLARE_CLASS(APoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(APoint)


#define PathSearch_Source_PathSearch_Public_Point_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPoint(); \
	friend struct Z_Construct_UClass_APoint_Statics; \
public: \
	DECLARE_CLASS(APoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(APoint)


#define PathSearch_Source_PathSearch_Public_Point_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoint(APoint&&); \
	NO_API APoint(const APoint&); \
public:


#define PathSearch_Source_PathSearch_Public_Point_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoint(APoint&&); \
	NO_API APoint(const APoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoint)


#define PathSearch_Source_PathSearch_Public_Point_h_12_PRIVATE_PROPERTY_OFFSET
#define PathSearch_Source_PathSearch_Public_Point_h_9_PROLOG
#define PathSearch_Source_PathSearch_Public_Point_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_Point_h_12_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_Point_h_12_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_Point_h_12_INCLASS \
	PathSearch_Source_PathSearch_Public_Point_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_Point_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_Point_h_12_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_Point_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_Point_h_12_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_Point_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_Point_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
