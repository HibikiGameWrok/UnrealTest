// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTEST_TestTestPawn_generated_h
#error "TestTestPawn.generated.h already included, missing '#pragma once' in TestTestPawn.h"
#endif
#define TESTTEST_TestTestPawn_generated_h

#define TestTest_Source_TestTest_TestTestPawn_h_12_RPC_WRAPPERS
#define TestTest_Source_TestTest_TestTestPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTest_Source_TestTest_TestTestPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTestPawn(); \
	friend struct Z_Construct_UClass_ATestTestPawn_Statics; \
public: \
	DECLARE_CLASS(ATestTestPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), NO_API) \
	DECLARE_SERIALIZER(ATestTestPawn)


#define TestTest_Source_TestTest_TestTestPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestTestPawn(); \
	friend struct Z_Construct_UClass_ATestTestPawn_Statics; \
public: \
	DECLARE_CLASS(ATestTestPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), NO_API) \
	DECLARE_SERIALIZER(ATestTestPawn)


#define TestTest_Source_TestTest_TestTestPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestTestPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTestPawn(ATestTestPawn&&); \
	NO_API ATestTestPawn(const ATestTestPawn&); \
public:


#define TestTest_Source_TestTest_TestTestPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestTestPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTestPawn(ATestTestPawn&&); \
	NO_API ATestTestPawn(const ATestTestPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestPawn)


#define TestTest_Source_TestTest_TestTestPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(ATestTestPawn, CurrentBlockFocus); }


#define TestTest_Source_TestTest_TestTestPawn_h_9_PROLOG
#define TestTest_Source_TestTest_TestTestPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestPawn_h_12_RPC_WRAPPERS \
	TestTest_Source_TestTest_TestTestPawn_h_12_INCLASS \
	TestTest_Source_TestTest_TestTestPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTest_Source_TestTest_TestTestPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestPawn_h_12_INCLASS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestPawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TestTestPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTEST_API UClass* StaticClass<class ATestTestPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTest_Source_TestTest_TestTestPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
