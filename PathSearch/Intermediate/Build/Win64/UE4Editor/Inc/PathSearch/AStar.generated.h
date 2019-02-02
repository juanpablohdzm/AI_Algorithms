// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_AStar_generated_h
#error "AStar.generated.h already included, missing '#pragma once' in AStar.h"
#endif
#define PATHSEARCH_AStar_generated_h

#define PathSearch_Source_PathSearch_Public_AStar_h_15_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_Public_AStar_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_Public_AStar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAStar(); \
	friend struct Z_Construct_UClass_AAStar_Statics; \
public: \
	DECLARE_CLASS(AAStar, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(AAStar)


#define PathSearch_Source_PathSearch_Public_AStar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAStar(); \
	friend struct Z_Construct_UClass_AAStar_Statics; \
public: \
	DECLARE_CLASS(AAStar, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(AAStar)


#define PathSearch_Source_PathSearch_Public_AStar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAStar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAStar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStar(AAStar&&); \
	NO_API AAStar(const AAStar&); \
public:


#define PathSearch_Source_PathSearch_Public_AStar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAStar() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStar(AAStar&&); \
	NO_API AAStar(const AAStar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAStar)


#define PathSearch_Source_PathSearch_Public_AStar_h_15_PRIVATE_PROPERTY_OFFSET
#define PathSearch_Source_PathSearch_Public_AStar_h_12_PROLOG
#define PathSearch_Source_PathSearch_Public_AStar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_AStar_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_AStar_h_15_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_AStar_h_15_INCLASS \
	PathSearch_Source_PathSearch_Public_AStar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_AStar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_AStar_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_AStar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_AStar_h_15_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_AStar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_AStar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
