// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_BestFirst_generated_h
#error "BestFirst.generated.h already included, missing '#pragma once' in BestFirst.h"
#endif
#define PATHSEARCH_BestFirst_generated_h

#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABestFirst(); \
	friend struct Z_Construct_UClass_ABestFirst_Statics; \
public: \
	DECLARE_CLASS(ABestFirst, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ABestFirst)


#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABestFirst(); \
	friend struct Z_Construct_UClass_ABestFirst_Statics; \
public: \
	DECLARE_CLASS(ABestFirst, AGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ABestFirst)


#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABestFirst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABestFirst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABestFirst); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABestFirst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABestFirst(ABestFirst&&); \
	NO_API ABestFirst(const ABestFirst&); \
public:


#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABestFirst() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABestFirst(ABestFirst&&); \
	NO_API ABestFirst(const ABestFirst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABestFirst); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABestFirst); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABestFirst)


#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_PRIVATE_PROPERTY_OFFSET
#define PathSearch_Source_PathSearch_Public_BestFirst_h_12_PROLOG
#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_INCLASS \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_BestFirst_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_BestFirst_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_BestFirst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
