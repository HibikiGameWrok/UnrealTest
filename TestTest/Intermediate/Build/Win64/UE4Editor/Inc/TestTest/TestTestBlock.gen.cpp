// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTest/TestTestBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTestBlock() {}
// Cross Module References
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestBlock_NoRegister();
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestTest();
	TESTTEST_API UFunction* Z_Construct_UFunction_ATestTestBlock_BlockClicked();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TESTTEST_API UFunction* Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	TESTTEST_API UClass* Z_Construct_UClass_ATestTestBlockGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATestTestBlock::StaticRegisterNativesATestTestBlock()
	{
		UClass* Class = ATestTestBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockClicked", &ATestTestBlock::execBlockClicked },
			{ "OnFingerPressedBlock", &ATestTestBlock::execOnFingerPressedBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics
	{
		struct TestTestBlock_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonClicked;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ButtonClicked = { "ButtonClicked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestTestBlock_eventBlockClicked_Parms, ButtonClicked), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestTestBlock_eventBlockClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Handle the block being clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTestBlock, nullptr, "BlockClicked", sizeof(TestTestBlock_eventBlockClicked_Parms), Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestTestBlock_BlockClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestTestBlock_BlockClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics
	{
		struct TestTestBlock_eventOnFingerPressedBlock_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestTestBlock_eventOnFingerPressedBlock_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestTestBlock_eventOnFingerPressedBlock_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Handle the block being touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTestBlock, nullptr, "OnFingerPressedBlock", sizeof(TestTestBlock_eventOnFingerPressedBlock_Parms), Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestTestBlock_NoRegister()
	{
		return ATestTestBlock::StaticClass();
	}
	struct Z_Construct_UClass_ATestTestBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTestBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestTestBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestTestBlock_BlockClicked, "BlockClicked" }, // 174459653
		{ &Z_Construct_UFunction_ATestTestBlock_OnFingerPressedBlock, "OnFingerPressedBlock" }, // 699586306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestTestBlock.h" },
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "A block that can be clicked" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Grid that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, OwningGrid), Z_Construct_UClass_ATestTestBlockGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OwningGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Pointer to orange material used on active blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, OrangeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OrangeMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Pointer to blue material used on inactive blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlueMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Pointer to white material used on the focused block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BaseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "StaticMesh component for the clickable block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlockMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTestBlock_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTestBlock.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTestBlock_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestTestBlock, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_DummyRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::NewProp_DummyRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestTestBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTestBlock_Statics::NewProp_DummyRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTestBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTestBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTestBlock_Statics::ClassParams = {
		&ATestTestBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestTestBlock_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATestTestBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestTestBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTestBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTestBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTestBlock, 1245572191);
	template<> TESTTEST_API UClass* StaticClass<ATestTestBlock>()
	{
		return ATestTestBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTestBlock(Z_Construct_UClass_ATestTestBlock, &ATestTestBlock::StaticClass, TEXT("/Script/TestTest"), TEXT("ATestTestBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTestBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
