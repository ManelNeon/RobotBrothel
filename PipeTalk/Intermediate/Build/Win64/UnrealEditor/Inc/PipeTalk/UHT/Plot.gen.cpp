// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/Plot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PIPETALK_API UClass* Z_Construct_UClass_AMapManager_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_APlot();
PIPETALK_API UClass* Z_Construct_UClass_APlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class APlot Function GetMapManager
struct Z_Construct_UFunction_APlot_GetMapManager_Statics
{
	struct Plot_eventGetMapManager_Parms
	{
		AMapManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plot Functions" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlot_GetMapManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Plot_eventGetMapManager_Parms, ReturnValue), Z_Construct_UClass_AMapManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlot_GetMapManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlot_GetMapManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlot, nullptr, "GetMapManager", nullptr, nullptr, Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlot_GetMapManager_Statics::Plot_eventGetMapManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetMapManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlot_GetMapManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlot_GetMapManager_Statics::Plot_eventGetMapManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlot_GetMapManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlot_GetMapManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlot::execGetMapManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMapManager**)Z_Param__Result=P_THIS->GetMapManager();
	P_NATIVE_END;
}
// End Class APlot Function GetMapManager

// Begin Class APlot
void APlot::StaticRegisterNativesAPlot()
{
	UClass* Class = APlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMapManager", &APlot::execGetMapManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlot);
UClass* Z_Construct_UClass_APlot_NoRegister()
{
	return APlot::StaticClass();
}
struct Z_Construct_UClass_APlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Plot.h" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlot_GetMapManager, "GetMapManager" }, // 2276971712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlot_Statics::ClassParams = {
	&APlot::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlot_Statics::Class_MetaDataParams), Z_Construct_UClass_APlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlot()
{
	if (!Z_Registration_Info_UClass_APlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlot.OuterSingleton, Z_Construct_UClass_APlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlot.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<APlot>()
{
	return APlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlot);
APlot::~APlot() {}
// End Class APlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlot, APlot::StaticClass, TEXT("APlot"), &Z_Registration_Info_UClass_APlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlot), 939865655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_2767760986(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
