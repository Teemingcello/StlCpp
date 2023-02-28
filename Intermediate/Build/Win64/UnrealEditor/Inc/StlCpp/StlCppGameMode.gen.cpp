// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlCppGameMode() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_AStlCppGameMode_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_AStlCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	void AStlCppGameMode::StaticRegisterNativesAStlCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStlCppGameMode);
	UClass* Z_Construct_UClass_AStlCppGameMode_NoRegister()
	{
		return AStlCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStlCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStlCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StlCppGameMode.h" },
		{ "ModuleRelativePath", "StlCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStlCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStlCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStlCppGameMode_Statics::ClassParams = {
		&AStlCppGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStlCppGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStlCppGameMode()
	{
		if (!Z_Registration_Info_UClass_AStlCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStlCppGameMode.OuterSingleton, Z_Construct_UClass_AStlCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStlCppGameMode.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<AStlCppGameMode>()
	{
		return AStlCppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStlCppGameMode);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStlCppGameMode, AStlCppGameMode::StaticClass, TEXT("AStlCppGameMode"), &Z_Registration_Info_UClass_AStlCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStlCppGameMode), 359976081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppGameMode_h_1984010197(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
