// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTest/TestTestPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTestPlayerController() {}
// Cross Module References
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestPlayerController_NoRegister();
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TestTest();
// End Cross Module References
	void ATestTestPlayerController::StaticRegisterNativesATestTestPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATestTestPlayerController_NoRegister()
	{
		return ATestTestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATestTestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTestPlayerController.h" },
		{ "ModuleRelativePath", "TestTestPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTestPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTestPlayerController_Statics::ClassParams = {
		&ATestTestPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestTestPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestTestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTestPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTestPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTestPlayerController, 3270333390);
	template<> TESTTEST_API UClass* StaticClass<ATestTestPlayerController>()
	{
		return ATestTestPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTestPlayerController(Z_Construct_UClass_ATestTestPlayerController, &ATestTestPlayerController::StaticClass, TEXT("/Script/TestTest"), TEXT("ATestTestPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTestPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
