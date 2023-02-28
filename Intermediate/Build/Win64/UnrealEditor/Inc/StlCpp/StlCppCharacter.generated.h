// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class AActor;
#ifdef STLCPP_StlCppCharacter_generated_h
#error "StlCppCharacter.generated.h already included, missing '#pragma once' in StlCppCharacter.h"
#endif
#define STLCPP_StlCppCharacter_generated_h

#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_SPARSE_DATA
#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execCanGetWeapon); \
	DECLARE_FUNCTION(execAddWeaponToCharacter);


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded); \
	DECLARE_FUNCTION(execCanGetWeapon); \
	DECLARE_FUNCTION(execAddWeaponToCharacter);


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStlCppCharacter(); \
	friend struct Z_Construct_UClass_AStlCppCharacter_Statics; \
public: \
	DECLARE_CLASS(AStlCppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StlCpp"), NO_API) \
	DECLARE_SERIALIZER(AStlCppCharacter)


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAStlCppCharacter(); \
	friend struct Z_Construct_UClass_AStlCppCharacter_Statics; \
public: \
	DECLARE_CLASS(AStlCppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StlCpp"), NO_API) \
	DECLARE_SERIALIZER(AStlCppCharacter)


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStlCppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStlCppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStlCppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStlCppCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStlCppCharacter(AStlCppCharacter&&); \
	NO_API AStlCppCharacter(const AStlCppCharacter&); \
public:


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStlCppCharacter(AStlCppCharacter&&); \
	NO_API AStlCppCharacter(const AStlCppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStlCppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStlCppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStlCppCharacter)


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_11_PROLOG
#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_SPARSE_DATA \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_RPC_WRAPPERS \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_INCLASS \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_SPARSE_DATA \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_StlCpp_Source_StlCpp_StlCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STLCPP_API UClass* StaticClass<class AStlCppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_StlCpp_Source_StlCpp_StlCppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
