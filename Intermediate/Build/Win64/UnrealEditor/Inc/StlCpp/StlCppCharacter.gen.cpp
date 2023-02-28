// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlCppCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlCppCharacter() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_AStlCppCharacter_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_AStlCppCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UStlCharacterStatComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UStlAnimInstance_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStlCppCharacter::execOnAttackMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStlCppCharacter::execCanGetWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStlCppCharacter::execAddWeaponToCharacter)
	{
		P_GET_OBJECT(AActor,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeaponToCharacter(Z_Param_Weapon);
		P_NATIVE_END;
	}
	void AStlCppCharacter::StaticRegisterNativesAStlCppCharacter()
	{
		UClass* Class = AStlCppCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeaponToCharacter", &AStlCppCharacter::execAddWeaponToCharacter },
			{ "CanGetWeapon", &AStlCppCharacter::execCanGetWeapon },
			{ "OnAttackMontageEnded", &AStlCppCharacter::execOnAttackMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics
	{
		struct StlCppCharacter_eventAddWeaponToCharacter_Parms
		{
			AActor* Weapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StlCppCharacter_eventAddWeaponToCharacter_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStlCppCharacter, nullptr, "AddWeaponToCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::StlCppCharacter_eventAddWeaponToCharacter_Parms), Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics
	{
		struct StlCppCharacter_eventCanGetWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StlCppCharacter_eventCanGetWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StlCppCharacter_eventCanGetWeapon_Parms), &Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStlCppCharacter, nullptr, "CanGetWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::StlCppCharacter_eventCanGetWeapon_Parms), Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics
	{
		struct StlCppCharacter_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StlCppCharacter_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((StlCppCharacter_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StlCppCharacter_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStlCppCharacter, nullptr, "OnAttackMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::StlCppCharacter_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStlCppCharacter);
	UClass* Z_Construct_UClass_AStlCppCharacter_NoRegister()
	{
		return AStlCppCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStlCppCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HpWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StlAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StlAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttackCheck_MetaData[];
#endif
		static void NewProp_bIsAttackCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttackCheck;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanNextCombo_MetaData[];
#endif
		static void NewProp_bCanNextCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanNextCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsComboInput_MetaData[];
#endif
		static void NewProp_bIsComboInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComboInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStlCppCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStlCppCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStlCppCharacter_AddWeaponToCharacter, "AddWeaponToCharacter" }, // 1725655887
		{ &Z_Construct_UFunction_AStlCppCharacter_CanGetWeapon, "CanGetWeapon" }, // 3195708188
		{ &Z_Construct_UFunction_AStlCppCharacter_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 543146556
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StlCppCharacter.h" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CharacterStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CharacterStat = { "CharacterStat", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, CharacterStat), Z_Construct_UClass_UStlCharacterStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CharacterStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CharacterStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_HpWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_HpWidget = { "HpWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, HpWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_HpWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_HpWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "Particle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_StlAnim_MetaData[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_StlAnim = { "StlAnim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, StlAnim), Z_Construct_UClass_UStlAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_StlAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_StlAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, CurrentWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck_MetaData[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck_SetBit(void* Obj)
	{
		((AStlCppCharacter*)Obj)->bIsAttackCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck = { "bIsAttackCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStlCppCharacter), &Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((AStlCppCharacter*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStlCppCharacter), &Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo_SetBit(void* Obj)
	{
		((AStlCppCharacter*)Obj)->bCanNextCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo = { "bCanNextCombo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStlCppCharacter), &Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput_SetBit(void* Obj)
	{
		((AStlCppCharacter*)Obj)->bIsComboInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput = { "bIsComboInput", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStlCppCharacter), &Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentCombo_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentCombo = { "CurrentCombo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, CurrentCombo), METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_MaxCombo_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "StlCppCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppCharacter, MaxCombo), METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_MaxCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_MaxCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStlCppCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CharacterStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_HpWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_Particle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_StlAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttackCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bCanNextCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_bIsComboInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_CurrentCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppCharacter_Statics::NewProp_MaxCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStlCppCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStlCppCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStlCppCharacter_Statics::ClassParams = {
		&AStlCppCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStlCppCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStlCppCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStlCppCharacter()
	{
		if (!Z_Registration_Info_UClass_AStlCppCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStlCppCharacter.OuterSingleton, Z_Construct_UClass_AStlCppCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStlCppCharacter.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<AStlCppCharacter>()
	{
		return AStlCppCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStlCppCharacter);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStlCppCharacter, AStlCppCharacter::StaticClass, TEXT("AStlCppCharacter"), &Z_Registration_Info_UClass_AStlCppCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStlCppCharacter), 2967321798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppCharacter_h_573408209(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
