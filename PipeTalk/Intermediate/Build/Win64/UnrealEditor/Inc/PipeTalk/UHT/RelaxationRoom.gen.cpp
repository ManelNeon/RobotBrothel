// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/RelaxationRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelaxationRoom() {}

// Begin Cross Module References
PIPETALK_API UClass* Z_Construct_UClass_ARelaxationRoom();
PIPETALK_API UClass* Z_Construct_UClass_ARelaxationRoom_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_ARoom();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class ARelaxationRoom
void ARelaxationRoom::StaticRegisterNativesARelaxationRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARelaxationRoom);
UClass* Z_Construct_UClass_ARelaxationRoom_NoRegister()
{
	return ARelaxationRoom::StaticClass();
}
struct Z_Construct_UClass_ARelaxationRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RelaxationRoom.h" },
		{ "ModuleRelativePath", "RelaxationRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialBatteryToGive_MetaData[] = {
		{ "Category", "Relaxation Room Stats" },
		{ "ModuleRelativePath", "RelaxationRoom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SocialBatteryToGive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARelaxationRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARelaxationRoom_Statics::NewProp_SocialBatteryToGive = { "SocialBatteryToGive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARelaxationRoom, SocialBatteryToGive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialBatteryToGive_MetaData), NewProp_SocialBatteryToGive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARelaxationRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARelaxationRoom_Statics::NewProp_SocialBatteryToGive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARelaxationRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARelaxationRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARoom,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARelaxationRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARelaxationRoom_Statics::ClassParams = {
	&ARelaxationRoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARelaxationRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARelaxationRoom_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARelaxationRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ARelaxationRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARelaxationRoom()
{
	if (!Z_Registration_Info_UClass_ARelaxationRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARelaxationRoom.OuterSingleton, Z_Construct_UClass_ARelaxationRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARelaxationRoom.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<ARelaxationRoom>()
{
	return ARelaxationRoom::StaticClass();
}
ARelaxationRoom::ARelaxationRoom() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARelaxationRoom);
ARelaxationRoom::~ARelaxationRoom() {}
// End Class ARelaxationRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_RelaxationRoom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARelaxationRoom, ARelaxationRoom::StaticClass, TEXT("ARelaxationRoom"), &Z_Registration_Info_UClass_ARelaxationRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARelaxationRoom), 4010489322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_RelaxationRoom_h_1138813892(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_RelaxationRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_RelaxationRoom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
