// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/BeamSearch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeamSearch() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_ABeamSearch_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ABeamSearch();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void ABeamSearch::StaticRegisterNativesABeamSearch()
	{
	}
	UClass* Z_Construct_UClass_ABeamSearch_NoRegister()
	{
		return ABeamSearch::StaticClass();
	}
	struct Z_Construct_UClass_ABeamSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeamSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeamSearch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BeamSearch.h" },
		{ "ModuleRelativePath", "Public/BeamSearch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeamSearch_Statics::NewProp_NumNodes_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/BeamSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABeamSearch_Statics::NewProp_NumNodes = { "NumNodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeamSearch, NumNodes), METADATA_PARAMS(Z_Construct_UClass_ABeamSearch_Statics::NewProp_NumNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABeamSearch_Statics::NewProp_NumNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeamSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeamSearch_Statics::NewProp_NumNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeamSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeamSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeamSearch_Statics::ClassParams = {
		&ABeamSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABeamSearch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABeamSearch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABeamSearch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABeamSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeamSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeamSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeamSearch, 1684041092);
	template<> PATHSEARCH_API UClass* StaticClass<ABeamSearch>()
	{
		return ABeamSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeamSearch(Z_Construct_UClass_ABeamSearch, &ABeamSearch::StaticClass, TEXT("/Script/PathSearch"), TEXT("ABeamSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeamSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
