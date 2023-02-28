// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlCharacterStatComponent() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_UStlCharacterStatComponent_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UStlCharacterStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
// End Cross Module References
	void UStlCharacterStatComponent::StaticRegisterNativesUStlCharacterStatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStlCharacterStatComponent);
	UClass* Z_Construct_UClass_UStlCharacterStatComponent_NoRegister()
	{
		return UStlCharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStlCharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStlCharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStlCharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "StlCharacterStatComponent.h" },
		{ "ModuleRelativePath", "StlCharacterStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "StlCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStlCharacterStatComponent, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "StlCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStlCharacterStatComponent, Level), METADATA_PARAMS(Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStlCharacterStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_CurrentHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStlCharacterStatComponent_Statics::NewProp_Level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStlCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStlCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStlCharacterStatComponent_Statics::ClassParams = {
		&UStlCharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStlCharacterStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStlCharacterStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStlCharacterStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStlCharacterStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStlCharacterStatComponent()
	{
		if (!Z_Registration_Info_UClass_UStlCharacterStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStlCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UStlCharacterStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStlCharacterStatComponent.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UStlCharacterStatComponent>()
	{
		return UStlCharacterStatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStlCharacterStatComponent);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCharacterStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCharacterStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStlCharacterStatComponent, UStlCharacterStatComponent::StaticClass, TEXT("UStlCharacterStatComponent"), &Z_Registration_Info_UClass_UStlCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStlCharacterStatComponent), 2947301942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCharacterStatComponent_h_2765961568(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
