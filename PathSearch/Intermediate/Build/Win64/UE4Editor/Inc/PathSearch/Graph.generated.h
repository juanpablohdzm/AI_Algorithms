// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHSEARCH_Graph_generated_h
#error "Graph.generated.h already included, missing '#pragma once' in Graph.h"
#endif
#define PATHSEARCH_Graph_generated_h

#define PathSearch_Source_PathSearch_Public_Graph_h_12_RPC_WRAPPERS
#define PathSearch_Source_PathSearch_Public_Graph_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PathSearch_Source_PathSearch_Public_Graph_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGraph(); \
	friend struct Z_Construct_UClass_AGraph_Statics; \
public: \
	DECLARE_CLASS(AGraph, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(AGraph)


#define PathSearch_Source_PathSearch_Public_Graph_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGraph(); \
	friend struct Z_Construct_UClass_AGraph_Statics; \
public: \
	DECLARE_CLASS(AGraph, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(AGraph)


#define PathSearch_Source_PathSearch_Public_Graph_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGraph(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGraph(AGraph&&); \
	NO_API AGraph(const AGraph&); \
public:


#define PathSearch_Source_PathSearch_Public_Graph_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGraph(AGraph&&); \
	NO_API AGraph(const AGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGraph)


#define PathSearch_Source_PathSearch_Public_Graph_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerClass() { return STRUCT_OFFSET(AGraph, PlayerClass); } \
	FORCEINLINE static uint32 __PPO__GoalClass() { return STRUCT_OFFSET(AGraph, GoalClass); } \
	FORCEINLINE static uint32 __PPO__PointClass() { return STRUCT_OFFSET(AGraph, PointClass); } \
	FORCEINLINE static uint32 __PPO__WallClass() { return STRUCT_OFFSET(AGraph, WallClass); }


#define PathSearch_Source_PathSearch_Public_Graph_h_9_PROLOG
#define PathSearch_Source_PathSearch_Public_Graph_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_Graph_h_12_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_Graph_h_12_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_Graph_h_12_INCLASS \
	PathSearch_Source_PathSearch_Public_Graph_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_Graph_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_Graph_h_12_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_Graph_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_Graph_h_12_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_Graph_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_Graph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
