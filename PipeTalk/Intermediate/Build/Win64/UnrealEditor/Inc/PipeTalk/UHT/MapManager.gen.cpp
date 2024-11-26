// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/MapManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PIPETALK_API UClass* Z_Construct_UClass_AMapManager();
PIPETALK_API UClass* Z_Construct_UClass_AMapManager_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_APlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class AMapManager Function BuildFirstRoom
struct Z_Construct_UFunction_AMapManager_BuildFirstRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapManager_BuildFirstRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapManager, nullptr, "BuildFirstRoom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManager_BuildFirstRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapManager_BuildFirstRoom_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapManager_BuildFirstRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapManager_BuildFirstRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapManager::execBuildFirstRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildFirstRoom();
	P_NATIVE_END;
}
// End Class AMapManager Function BuildFirstRoom

// Begin Class AMapManager
void AMapManager::StaticRegisterNativesAMapManager()
{
	UClass* Class = AMapManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildFirstRoom", &AMapManager::execBuildFirstRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapManager);
UClass* Z_Construct_UClass_AMapManager_NoRegister()
{
	return AMapManager::StaticClass();
}
struct Z_Construct_UClass_AMapManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapManager.h" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Plots_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Plots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__Plots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapManager_BuildFirstRoom, "BuildFirstRoom" }, // 2218938103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__Plots_Inner = { "_Plots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__Plots = { "_Plots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _Plots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Plots_MetaData), NewProp__Plots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__Plots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__Plots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapManager_Statics::ClassParams = {
	&AMapManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapManager()
{
	if (!Z_Registration_Info_UClass_AMapManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapManager.OuterSingleton, Z_Construct_UClass_AMapManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapManager.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<AMapManager>()
{
	return AMapManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapManager);
AMapManager::~AMapManager() {}
// End Class AMapManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapManager, AMapManager::StaticClass, TEXT("AMapManager"), &Z_Registration_Info_UClass_AMapManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapManager), 750365190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_1698324872(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
