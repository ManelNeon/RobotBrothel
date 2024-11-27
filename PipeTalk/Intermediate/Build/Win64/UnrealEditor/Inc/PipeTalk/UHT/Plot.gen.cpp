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

// Begin Class APlot Function GetColumnIndex
struct Z_Construct_UFunction_APlot_GetColumnIndex_Statics
{
	struct Plot_eventGetColumnIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plot Functions" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlot_GetColumnIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Plot_eventGetColumnIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlot_GetColumnIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlot_GetColumnIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetColumnIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlot_GetColumnIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlot, nullptr, "GetColumnIndex", nullptr, nullptr, Z_Construct_UFunction_APlot_GetColumnIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetColumnIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlot_GetColumnIndex_Statics::Plot_eventGetColumnIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetColumnIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlot_GetColumnIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlot_GetColumnIndex_Statics::Plot_eventGetColumnIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlot_GetColumnIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlot_GetColumnIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlot::execGetColumnIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetColumnIndex();
	P_NATIVE_END;
}
// End Class APlot Function GetColumnIndex

// Begin Class APlot Function GetIsPlotBuyable
struct Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics
{
	struct Plot_eventGetIsPlotBuyable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plot Functions" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Plot_eventGetIsPlotBuyable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Plot_eventGetIsPlotBuyable_Parms), &Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlot, nullptr, "GetIsPlotBuyable", nullptr, nullptr, Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::Plot_eventGetIsPlotBuyable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::Plot_eventGetIsPlotBuyable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlot_GetIsPlotBuyable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlot_GetIsPlotBuyable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlot::execGetIsPlotBuyable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsPlotBuyable();
	P_NATIVE_END;
}
// End Class APlot Function GetIsPlotBuyable

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlot_GetMapManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlot, nullptr, "GetMapManager", nullptr, nullptr, Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetMapManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlot_GetMapManager_Statics::Plot_eventGetMapManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetMapManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlot_GetMapManager_Statics::Function_MetaDataParams) };
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

// Begin Class APlot Function GetRowIndex
struct Z_Construct_UFunction_APlot_GetRowIndex_Statics
{
	struct Plot_eventGetRowIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plot Functions" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlot_GetRowIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Plot_eventGetRowIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlot_GetRowIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlot_GetRowIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetRowIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlot_GetRowIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlot, nullptr, "GetRowIndex", nullptr, nullptr, Z_Construct_UFunction_APlot_GetRowIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetRowIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlot_GetRowIndex_Statics::Plot_eventGetRowIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlot_GetRowIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlot_GetRowIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlot_GetRowIndex_Statics::Plot_eventGetRowIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlot_GetRowIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlot_GetRowIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlot::execGetRowIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRowIndex();
	P_NATIVE_END;
}
// End Class APlot Function GetRowIndex

// Begin Class APlot
void APlot::StaticRegisterNativesAPlot()
{
	UClass* Class = APlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetColumnIndex", &APlot::execGetColumnIndex },
		{ "GetIsPlotBuyable", &APlot::execGetIsPlotBuyable },
		{ "GetMapManager", &APlot::execGetMapManager },
		{ "GetRowIndex", &APlot::execGetRowIndex },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MapManager_MetaData[] = {
		{ "Category", "Plot" },
		{ "ModuleRelativePath", "Plot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__MapManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlot_GetColumnIndex, "GetColumnIndex" }, // 2469017223
		{ &Z_Construct_UFunction_APlot_GetIsPlotBuyable, "GetIsPlotBuyable" }, // 3530472723
		{ &Z_Construct_UFunction_APlot_GetMapManager, "GetMapManager" }, // 4036186626
		{ &Z_Construct_UFunction_APlot_GetRowIndex, "GetRowIndex" }, // 1305979384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlot_Statics::NewProp__MapManager = { "_MapManager", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlot, _MapManager), Z_Construct_UClass_AMapManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MapManager_MetaData), NewProp__MapManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlot_Statics::NewProp__MapManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlot_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_APlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlot_Statics::PropPointers),
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
		{ Z_Construct_UClass_APlot, APlot::StaticClass, TEXT("APlot"), &Z_Registration_Info_UClass_APlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlot), 1751387134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_3775365858(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
