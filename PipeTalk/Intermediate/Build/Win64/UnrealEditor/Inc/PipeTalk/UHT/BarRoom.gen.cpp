// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/BarRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarRoom() {}

// Begin Cross Module References
PIPETALK_API UClass* Z_Construct_UClass_ABarRoom();
PIPETALK_API UClass* Z_Construct_UClass_ABarRoom_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_ARoom();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class ABarRoom
void ABarRoom::StaticRegisterNativesABarRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABarRoom);
UClass* Z_Construct_UClass_ABarRoom_NoRegister()
{
	return ABarRoom::StaticClass();
}
struct Z_Construct_UClass_ABarRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BarRoom.h" },
		{ "ModuleRelativePath", "BarRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoneyToGivePerHostess_MetaData[] = {
		{ "Category", "Bar Room Stats" },
		{ "ModuleRelativePath", "BarRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialBatteryToTake_MetaData[] = {
		{ "Category", "Bar Room Stats" },
		{ "ModuleRelativePath", "BarRoom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoneyToGivePerHostess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SocialBatteryToTake;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABarRoom_Statics::NewProp_MoneyToGivePerHostess = { "MoneyToGivePerHostess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarRoom, MoneyToGivePerHostess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoneyToGivePerHostess_MetaData), NewProp_MoneyToGivePerHostess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABarRoom_Statics::NewProp_SocialBatteryToTake = { "SocialBatteryToTake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarRoom, SocialBatteryToTake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialBatteryToTake_MetaData), NewProp_SocialBatteryToTake_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarRoom_Statics::NewProp_MoneyToGivePerHostess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarRoom_Statics::NewProp_SocialBatteryToTake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABarRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABarRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARoom,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABarRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarRoom_Statics::ClassParams = {
	&ABarRoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABarRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABarRoom_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABarRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ABarRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABarRoom()
{
	if (!Z_Registration_Info_UClass_ABarRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarRoom.OuterSingleton, Z_Construct_UClass_ABarRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABarRoom.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<ABarRoom>()
{
	return ABarRoom::StaticClass();
}
ABarRoom::ABarRoom() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABarRoom);
ABarRoom::~ABarRoom() {}
// End Class ABarRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABarRoom, ABarRoom::StaticClass, TEXT("ABarRoom"), &Z_Registration_Info_UClass_ABarRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarRoom), 3283637269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_2266241431(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
