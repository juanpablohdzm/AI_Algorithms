// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_DLFS_generated_h
#error "DLFS.generated.h already included, missing '#pragma once' in DLFS.h"
#endif
#define PATHSEARCH_DLFS_generated_h

#define PathSearch_Source_PathSearch_Public_DLFS_h_15_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_Public_DLFS_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_Public_DLFS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADLFS(); \
	friend struct Z_Construct_UClass_ADLFS_Statics; \
public: \
	DECLARE_CLASS(ADLFS, ADFS, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ADLFS)


#define PathSearch_Source_PathSearch_Public_DLFS_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADLFS(); \
	friend struct Z_Construct_UClass_ADLFS_Statics; \
public: \
	DECLARE_CLASS(ADLFS, ADFS, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ADLFS)


#define PathSearch_Source_PathSearch_Public_DLFS_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADLFS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADLFS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADLFS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADLFS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADLFS(ADLFS&&); \
	NO_API ADLFS(const ADLFS&); \
public:


#define PathSearch_Source_PathSearch_Public_DLFS_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADLFS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADLFS(ADLFS&&); \
	NO_API ADLFS(const ADLFS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADLFS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADLFS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADLFS)


#define PathSearch_Source_PathSearch_Public_DLFS_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DepthLimit() { return STRUCT_OFFSET(ADLFS, DepthLimit); }


#define PathSearch_Source_PathSearch_Public_DLFS_h_12_PROLOG
#define PathSearch_Source_PathSearch_Public_DLFS_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_INCLASS \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_DLFS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_DLFS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_DLFS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
