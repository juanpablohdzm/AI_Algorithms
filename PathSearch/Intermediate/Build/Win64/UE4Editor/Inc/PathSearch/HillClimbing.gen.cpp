// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/HillClimbing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillClimbing() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_AHillClimbing_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_AHillClimbing();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void AHillClimbing::StaticRegisterNativesAHillClimbing()
	{
	}
	UClass* Z_Construct_UClass_AHillClimbing_NoRegister()
	{
		return AHillClimbing::StaticClass();
	}
	struct Z_Construct_UClass_AHillClimbing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHillClimbing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHillClimbing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillClimbing.h" },
		{ "ModuleRelativePath", "Public/HillClimbing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHillClimbing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHillClimbing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHillClimbing_Statics::ClassParams = {
		&AHillClimbing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHillClimbing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHillClimbing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHillClimbing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHillClimbing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHillClimbing, 2813654356);
	template<> PATHSEARCH_API UClass* StaticClass<AHillClimbing>()
	{
		return AHillClimbing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHillClimbing(Z_Construct_UClass_AHillClimbing, &AHillClimbing::StaticClass, TEXT("/Script/PathSearch"), TEXT("AHillClimbing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHillClimbing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
