// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/LevelManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManager() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_ALevelManager_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ALevelManager();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathAStar();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBestFirst();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBFS();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathDFS();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathDLFS();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathHill();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_ALevelManager_DrawPathIDDS();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ADLFS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATHSEARCH_API UClass* Z_Construct_UClass_APoint_NoRegister();
// End Cross Module References
	void ALevelManager::StaticRegisterNativesALevelManager()
	{
		UClass* Class = ALevelManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawPath", &ALevelManager::execDrawPath },
			{ "DrawPathAStar", &ALevelManager::execDrawPathAStar },
			{ "DrawPathBeamSearch", &ALevelManager::execDrawPathBeamSearch },
			{ "DrawPathBestFirst", &ALevelManager::execDrawPathBestFirst },
			{ "DrawPathBFS", &ALevelManager::execDrawPathBFS },
			{ "DrawPathBranchAndBound", &ALevelManager::execDrawPathBranchAndBound },
			{ "DrawPathDFS", &ALevelManager::execDrawPathDFS },
			{ "DrawPathDLFS", &ALevelManager::execDrawPathDLFS },
			{ "DrawPathHill", &ALevelManager::execDrawPathHill },
			{ "DrawPathIDDS", &ALevelManager::execDrawPathIDDS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPath_Statics
	{
		struct LevelManager_eventDrawPath_Parms
		{
			TArray<FVector> Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelManager_eventDrawPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_DrawPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_DrawPath_Statics::NewProp_Path_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPath", sizeof(LevelManager_eventDrawPath_Parms), Z_Construct_UFunction_ALevelManager_DrawPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathAStar", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathAStar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathAStar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathBeamSearch", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathBestFirst", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBestFirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathBestFirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
		{ "ToolTip", "Functions to be called by the UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathBFS", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBFS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathBFS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathBranchAndBound", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathDFS", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathDFS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathDFS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathDLFS", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathDLFS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathDLFS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathHill", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathHill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathHill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "DrawPathIDDS", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelManager_DrawPathIDDS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelManager_DrawPathIDDS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelManager_NoRegister()
	{
		return ALevelManager::StaticClass();
	}
	struct Z_Construct_UClass_ALevelManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AStar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AStar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchAndBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BranchAndBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BestFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HillClim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HillClim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLFS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DLFS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DFS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DFS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BFS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BFS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WallClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PointClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PathClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GoalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WallProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HeightNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RowNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ColumNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelManager_DrawPath, "DrawPath" }, // 1876227535
		{ &Z_Construct_UFunction_ALevelManager_DrawPathAStar, "DrawPathAStar" }, // 2250929705
		{ &Z_Construct_UFunction_ALevelManager_DrawPathBeamSearch, "DrawPathBeamSearch" }, // 4023350473
		{ &Z_Construct_UFunction_ALevelManager_DrawPathBestFirst, "DrawPathBestFirst" }, // 2857637441
		{ &Z_Construct_UFunction_ALevelManager_DrawPathBFS, "DrawPathBFS" }, // 257935079
		{ &Z_Construct_UFunction_ALevelManager_DrawPathBranchAndBound, "DrawPathBranchAndBound" }, // 2337917362
		{ &Z_Construct_UFunction_ALevelManager_DrawPathDFS, "DrawPathDFS" }, // 2302357551
		{ &Z_Construct_UFunction_ALevelManager_DrawPathDLFS, "DrawPathDLFS" }, // 2823048167
		{ &Z_Construct_UFunction_ALevelManager_DrawPathHill, "DrawPathHill" }, // 2643784217
		{ &Z_Construct_UFunction_ALevelManager_DrawPathIDDS, "DrawPathIDDS" }, // 2155924171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LevelManager.h" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_AStar_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_AStar = { "AStar", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, AStar), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_AStar_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_AStar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_BranchAndBound_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_BranchAndBound = { "BranchAndBound", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, BranchAndBound), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_BranchAndBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_BranchAndBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_BeamSearch_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_BeamSearch = { "BeamSearch", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, BeamSearch), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_BeamSearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_BeamSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_BestFirst_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_BestFirst = { "BestFirst", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, BestFirst), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_BestFirst_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_BestFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_HillClim_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_HillClim = { "HillClim", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, HillClim), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_HillClim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_HillClim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_DLFS_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_DLFS = { "DLFS", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, DLFS), Z_Construct_UClass_ADLFS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_DLFS_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_DLFS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_DFS_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_DFS = { "DFS", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, DFS), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_DFS_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_DFS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_BFS_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
		{ "ToolTip", "Objects responsible for their own type of path search" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_BFS = { "BFS", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, BFS), Z_Construct_UClass_AGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_BFS_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_BFS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_WallClass_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_WallClass = { "WallClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, WallClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_WallClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_WallClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_PointClass_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_PointClass = { "PointClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, PointClass), Z_Construct_UClass_APoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_PointClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_PointClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_PathClass_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_PathClass = { "PathClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, PathClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_PathClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_PathClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalClass_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalClass = { "GoalClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, GoalClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_PlayerClass_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, PlayerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_PlayerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_PlayerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalPosition_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalPosition = { "GoalPosition", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, GoalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_WallProbability_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_WallProbability = { "WallProbability", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, WallProbability), METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_WallProbability_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_WallProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_HeightNum_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_HeightNum = { "HeightNum", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, HeightNum), METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_HeightNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_HeightNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_RowNum_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_RowNum = { "RowNum", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, RowNum), METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_RowNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_RowNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_ColumNum_MetaData[] = {
		{ "Category", "Level design" },
		{ "ModuleRelativePath", "Public/LevelManager.h" },
		{ "ToolTip", "Information to create the level..." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_ColumNum = { "ColumNum", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelManager, ColumNum), METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::NewProp_ColumNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_ColumNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_AStar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_BranchAndBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_BeamSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_BestFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_HillClim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_DLFS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_DFS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_BFS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_WallClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_PointClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_PathClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_PlayerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_GoalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_WallProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_HeightNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_RowNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_ColumNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelManager_Statics::ClassParams = {
		&ALevelManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelManager, 1269483975);
	template<> PATHSEARCH_API UClass* StaticClass<ALevelManager>()
	{
		return ALevelManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelManager(Z_Construct_UClass_ALevelManager, &ALevelManager::StaticClass, TEXT("/Script/PathSearch"), TEXT("ALevelManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
