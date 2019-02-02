// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PATHSEARCH_LevelManager_generated_h
#error "LevelManager.generated.h already included, missing '#pragma once' in LevelManager.h"
#endif
#define PATHSEARCH_LevelManager_generated_h

#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawPathAStar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathAStar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBranchAndBound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBranchAndBound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBeamSearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBeamSearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBestFirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBestFirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathHill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathHill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathIDDS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathIDDS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathDLFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathDLFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathDFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathDFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPath) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPath(Z_Param_Out_Path); \
		P_NATIVE_END; \
	}


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawPathAStar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathAStar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBranchAndBound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBranchAndBound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBeamSearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBeamSearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBestFirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBestFirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathHill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathHill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathIDDS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathIDDS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathDLFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathDLFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathDFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathDFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPathBFS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPathBFS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawPath) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawPath(Z_Param_Out_Path); \
		P_NATIVE_END; \
	}


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelManager(); \
	friend struct Z_Construct_UClass_ALevelManager_Statics; \
public: \
	DECLARE_CLASS(ALevelManager, ALevelScriptActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ALevelManager)


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALevelManager(); \
	friend struct Z_Construct_UClass_ALevelManager_Statics; \
public: \
	DECLARE_CLASS(ALevelManager, ALevelScriptActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathSearch"), NO_API) \
	DECLARE_SERIALIZER(ALevelManager)


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelManager(ALevelManager&&); \
	NO_API ALevelManager(const ALevelManager&); \
public:


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelManager(ALevelManager&&); \
	NO_API ALevelManager(const ALevelManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelManager)


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ColumNum() { return STRUCT_OFFSET(ALevelManager, ColumNum); } \
	FORCEINLINE static uint32 __PPO__RowNum() { return STRUCT_OFFSET(ALevelManager, RowNum); } \
	FORCEINLINE static uint32 __PPO__WallProbability() { return STRUCT_OFFSET(ALevelManager, WallProbability); } \
	FORCEINLINE static uint32 __PPO__GoalPosition() { return STRUCT_OFFSET(ALevelManager, GoalPosition); } \
	FORCEINLINE static uint32 __PPO__PlayerClass() { return STRUCT_OFFSET(ALevelManager, PlayerClass); } \
	FORCEINLINE static uint32 __PPO__GoalClass() { return STRUCT_OFFSET(ALevelManager, GoalClass); } \
	FORCEINLINE static uint32 __PPO__PathClass() { return STRUCT_OFFSET(ALevelManager, PathClass); } \
	FORCEINLINE static uint32 __PPO__PointClass() { return STRUCT_OFFSET(ALevelManager, PointClass); } \
	FORCEINLINE static uint32 __PPO__WallClass() { return STRUCT_OFFSET(ALevelManager, WallClass); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ALevelManager, Camera); } \
	FORCEINLINE static uint32 __PPO__BFS() { return STRUCT_OFFSET(ALevelManager, BFS); } \
	FORCEINLINE static uint32 __PPO__DFS() { return STRUCT_OFFSET(ALevelManager, DFS); } \
	FORCEINLINE static uint32 __PPO__DLFS() { return STRUCT_OFFSET(ALevelManager, DLFS); } \
	FORCEINLINE static uint32 __PPO__HillClim() { return STRUCT_OFFSET(ALevelManager, HillClim); } \
	FORCEINLINE static uint32 __PPO__BestFirst() { return STRUCT_OFFSET(ALevelManager, BestFirst); } \
	FORCEINLINE static uint32 __PPO__BeamSearch() { return STRUCT_OFFSET(ALevelManager, BeamSearch); } \
	FORCEINLINE static uint32 __PPO__BranchAndBound() { return STRUCT_OFFSET(ALevelManager, BranchAndBound); } \
	FORCEINLINE static uint32 __PPO__AStar() { return STRUCT_OFFSET(ALevelManager, AStar); }


#define PathSearch_Source_PathSearch_Public_LevelManager_h_13_PROLOG
#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_RPC_WRAPPERS \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_INCLASS \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathSearch_Source_PathSearch_Public_LevelManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_INCLASS_NO_PURE_DECLS \
	PathSearch_Source_PathSearch_Public_LevelManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathSearch_Source_PathSearch_Public_LevelManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
