// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/AStar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAStar() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_AAStar_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_AAStar();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void AAStar::StaticRegisterNativesAAStar()
	{
	}
	UClass* Z_Construct_UClass_AAStar_NoRegister()
	{
		return AAStar::StaticClass();
	}
	struct Z_Construct_UClass_AAStar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicPorcentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicPorcentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAStar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AStar.h" },
		{ "ModuleRelativePath", "Public/AStar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStar_Statics::NewProp_HeuristicPorcentage_MetaData[] = {
		{ "Category", "Path Finding" },
		{ "ModuleRelativePath", "Public/AStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAStar_Statics::NewProp_HeuristicPorcentage = { UE4CodeGen_Private::EPropertyClass::Float, "HeuristicPorcentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AAStar, HeuristicPorcentage), METADATA_PARAMS(Z_Construct_UClass_AAStar_Statics::NewProp_HeuristicPorcentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAStar_Statics::NewProp_HeuristicPorcentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAStar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStar_Statics::NewProp_HeuristicPorcentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAStar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAStar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAStar_Statics::ClassParams = {
		&AAStar::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAStar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAStar_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAStar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAStar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAStar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAStar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAStar, 1122780633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAStar(Z_Construct_UClass_AAStar, &AAStar::StaticClass, TEXT("/Script/PathSearch"), TEXT("AAStar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAStar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
