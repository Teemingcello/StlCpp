// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlGameInstance() {}
// Cross Module References
	STLCPP_API UScriptStruct* Z_Construct_UScriptStruct_FStlCharacterData();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STLCPP_API UClass* Z_Construct_UClass_UStlGameInstance_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_UStlGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStlCharacterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStlCharacterData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StlCharacterData;
class UScriptStruct* FStlCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StlCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StlCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStlCharacterData, Z_Construct_UPackage__Script_StlCpp(), TEXT("StlCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_StlCharacterData.OuterSingleton;
}
template<> STLCPP_API UScriptStruct* StaticStruct<FStlCharacterData>()
{
	return FStlCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStlCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextEXP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextEXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStlCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStlCharacterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStlCharacterData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStlCharacterData, MaxHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStlCharacterData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_NextEXP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_NextEXP = { "NextEXP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStlCharacterData, NextEXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_NextEXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_NextEXP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStlCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewProp_NextEXP,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStlCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StlCharacterData",
		sizeof(FStlCharacterData),
		alignof(FStlCharacterData),
		Z_Construct_UScriptStruct_FStlCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStlCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStlCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStlCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_StlCharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StlCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FStlCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StlCharacterData.InnerSingleton;
	}
	void UStlGameInstance::StaticRegisterNativesUStlGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStlGameInstance);
	UClass* Z_Construct_UClass_UStlGameInstance_NoRegister()
	{
		return UStlGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UStlGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StlCharacterTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StlCharacterTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStlGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStlGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StlGameInstance.h" },
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStlGameInstance_Statics::NewProp_StlCharacterTable_MetaData[] = {
		{ "ModuleRelativePath", "StlGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStlGameInstance_Statics::NewProp_StlCharacterTable = { "StlCharacterTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStlGameInstance, StlCharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStlGameInstance_Statics::NewProp_StlCharacterTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStlGameInstance_Statics::NewProp_StlCharacterTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStlGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStlGameInstance_Statics::NewProp_StlCharacterTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStlGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStlGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStlGameInstance_Statics::ClassParams = {
		&UStlGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStlGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStlGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStlGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStlGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStlGameInstance()
	{
		if (!Z_Registration_Info_UClass_UStlGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStlGameInstance.OuterSingleton, Z_Construct_UClass_UStlGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStlGameInstance.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<UStlGameInstance>()
	{
		return UStlGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStlGameInstance);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ScriptStructInfo[] = {
		{ FStlCharacterData::StaticStruct, Z_Construct_UScriptStruct_FStlCharacterData_Statics::NewStructOps, TEXT("StlCharacterData"), &Z_Registration_Info_UScriptStruct_StlCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStlCharacterData), 1392175676U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStlGameInstance, UStlGameInstance::StaticClass, TEXT("UStlGameInstance"), &Z_Registration_Info_UClass_UStlGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStlGameInstance), 1669047573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_2018474042(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
