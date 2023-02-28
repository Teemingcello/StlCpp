// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/WB_HealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWB_HealthBar() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_UWB_HealthBar_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UWB_HealthBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UWB_HealthBar::StaticRegisterNativesUWB_HealthBar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWB_HealthBar);
	UClass* Z_Construct_UClass_UWB_HealthBar_NoRegister()
	{
		return UWB_HealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UWB_HealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWB_HealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_HealthBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WB_HealthBar.h" },
		{ "ModuleRelativePath", "WB_HealthBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_HealthBar_Statics::NewProp_HpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WB_HealthBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_HealthBar_Statics::NewProp_HpBar = { "HpBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_HealthBar, HpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_HealthBar_Statics::NewProp_HpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_HealthBar_Statics::NewProp_HpBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWB_HealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_HealthBar_Statics::NewProp_HpBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWB_HealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWB_HealthBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWB_HealthBar_Statics::ClassParams = {
		&UWB_HealthBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWB_HealthBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWB_HealthBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWB_HealthBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_HealthBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWB_HealthBar()
	{
		if (!Z_Registration_Info_UClass_UWB_HealthBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWB_HealthBar.OuterSingleton, Z_Construct_UClass_UWB_HealthBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWB_HealthBar.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UWB_HealthBar>()
	{
		return UWB_HealthBar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWB_HealthBar);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_WB_HealthBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_WB_HealthBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWB_HealthBar, UWB_HealthBar::StaticClass, TEXT("UWB_HealthBar"), &Z_Registration_Info_UClass_UWB_HealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWB_HealthBar), 267854100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_WB_HealthBar_h_3975702691(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_WB_HealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_WB_HealthBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
