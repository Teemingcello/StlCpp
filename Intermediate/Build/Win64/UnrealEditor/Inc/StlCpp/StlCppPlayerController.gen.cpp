// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlCppPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlCppPlayerController() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_AStlCppPlayerController_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_AStlCppPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	void AStlCppPlayerController::StaticRegisterNativesAStlCppPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStlCppPlayerController);
	UClass* Z_Construct_UClass_AStlCppPlayerController_NoRegister()
	{
		return AStlCppPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AStlCppPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStlCppPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "StlCppPlayerController.h" },
		{ "ModuleRelativePath", "StlCppPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStlCppPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStlCppPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStlCppPlayerController_Statics::ClassParams = {
		&AStlCppPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStlCppPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStlCppPlayerController()
	{
		if (!Z_Registration_Info_UClass_AStlCppPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStlCppPlayerController.OuterSingleton, Z_Construct_UClass_AStlCppPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStlCppPlayerController.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<AStlCppPlayerController>()
	{
		return AStlCppPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStlCppPlayerController);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStlCppPlayerController, AStlCppPlayerController::StaticClass, TEXT("AStlCppPlayerController"), &Z_Registration_Info_UClass_AStlCppPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStlCppPlayerController), 391786920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppPlayerController_h_457643625(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
