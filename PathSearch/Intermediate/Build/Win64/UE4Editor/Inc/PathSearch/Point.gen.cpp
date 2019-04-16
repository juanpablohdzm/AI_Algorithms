// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathSearch/Public/Point.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoint() {}
// Cross Module References
	PATHSEARCH_API UClass* Z_Construct_UClass_APoint_NoRegister();
	PATHSEARCH_API UClass* Z_Construct_UClass_APoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PathSearch();
	PATHSEARCH_API UFunction* Z_Construct_UFunction_APoint_GetCost();
// End Cross Module References
	void APoint::StaticRegisterNativesAPoint()
	{
		UClass* Class = APoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCost", &APoint::execGetCost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APoint_GetCost_Statics
	{
		struct Point_eventGetCost_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APoint_GetCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Point_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APoint_GetCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APoint_GetCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APoint_GetCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Path Finding" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APoint_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoint, nullptr, "GetCost", sizeof(Point_eventGetCost_Parms), Z_Construct_UFunction_APoint_GetCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APoint_GetCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APoint_GetCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APoint_GetCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APoint_GetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APoint_GetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APoint_NoRegister()
	{
		return APoint::StaticClass();
	}
	struct Z_Construct_UClass_APoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathSearch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APoint_GetCost, "GetCost" }, // 2163738952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Point.h" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoint_Statics::ClassParams = {
		&APoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoint, 707059940);
	template<> PATHSEARCH_API UClass* StaticClass<APoint>()
	{
		return APoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoint(Z_Construct_UClass_APoint, &APoint::StaticClass, TEXT("/Script/PathSearch"), TEXT("APoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
