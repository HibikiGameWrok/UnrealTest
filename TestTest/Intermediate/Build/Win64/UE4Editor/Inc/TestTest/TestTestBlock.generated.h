// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef TESTTEST_TestTestBlock_generated_h
#error "TestTestBlock.generated.h already included, missing '#pragma once' in TestTestBlock.h"
#endif
#define TESTTEST_TestTestBlock_generated_h

#define TestTest_Source_TestTest_TestTestBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define TestTest_Source_TestTest_TestTestBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define TestTest_Source_TestTest_TestTestBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTestBlock(); \
	friend struct Z_Construct_UClass_ATestTestBlock_Statics; \
public: \
	DECLARE_CLASS(ATestTestBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestBlock)


#define TestTest_Source_TestTest_TestTestBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestTestBlock(); \
	friend struct Z_Construct_UClass_ATestTestBlock_Statics; \
public: \
	DECLARE_CLASS(ATestTestBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTest"), TESTTEST_API) \
	DECLARE_SERIALIZER(ATestTestBlock)


#define TestTest_Source_TestTest_TestTestBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTTEST_API ATestTestBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTestBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestBlock(ATestTestBlock&&); \
	TESTTEST_API ATestTestBlock(const ATestTestBlock&); \
public:


#define TestTest_Source_TestTest_TestTestBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTTEST_API ATestTestBlock(ATestTestBlock&&); \
	TESTTEST_API ATestTestBlock(const ATestTestBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTTEST_API, ATestTestBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTestBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTestBlock)


#define TestTest_Source_TestTest_TestTestBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ATestTestBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ATestTestBlock, BlockMesh); }


#define TestTest_Source_TestTest_TestTestBlock_h_10_PROLOG
#define TestTest_Source_TestTest_TestTestBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestBlock_h_13_RPC_WRAPPERS \
	TestTest_Source_TestTest_TestTestBlock_h_13_INCLASS \
	TestTest_Source_TestTest_TestTestBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTest_Source_TestTest_TestTestBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTest_Source_TestTest_TestTestBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	TestTest_Source_TestTest_TestTestBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestBlock_h_13_INCLASS_NO_PURE_DECLS \
	TestTest_Source_TestTest_TestTestBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTEST_API UClass* StaticClass<class ATestTestBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTest_Source_TestTest_TestTestBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
