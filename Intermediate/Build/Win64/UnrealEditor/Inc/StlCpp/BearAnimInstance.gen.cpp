// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/BearAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearAnimInstance() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_UBearAnimInstance_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UBearAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	DEFINE_FUNCTION(UBearAnimInstance::execAnimNotify_Attackcheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attackcheck();
		P_NATIVE_END;
	}
	void UBearAnimInstance::StaticRegisterNativesUBearAnimInstance()
	{
		UClass* Class = UBearAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Attackcheck", &UBearAnimInstance::execAnimNotify_Attackcheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BearAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearAnimInstance, nullptr, "AnimNotify_Attackcheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBearAnimInstance);
	UClass* Z_Construct_UClass_UBearAnimInstance_NoRegister()
	{
		return UBearAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBearAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBearAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBearAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBearAnimInstance_AnimNotify_Attackcheck, "AnimNotify_Attackcheck" }, // 1022457158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BearAnimInstance.h" },
		{ "ModuleRelativePath", "BearAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_PawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Bear" },
		{ "ModuleRelativePath", "BearAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_PawnSpeed = { "PawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBearAnimInstance, PawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_PawnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_PawnSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Bear" },
		{ "ModuleRelativePath", "BearAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UBearAnimInstance*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearAnimInstance), &Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBearAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_PawnSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearAnimInstance_Statics::NewProp_IsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBearAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBearAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBearAnimInstance_Statics::ClassParams = {
		&UBearAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBearAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBearAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBearAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBearAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBearAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UBearAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBearAnimInstance.OuterSingleton, Z_Construct_UClass_UBearAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBearAnimInstance.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UBearAnimInstance>()
	{
		return UBearAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBearAnimInstance);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBearAnimInstance, UBearAnimInstance::StaticClass, TEXT("UBearAnimInstance"), &Z_Registration_Info_UClass_UBearAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBearAnimInstance), 3961258886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAnimInstance_h_2866082931(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
