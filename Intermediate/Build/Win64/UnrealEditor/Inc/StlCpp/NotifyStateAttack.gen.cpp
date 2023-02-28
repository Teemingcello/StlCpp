// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/NotifyStateAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyStateAttack() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_UNotifyStateAttack_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UNotifyStateAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	void UNotifyStateAttack::StaticRegisterNativesUNotifyStateAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyStateAttack);
	UClass* Z_Construct_UClass_UNotifyStateAttack_NoRegister()
	{
		return UNotifyStateAttack::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyStateAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyStateAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyStateAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NotifyStateAttack.h" },
		{ "ModuleRelativePath", "NotifyStateAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyStateAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyStateAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyStateAttack_Statics::ClassParams = {
		&UNotifyStateAttack::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyStateAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyStateAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyStateAttack()
	{
		if (!Z_Registration_Info_UClass_UNotifyStateAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyStateAttack.OuterSingleton, Z_Construct_UClass_UNotifyStateAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyStateAttack.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UNotifyStateAttack>()
	{
		return UNotifyStateAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyStateAttack);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_NotifyStateAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_NotifyStateAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyStateAttack, UNotifyStateAttack::StaticClass, TEXT("UNotifyStateAttack"), &Z_Registration_Info_UClass_UNotifyStateAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyStateAttack), 120649949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_NotifyStateAttack_h_2546544855(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_NotifyStateAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_NotifyStateAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
