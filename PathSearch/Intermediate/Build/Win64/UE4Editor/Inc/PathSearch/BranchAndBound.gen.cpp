// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/BranchAndBound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchAndBound() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_ABranchAndBound_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ABranchAndBound();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void ABranchAndBound::StaticRegisterNativesABranchAndBound()
	{
	}
	UClass* Z_Construct_UClass_ABranchAndBound_NoRegister()
	{
		return ABranchAndBound::StaticClass();
	}
	struct Z_Construct_UClass_ABranchAndBound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABranchAndBound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranchAndBound_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BranchAndBound.h" },
		{ "ModuleRelativePath", "Public/BranchAndBound.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABranchAndBound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABranchAndBound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABranchAndBound_Statics::ClassParams = {
		&ABranchAndBound::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABranchAndBound_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABranchAndBound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABranchAndBound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABranchAndBound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABranchAndBound, 2367914338);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABranchAndBound(Z_Construct_UClass_ABranchAndBound, &ABranchAndBound::StaticClass, TEXT("/Script/PathSearch"), TEXT("ABranchAndBound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABranchAndBound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif