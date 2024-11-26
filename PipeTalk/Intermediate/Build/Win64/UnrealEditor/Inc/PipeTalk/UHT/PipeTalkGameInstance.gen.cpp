// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/PipeTalkGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePipeTalkGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PIPETALK_API UClass* Z_Construct_UClass_UPipeTalkGameInstance();
PIPETALK_API UClass* Z_Construct_UClass_UPipeTalkGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class UPipeTalkGameInstance
void UPipeTalkGameInstance::StaticRegisterNativesUPipeTalkGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPipeTalkGameInstance);
UClass* Z_Construct_UClass_UPipeTalkGameInstance_NoRegister()
{
	return UPipeTalkGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPipeTalkGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PipeTalkGameInstance.h" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPipeTalkGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPipeTalkGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPipeTalkGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPipeTalkGameInstance_Statics::ClassParams = {
	&UPipeTalkGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPipeTalkGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPipeTalkGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPipeTalkGameInstance()
{
	if (!Z_Registration_Info_UClass_UPipeTalkGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPipeTalkGameInstance.OuterSingleton, Z_Construct_UClass_UPipeTalkGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPipeTalkGameInstance.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<UPipeTalkGameInstance>()
{
	return UPipeTalkGameInstance::StaticClass();
}
UPipeTalkGameInstance::UPipeTalkGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPipeTalkGameInstance);
UPipeTalkGameInstance::~UPipeTalkGameInstance() {}
// End Class UPipeTalkGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPipeTalkGameInstance, UPipeTalkGameInstance::StaticClass, TEXT("UPipeTalkGameInstance"), &Z_Registration_Info_UClass_UPipeTalkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPipeTalkGameInstance), 262549132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_3315010667(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
