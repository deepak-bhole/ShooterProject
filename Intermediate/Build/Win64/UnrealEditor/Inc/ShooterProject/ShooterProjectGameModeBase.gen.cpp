// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterProject/ShooterProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterProjectGameModeBase() {}
// Cross Module References
	SHOOTERPROJECT_API UClass* Z_Construct_UClass_AShooterProjectGameModeBase_NoRegister();
	SHOOTERPROJECT_API UClass* Z_Construct_UClass_AShooterProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterProject();
// End Cross Module References
	void AShooterProjectGameModeBase::StaticRegisterNativesAShooterProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterProjectGameModeBase);
	UClass* Z_Construct_UClass_AShooterProjectGameModeBase_NoRegister()
	{
		return AShooterProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterProjectGameModeBase.h" },
		{ "ModuleRelativePath", "ShooterProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterProjectGameModeBase_Statics::ClassParams = {
		&AShooterProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShooterProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AShooterProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterProjectGameModeBase.OuterSingleton;
	}
	template<> SHOOTERPROJECT_API UClass* StaticClass<AShooterProjectGameModeBase>()
	{
		return AShooterProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_ShooterProject_Source_ShooterProject_ShooterProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterProject_Source_ShooterProject_ShooterProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterProjectGameModeBase, AShooterProjectGameModeBase::StaticClass, TEXT("AShooterProjectGameModeBase"), &Z_Registration_Info_UClass_AShooterProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterProjectGameModeBase), 1258696300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterProject_Source_ShooterProject_ShooterProjectGameModeBase_h_842755219(TEXT("/Script/ShooterProject"),
		Z_CompiledInDeferFile_FID_ShooterProject_Source_ShooterProject_ShooterProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterProject_Source_ShooterProject_ShooterProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
