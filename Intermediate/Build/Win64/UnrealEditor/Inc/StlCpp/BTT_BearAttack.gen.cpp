// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/BTT_BearAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_BearAttack() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_UBTT_BearAttack_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UBTT_BearAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	void UBTT_BearAttack::StaticRegisterNativesUBTT_BearAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_BearAttack);
	UClass* Z_Construct_UClass_UBTT_BearAttack_NoRegister()
	{
		return UBTT_BearAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_BearAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_BearAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_BearAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTT_BearAttack.h" },
		{ "ModuleRelativePath", "BTT_BearAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_BearAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_BearAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_BearAttack_Statics::ClassParams = {
		&UBTT_BearAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_BearAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_BearAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_BearAttack()
	{
		if (!Z_Registration_Info_UClass_UBTT_BearAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_BearAttack.OuterSingleton, Z_Construct_UClass_UBTT_BearAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_BearAttack.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UBTT_BearAttack>()
	{
		return UBTT_BearAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_BearAttack);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BTT_BearAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BTT_BearAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_BearAttack, UBTT_BearAttack::StaticClass, TEXT("UBTT_BearAttack"), &Z_Registration_Info_UClass_UBTT_BearAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_BearAttack), 2799116391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BTT_BearAttack_h_1646346949(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BTT_BearAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_BTT_BearAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
