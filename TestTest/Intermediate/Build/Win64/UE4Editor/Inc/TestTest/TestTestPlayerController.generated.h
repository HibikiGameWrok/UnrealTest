// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTEST_TestTestPlayerController_generated_h
#error "TestTestPlayerController.generated.h already included, missing '#pragma once' in TestTestPlayerController.h"
#endif
#define TESTTEST_TestTestPlayerController_generated_h

#define TestTest_Source_TestTest_TestTestPlayerController_h_13_RPC_WRAPPERS
#define TestTest_Source_TestTest_TestTestPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTest_Source_TestTest_TestTestPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTestPlayerController(); \
	friend struct Z_Construct_UClass_ATestTestPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestTestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTest"), NO_API) \
	DECLARE_SERIALIZER(ATestTestPlayerController)


#define TestTest_Source_TestTest_TestTestPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestTestPlayerController(); \
	friend struct Z_Construct_UClass_ATestTestPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestTestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTest"), NO_API) \
	DECLARE_SERIALIZER(ATestTestPlayerController)


#define TestTest_Source_TestTest_TestTestPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestTestPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTestPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTestPlayerController(ATestTestPlayerController&&); \
	NO_API ATestTestPlayerController(const ATestTestPlayerController&); \
public:


#define TestTest_Source_TestTest_TestTestPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTestPlayerController(ATestTestPlayerController&&); \
	NO_API ATestTestPlayerController(const ATestTestPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTestPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTestPlayerController)


#define TestTest_Source_TestTest_TestTestPlayerController_h_13_PRIVATE_PROPERTY_OFFSET
#define TestTest_Source_TestTest_TestTestPlayerController_h_10_PROLOG
#define TestTest_Source_TestTest_TestTestPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_RPC_WRAPPERS \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_INCLASS \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTest_Source_TestTest_TestTestPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTEST_API UClass* StaticClass<class ATestTestPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTest_Source_TestTest_TestTestPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
