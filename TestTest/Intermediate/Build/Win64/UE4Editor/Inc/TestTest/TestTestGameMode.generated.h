// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTEST_TestTestGameMode_generated_h
#error "TestTestGameMode.generated.h already included, missing '#pragma once' in TestTestGameMode.h"
#endif
#define TESTTEST_TestTestGameMode_generated_h

#define TestTest_Source_TestTest_TestTestGameMode_h_13_RPC_WRAPPERS
#define TestTest_Source_TestTest_TestTestGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTest_Source_TestTest_TestTestGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTestGameMode(); \
	friend struct Z_Construct_UClass_ATestTestGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestGameMode)


#define TestTest_Source_TestTest_TestTestGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestTestGameMode(); \
	friend struct Z_Construct_UClass_ATestTestGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestGameMode)


#define TestTest_Source_TestTest_TestTestGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTTEST_API ATestTestGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestGameMode(ATestTestGameMode&&); \
	TESTTEST_API ATestTestGameMode(const ATestTestGameMode&); \
public:


#define TestTest_Source_TestTest_TestTestGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestGameMode(ATestTestGameMode&&); \
	TESTTEST_API ATestTestGameMode(const ATestTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTestGameMode)


#define TestTest_Source_TestTest_TestTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET
#define TestTest_Source_TestTest_TestTestGameMode_h_10_PROLOG
#define TestTest_Source_TestTest_TestTestGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestGameMode_h_13_RPC_WRAPPERS \
	TestTest_Source_TestTest_TestTestGameMode_h_13_INCLASS \
	TestTest_Source_TestTest_TestTestGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTest_Source_TestTest_TestTestGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestGameMode_h_13_INCLASS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTEST_API UClass* StaticClass<class ATestTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTest_Source_TestTest_TestTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
