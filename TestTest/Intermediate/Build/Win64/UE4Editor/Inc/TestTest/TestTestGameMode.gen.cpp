// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTest/TestTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTestGameMode() {}
// Cross Module References
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestGameMode_NoRegister();
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestTest();
// End Cross Module References
	void ATestTestGameMode::StaticRegisterNativesATestTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestTestGameMode_NoRegister()
	{
		return ATestTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTestGameMode.h" },
		{ "ModuleRelativePath", "TestTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTestGameMode_Statics::ClassParams = {
		&ATestTestGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATestTestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTestGameMode, 3162413464);
	template<> TESTTEST_API UClass* StaticClass<ATestTestGameMode>()
	{
		return ATestTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTestGameMode(Z_Construct_UClass_ATestTestGameMode, &ATestTestGameMode::StaticClass, TEXT("/Script/TestTest"), TEXT("ATestTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
