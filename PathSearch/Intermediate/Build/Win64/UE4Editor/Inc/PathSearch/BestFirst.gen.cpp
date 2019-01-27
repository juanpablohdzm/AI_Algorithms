// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/BestFirst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBestFirst() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_ABestFirst_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ABestFirst();
	PATHSEARCH_API UClass* Z_Construct_UClass_AGraph();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void ABestFirst::StaticRegisterNativesABestFirst()
	{
	}
	UClass* Z_Construct_UClass_ABestFirst_NoRegister()
	{
		return ABestFirst::StaticClass();
	}
	struct Z_Construct_UClass_ABestFirst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABestFirst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABestFirst_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BestFirst.h" },
		{ "ModuleRelativePath", "Public/BestFirst.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABestFirst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABestFirst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABestFirst_Statics::ClassParams = {
		&ABestFirst::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABestFirst_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABestFirst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABestFirst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABestFirst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABestFirst, 424178257);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABestFirst(Z_Construct_UClass_ABestFirst, &ABestFirst::StaticClass, TEXT("/Script/PathSearch"), TEXT("ABestFirst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABestFirst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
