// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_PathSearchGameModeBase_generated_h
#error "PathSearchGameModeBase.generated.h already included, missing '#pragma once' in PathSearchGameModeBase.h"
#endif
#define PATHSEARCH_PathSearchGameModeBase_generated_h

#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathSearchGameModeBase(); \
	friend struct Z_Construct_UClass_APathSearchGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APathSearchGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(APathSearchGameModeBase)


#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPathSearchGameModeBase(); \
	friend struct Z_Construct_UClass_APathSearchGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APathSearchGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(APathSearchGameModeBase)


#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathSearchGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathSearchGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathSearchGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathSearchGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathSearchGameModeBase(APathSearchGameModeBase&&); \
	NO_API APathSearchGameModeBase(const APathSearchGameModeBase&); \
public:


#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathSearchGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathSearchGameModeBase(APathSearchGameModeBase&&); \
	NO_API APathSearchGameModeBase(const APathSearchGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathSearchGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathSearchGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathSearchGameModeBase)


#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_12_PROLOG
#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_INCLASS \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_PathSearchGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHSEARCH_API UClass* StaticClass<class APathSearchGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_PathSearchGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
