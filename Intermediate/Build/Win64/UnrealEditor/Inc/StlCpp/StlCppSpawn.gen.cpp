// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StlCpp/StlCppSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStlCppSpawn() {}
// Cross Module References
	STLCPP_API UClass* Z_Construct_UClass_AStlCppSpawn_NoRegister();
	STLCPP_API UClass* Z_Construct_UClass_AStlCppSpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StlCpp();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STLCPP_API UClass* Z_Construct_UClass_ABear_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStlCppSpawn::execSpawnEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy();
		P_NATIVE_END;
	}
	void AStlCppSpawn::StaticRegisterNativesAStlCppSpawn()
	{
		UClass* Class = AStlCppSpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &AStlCppSpawn::execSpawnEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStlCppSpawn, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStlCppSpawn);
	UClass* Z_Construct_UClass_AStlCppSpawn_NoRegister()
	{
		return AStlCppSpawn::StaticClass();
	}
	struct Z_Construct_UClass_AStlCppSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStlCppSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StlCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStlCppSpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStlCppSpawn_SpawnEnemy, "SpawnEnemy" }, // 1742822859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StlCppSpawn.h" },
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Area_MetaData[] = {
		{ "Category", "StlCppSpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppSpawn, Area), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Area_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Area_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "StlCppSpawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppSpawn, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnCount_MetaData[] = {
		{ "Category", "StlCppSpawn" },
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppSpawn, SpawnCount), METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "StlCppSpawn" },
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppSpawn, MaxCount), METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "ModuleRelativePath", "StlCppSpawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStlCppSpawn, SpawnClass), Z_Construct_UClass_ABear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStlCppSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_MaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStlCppSpawn_Statics::NewProp_SpawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStlCppSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStlCppSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStlCppSpawn_Statics::ClassParams = {
		&AStlCppSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStlCppSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStlCppSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStlCppSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStlCppSpawn()
	{
		if (!Z_Registration_Info_UClass_AStlCppSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStlCppSpawn.OuterSingleton, Z_Construct_UClass_AStlCppSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStlCppSpawn.OuterSingleton;
	}
	template<> STLCPP_API UClass* StaticClass<AStlCppSpawn>()
	{
		return AStlCppSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStlCppSpawn);
	struct Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStlCppSpawn, AStlCppSpawn::StaticClass, TEXT("AStlCppSpawn"), &Z_Registration_Info_UClass_AStlCppSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStlCppSpawn), 3459222432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppSpawn_h_3477681161(TEXT("/Script/StlCpp"),
		Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StlCpp_Source_StlCpp_StlCppSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
