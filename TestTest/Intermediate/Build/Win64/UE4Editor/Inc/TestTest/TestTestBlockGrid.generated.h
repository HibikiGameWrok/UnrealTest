// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTEST_TestTestBlockGrid_generated_h
#error "TestTestBlockGrid.generated.h already included, missing '#pragma once' in TestTestBlockGrid.h"
#endif
#define TESTTEST_TestTestBlockGrid_generated_h

#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_RPC_WRAPPERS
#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTestBlockGrid(); \
	friend struct Z_Construct_UClass_ATestTestBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ATestTestBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestBlockGrid)


#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestTestBlockGrid(); \
	friend struct Z_Construct_UClass_ATestTestBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ATestTestBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestBlockGrid)


#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTTEST_API ATestTestBlockGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestBlockGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestBlockGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestBlockGrid(ATestTestBlockGrid&&); \
	TESTTEST_API ATestTestBlockGrid(const ATestTestBlockGrid&); \
public:


#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestBlockGrid(ATestTestBlockGrid&&); \
	TESTTEST_API ATestTestBlockGrid(const ATestTestBlockGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestBlockGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTestBlockGrid)


#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ATestTestBlockGrid, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(ATestTestBlockGrid, ScoreText); }


#define TestTest_Source_TestTest_TestTestBlockGrid_h_10_PROLOG
#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_RPC_WRAPPERS \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_INCLASS \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTest_Source_TestTest_TestTestBlockGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTEST_API UClass* StaticClass<class ATestTestBlockGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTest_Source_TestTest_TestTestBlockGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
