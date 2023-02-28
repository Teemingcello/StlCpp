// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/BearAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearAIController() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_ABearAIController_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_ABearAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABearAIController::execSetTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_InPawn);
		P_NATIVE_END;
	}
	void ABearAIController::StaticRegisterNativesABearAIController()
	{
		UClass* Class = ABearAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTarget", &ABearAIController::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABearAIController_SetTarget_Statics
	{
		struct BearAIController_eventSetTarget_Parms
		{
			APawn* InPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearAIController_SetTarget_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearAIController_eventSetTarget_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearAIController_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearAIController_SetTarget_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearAIController_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BearAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearAIController_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearAIController, nullptr, "SetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABearAIController_SetTarget_Statics::BearAIController_eventSetTarget_Parms), Z_Construct_UFunction_ABearAIController_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearAIController_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearAIController_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearAIController_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearAIController_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABearAIController_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABearAIController);
	UClass* Z_Construct_UClass_ABearAIController_NoRegister()
	{
		return ABearAIController::StaticClass();
	}
	struct Z_Construct_UClass_ABearAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBlackboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBlackboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABearAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABearAIController_SetTarget, "SetTarget" }, // 4042199230
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BearAIController.h" },
		{ "ModuleRelativePath", "BearAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearAIController_Statics::NewProp_BT_MetaData[] = {
		{ "ModuleRelativePath", "BearAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearAIController_Statics::NewProp_BT = { "BT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearAIController, BT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearAIController_Statics::NewProp_BT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearAIController_Statics::NewProp_BT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearAIController_Statics::NewProp_BB_MetaData[] = {
		{ "ModuleRelativePath", "BearAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearAIController_Statics::NewProp_BB = { "BB", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearAIController, BB), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearAIController_Statics::NewProp_BB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearAIController_Statics::NewProp_BB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearAIController_Statics::NewProp_MyBlackboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BearAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearAIController_Statics::NewProp_MyBlackboard = { "MyBlackboard", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearAIController, MyBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearAIController_Statics::NewProp_MyBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearAIController_Statics::NewProp_MyBlackboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABearAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearAIController_Statics::NewProp_BT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearAIController_Statics::NewProp_BB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearAIController_Statics::NewProp_MyBlackboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearAIController_Statics::ClassParams = {
		&ABearAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABearAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABearAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABearAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABearAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABearAIController()
	{
		if (!Z_Registration_Info_UClass_ABearAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABearAIController.OuterSingleton, Z_Construct_UClass_ABearAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABearAIController.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<ABearAIController>()
	{
		return ABearAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearAIController);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABearAIController, ABearAIController::StaticClass, TEXT("ABearAIController"), &Z_Registration_Info_UClass_ABearAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearAIController), 2317050869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAIController_h_2285435441(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BearAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
