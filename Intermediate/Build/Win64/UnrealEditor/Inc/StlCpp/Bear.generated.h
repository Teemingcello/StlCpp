// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class APawn;
#ifdef STLCPP_Bear_generated_h
#error "Bear.generated.h already included, missing '#pragma once' in Bear.h"
#endif
#define STLCPP_Bear_generated_h

#define FID_StlCpp_Source_StlCpp_Bear_h_16_SPARSE_DATA
#define FID_StlCpp_Source_StlCpp_Bear_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBearHpRatio); \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execSetTarget);


#define FID_StlCpp_Source_StlCpp_Bear_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBearHpRatio); \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execSetTarget);


#define FID_StlCpp_Source_StlCpp_Bear_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABear(); \
	friend struct Z_Construct_UClass_ABear_Statics; \
public: \
	DECLARE_CLASS(ABear, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StlCpp"), NO_API) \
	DECLARE_SERIALIZER(ABear)


#define FID_StlCpp_Source_StlCpp_Bear_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABear(); \
	friend struct Z_Construct_UClass_ABear_Statics; \
public: \
	DECLARE_CLASS(ABear, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StlCpp"), NO_API) \
	DECLARE_SERIALIZER(ABear)


#define FID_StlCpp_Source_StlCpp_Bear_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABear(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABear(ABear&&); \
	NO_API ABear(const ABear&); \
public:


#define FID_StlCpp_Source_StlCpp_Bear_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABear(ABear&&); \
	NO_API ABear(const ABear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABear)


#define FID_StlCpp_Source_StlCpp_Bear_h_13_PROLOG
#define FID_StlCpp_Source_StlCpp_Bear_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StlCpp_Source_StlCpp_Bear_h_16_SPARSE_DATA \
	FID_StlCpp_Source_StlCpp_Bear_h_16_RPC_WRAPPERS \
	FID_StlCpp_Source_StlCpp_Bear_h_16_INCLASS \
	FID_StlCpp_Source_StlCpp_Bear_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_StlCpp_Source_StlCpp_Bear_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StlCpp_Source_StlCpp_Bear_h_16_SPARSE_DATA \
	FID_StlCpp_Source_StlCpp_Bear_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_StlCpp_Source_StlCpp_Bear_h_16_INCLASS_NO_PURE_DECLS \
	FID_StlCpp_Source_StlCpp_Bear_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STLCPP_API UClass* StaticClass<class ABear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_StlCpp_Source_StlCpp_Bear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
