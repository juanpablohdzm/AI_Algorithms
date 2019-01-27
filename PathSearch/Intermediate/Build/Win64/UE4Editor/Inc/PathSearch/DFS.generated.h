// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_DFS_generated_h
#error "DFS.generated.h already included, missing '#pragma once' in DFS.h"
#endif
#define PATHSEARCH_DFS_generated_h

#define PathSearch_Source_PathSearch_Public_DFS_h_15_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_Public_DFS_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_Public_DFS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADFS(); \
	friend struct Z_Construct_UClass_ADFS_Statics; \
public: \
	DECLARE_CLASS(ADFS, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ADFS)


#define PathSearch_Source_PathSearch_Public_DFS_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADFS(); \
	friend struct Z_Construct_UClass_ADFS_Statics; \
public: \
	DECLARE_CLASS(ADFS, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ADFS)


#define PathSearch_Source_PathSearch_Public_DFS_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADFS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADFS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFS(ADFS&&); \
	NO_API ADFS(const ADFS&); \
public:


#define PathSearch_Source_PathSearch_Public_DFS_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADFS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFS(ADFS&&); \
	NO_API ADFS(const ADFS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADFS)


#define PathSearch_Source_PathSearch_Public_DFS_h_15_PRIVATE_PROPERTY_OFFSET
#define PathSearch_Source_PathSearch_Public_DFS_h_12_PROLOG
#define PathSearch_Source_PathSearch_Public_DFS_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_DFS_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_DFS_h_15_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_DFS_h_15_INCLASS \
	PathSearch_Source_PathSearch_Public_DFS_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_DFS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_DFS_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_DFS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_DFS_h_15_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_DFS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_DFS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
