// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/Graph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraph() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_APoint_NoRegister();
// End Cross Module References
	void AGraph::StaticRegisterNativesAGraph()
	{
	}
	UClass* Z_Construct_UClass_AGraph_NoRegister()
	{
		return AGraph::StaticClass();
	}
	struct Z_Construct_UClass_AGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WallClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PointClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GoalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph.h" },
		{ "ModuleRelativePath", "Public/Graph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraph_Statics::NewProp_WallClass_MetaData[] = {
		{ "Category", "Path design" },
		{ "ModuleRelativePath", "Public/Graph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGraph_Statics::NewProp_WallClass = { "WallClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGraph, WallClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGraph_Statics::NewProp_WallClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::NewProp_WallClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraph_Statics::NewProp_PointClass_MetaData[] = {
		{ "Category", "Path design" },
		{ "ModuleRelativePath", "Public/Graph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGraph_Statics::NewProp_PointClass = { "PointClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGraph, PointClass), Z_Construct_UClass_APoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGraph_Statics::NewProp_PointClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::NewProp_PointClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraph_Statics::NewProp_GoalClass_MetaData[] = {
		{ "Category", "Path design" },
		{ "ModuleRelativePath", "Public/Graph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGraph_Statics::NewProp_GoalClass = { "GoalClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGraph, GoalClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGraph_Statics::NewProp_GoalClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::NewProp_GoalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGraph_Statics::NewProp_PlayerClass_MetaData[] = {
		{ "Category", "Path design" },
		{ "ModuleRelativePath", "Public/Graph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGraph_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGraph, PlayerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGraph_Statics::NewProp_PlayerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::NewProp_PlayerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraph_Statics::NewProp_WallClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraph_Statics::NewProp_PointClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraph_Statics::NewProp_GoalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGraph_Statics::NewProp_PlayerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGraph_Statics::ClassParams = {
		&AGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGraph, 1871829028);
	template<> PATHSEARCH_API UClass* StaticClass<AGraph>()
	{
		return AGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGraph(Z_Construct_UClass_AGraph, &AGraph::StaticClass, TEXT("/Script/PathSearch"), TEXT("AGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
