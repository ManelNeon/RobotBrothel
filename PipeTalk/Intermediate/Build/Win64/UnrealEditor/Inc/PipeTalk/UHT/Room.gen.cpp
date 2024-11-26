// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/Room.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PIPETALK_API UClass* Z_Construct_UClass_ARoom();
PIPETALK_API UClass* Z_Construct_UClass_ARoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class ARoom
void ARoom::StaticRegisterNativesARoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoom);
UClass* Z_Construct_UClass_ARoom_NoRegister()
{
	return ARoom::StaticClass();
}
struct Z_Construct_UClass_ARoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Room.h" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoom_Statics::ClassParams = {
	&ARoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoom()
{
	if (!Z_Registration_Info_UClass_ARoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoom.OuterSingleton, Z_Construct_UClass_ARoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoom.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<ARoom>()
{
	return ARoom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoom);
ARoom::~ARoom() {}
// End Class ARoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoom, ARoom::StaticClass, TEXT("ARoom"), &Z_Registration_Info_UClass_ARoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom), 870115624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_589648273(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
