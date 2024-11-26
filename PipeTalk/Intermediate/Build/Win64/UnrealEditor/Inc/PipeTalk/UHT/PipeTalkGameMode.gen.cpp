// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/PipeTalkGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePipeTalkGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkGameMode();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class APipeTalkGameMode
void APipeTalkGameMode::StaticRegisterNativesAPipeTalkGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APipeTalkGameMode);
UClass* Z_Construct_UClass_APipeTalkGameMode_NoRegister()
{
	return APipeTalkGameMode::StaticClass();
}
struct Z_Construct_UClass_APipeTalkGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PipeTalkGameMode.h" },
		{ "ModuleRelativePath", "PipeTalkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APipeTalkGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APipeTalkGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APipeTalkGameMode_Statics::ClassParams = {
	&APipeTalkGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APipeTalkGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APipeTalkGameMode()
{
	if (!Z_Registration_Info_UClass_APipeTalkGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APipeTalkGameMode.OuterSingleton, Z_Construct_UClass_APipeTalkGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APipeTalkGameMode.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<APipeTalkGameMode>()
{
	return APipeTalkGameMode::StaticClass();
}
APipeTalkGameMode::APipeTalkGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APipeTalkGameMode);
APipeTalkGameMode::~APipeTalkGameMode() {}
// End Class APipeTalkGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APipeTalkGameMode, APipeTalkGameMode::StaticClass, TEXT("APipeTalkGameMode"), &Z_Registration_Info_UClass_APipeTalkGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APipeTalkGameMode), 384229167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_3842434948(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
