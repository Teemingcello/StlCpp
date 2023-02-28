// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/Bear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBear() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_ABear_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_ABear();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UBearAnimInstance_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABear::execGetBearHpRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBearHpRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABear::execOnAttackMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABear::execSetTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ABear::StaticRegisterNativesABear()
	{
		UClass* Class = ABear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBearHpRatio", &ABear::execGetBearHpRatio },
			{ "OnAttackMontageEnded", &ABear::execOnAttackMontageEnded },
			{ "SetTarget", &ABear::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABear_GetBearHpRatio_Statics
	{
		struct Bear_eventGetBearHpRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bear_eventGetBearHpRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABear, nullptr, "GetBearHpRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::Bear_eventGetBearHpRatio_Parms), Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABear_GetBearHpRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABear_GetBearHpRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics
	{
		struct Bear_eventOnAttackMontageEnded_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bear_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((Bear_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Bear_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABear, nullptr, "OnAttackMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::Bear_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABear_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABear_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABear_SetTarget_Statics
	{
		struct Bear_eventSetTarget_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABear_SetTarget_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bear_eventSetTarget_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABear_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABear_SetTarget_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABear_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABear_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABear, nullptr, "SetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABear_SetTarget_Statics::Bear_eventSetTarget_Parms), Z_Construct_UFunction_ABear_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABear_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABear_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABear_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABear_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABear);
	UClass* Z_Construct_UClass_ABear_NoRegister()
	{
		return ABear::StaticClass();
	}
	struct Z_Construct_UClass_ABear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bear_Anim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bear_Anim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BearHpWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BearHpWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttackCheck_MetaData[];
#endif
		static void NewProp_IsAttackCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttackCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABear_GetBearHpRatio, "GetBearHpRatio" }, // 682432747
		{ &Z_Construct_UFunction_ABear_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 3928082388
		{ &Z_Construct_UFunction_ABear_SetTarget, "SetTarget" }, // 993429569
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bear.h" },
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_Bear_Anim_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_Bear_Anim = { "Bear_Anim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, Bear_Anim), Z_Construct_UClass_UBearAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_Bear_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_Bear_Anim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Bear" },
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_CurrentHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Bear" },
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, MaxHP), METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_PawnSensing_MetaData[] = {
		{ "Category", "Bear" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_PawnSensing = { "PawnSensing", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, PawnSensing), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_PawnSensing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_PawnSensing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_BearHpWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_BearHpWidget = { "BearHpWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, BearHpWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_BearHpWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_BearHpWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_Attack1_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_Attack1 = { "Attack1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, Attack1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_Attack1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_Attack1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_Attack2_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_Attack2 = { "Attack2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, Attack2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_Attack2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_Attack2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_Attack3_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_Attack3 = { "Attack3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, Attack3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_Attack3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_Attack3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	void Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((ABear*)Obj)->IsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABear), &Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	void Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck_SetBit(void* Obj)
	{
		((ABear*)Obj)->IsAttackCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck = { "IsAttackCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABear), &Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABear_Statics::NewProp_TargetPawn_MetaData[] = {
		{ "ModuleRelativePath", "Bear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABear_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABear, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::NewProp_TargetPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::NewProp_TargetPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_Bear_Anim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_CurrentHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_PawnSensing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_BearHpWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_Attack1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_Attack2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_Attack3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_IsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_IsAttackCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABear_Statics::NewProp_TargetPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABear_Statics::ClassParams = {
		&ABear::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABear()
	{
		if (!Z_Registration_Info_UClass_ABear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABear.OuterSingleton, Z_Construct_UClass_ABear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABear.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<ABear>()
	{
		return ABear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABear);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_Bear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_Bear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABear, ABear::StaticClass, TEXT("ABear"), &Z_Registration_Info_UClass_ABear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABear), 3462140200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_Bear_h_404854820(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_Bear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_Bear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
