// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/DLFS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLFS() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_ADLFS_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_ADLFS();
	PATHSEARCH_API UClass* Z_Construct_UClass_ADFS();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
// End Cross Module References
	void ADLFS::StaticRegisterNativesADLFS()
	{
	}
	UClass* Z_Construct_UClass_ADLFS_NoRegister()
	{
		return ADLFS::StaticClass();
	}
	struct Z_Construct_UClass_ADLFS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DepthLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADLFS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADFS,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLFS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DLFS.h" },
		{ "ModuleRelativePath", "Public/DLFS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLFS_Statics::NewProp_DepthLimit_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/DLFS.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADLFS_Statics::NewProp_DepthLimit = { "DepthLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADLFS, DepthLimit), METADATA_PARAMS(Z_Construct_UClass_ADLFS_Statics::NewProp_DepthLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADLFS_Statics::NewProp_DepthLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADLFS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADLFS_Statics::NewProp_DepthLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADLFS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADLFS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADLFS_Statics::ClassParams = {
		&ADLFS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADLFS_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADLFS_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADLFS_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADLFS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADLFS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADLFS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADLFS, 1617279522);
	template<> PATHSEARCH_API UClass* StaticClass<ADLFS>()
	{
		return ADLFS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADLFS(Z_Construct_UClass_ADLFS, &ADLFS::StaticClass, TEXT("/Script/PathSearch"), TEXT("ADLFS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADLFS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
