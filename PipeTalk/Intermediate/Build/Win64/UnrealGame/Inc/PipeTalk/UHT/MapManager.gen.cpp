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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PIPETALK_API UClass* Z_Construct_UClass_AMapManager();
PIPETALK_API UClass* Z_Construct_UClass_AMapManager_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_APlot_NoRegister();
PIPETALK_API UEnum* Z_Construct_UEnum_PipeTalk_ERooms();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Enum ERooms
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERooms;
static UEnum* ERooms_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERooms.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERooms.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PipeTalk_ERooms, (UObject*)Z_Construct_UPackage__Script_PipeTalk(), TEXT("ERooms"));
	}
	return Z_Registration_Info_UEnum_ERooms.OuterSingleton;
}
template<> PIPETALK_API UEnum* StaticEnum<ERooms>()
{
	return ERooms_StaticEnum();
}
struct Z_Construct_UEnum_PipeTalk_ERooms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BAR_ROOM.Name", "ERooms::BAR_ROOM" },
		{ "BlueprintType", "true" },
		{ "ENTRANCE_ROOM.Name", "ERooms::ENTRANCE_ROOM" },
		{ "KNOWLEDGE_ROOM.Name", "ERooms::KNOWLEDGE_ROOM" },
		{ "ModuleRelativePath", "MapManager.h" },
		{ "RELAXATION_ROOM.Name", "ERooms::RELAXATION_ROOM" },
		{ "TOTAL_ROOM.Name", "ERooms::TOTAL_ROOM" },
		{ "TRAINING_ROOM.Name", "ERooms::TRAINING_ROOM" },
		{ "VIP_ROOM.Name", "ERooms::VIP_ROOM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERooms::ENTRANCE_ROOM", (int64)ERooms::ENTRANCE_ROOM },
		{ "ERooms::BAR_ROOM", (int64)ERooms::BAR_ROOM },
		{ "ERooms::RELAXATION_ROOM", (int64)ERooms::RELAXATION_ROOM },
		{ "ERooms::TRAINING_ROOM", (int64)ERooms::TRAINING_ROOM },
		{ "ERooms::VIP_ROOM", (int64)ERooms::VIP_ROOM },
		{ "ERooms::KNOWLEDGE_ROOM", (int64)ERooms::KNOWLEDGE_ROOM },
		{ "ERooms::TOTAL_ROOM", (int64)ERooms::TOTAL_ROOM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PipeTalk_ERooms_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PipeTalk,
	nullptr,
	"ERooms",
	"ERooms",
	Z_Construct_UEnum_PipeTalk_ERooms_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PipeTalk_ERooms_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PipeTalk_ERooms_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PipeTalk_ERooms_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PipeTalk_ERooms()
{
	if (!Z_Registration_Info_UEnum_ERooms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERooms.InnerSingleton, Z_Construct_UEnum_PipeTalk_ERooms_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERooms.InnerSingleton;
}
// End Enum ERooms

// Begin Class AMapManager Function BuildRoom
struct Z_Construct_UFunction_AMapManager_BuildRoom_Statics
{
	struct MapManager_eventBuildRoom_Parms
	{
		int32 row;
		int32 column;
		ERooms roomCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_column;
	static const UECodeGen_Private::FBytePropertyParams NewProp_roomCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_roomCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapManager_eventBuildRoom_Parms, row), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_column = { "column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapManager_eventBuildRoom_Parms, column), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_roomCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_roomCode = { "roomCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapManager_eventBuildRoom_Parms, roomCode), Z_Construct_UEnum_PipeTalk_ERooms, METADATA_PARAMS(0, nullptr) }; // 4271384310
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapManager_BuildRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_column,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_roomCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManager_BuildRoom_Statics::NewProp_roomCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManager_BuildRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapManager_BuildRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapManager, nullptr, "BuildRoom", nullptr, nullptr, Z_Construct_UFunction_AMapManager_BuildRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManager_BuildRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapManager_BuildRoom_Statics::MapManager_eventBuildRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManager_BuildRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapManager_BuildRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapManager_BuildRoom_Statics::MapManager_eventBuildRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapManager_BuildRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapManager_BuildRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapManager::execBuildRoom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_row);
	P_GET_PROPERTY(FIntProperty,Z_Param_column);
	P_GET_ENUM(ERooms,Z_Param_roomCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildRoom(Z_Param_row,Z_Param_column,ERooms(Z_Param_roomCode));
	P_NATIVE_END;
}
// End Class AMapManager Function BuildRoom

// Begin Class AMapManager Function CreateHostess
struct Z_Construct_UFunction_AMapManager_CreateHostess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapManager_CreateHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapManager, nullptr, "CreateHostess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManager_CreateHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapManager_CreateHostess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapManager_CreateHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapManager_CreateHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapManager::execCreateHostess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateHostess();
	P_NATIVE_END;
}
// End Class AMapManager Function CreateHostess

// Begin Class AMapManager
void AMapManager::StaticRegisterNativesAMapManager()
{
	UClass* Class = AMapManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildRoom", &AMapManager::execBuildRoom },
		{ "CreateHostess", &AMapManager::execCreateHostess },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__EntranceClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__BarClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__RelaxationClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__TrainingClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__VIPClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__KnowledgeClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__PlotClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AIClass_MetaData[] = {
		{ "Category", "Blueprints Map Manager" },
		{ "ModuleRelativePath", "MapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Plots_MetaData[] = {
		{ "Category", "Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Row * 7 + Column\n" },
#endif
		{ "ModuleRelativePath", "MapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row * 7 + Column" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__EntranceClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__BarClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__RelaxationClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__TrainingClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__VIPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__KnowledgeClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__PlotClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__AIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Plots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__Plots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapManager_BuildRoom, "BuildRoom" }, // 3484814078
		{ &Z_Construct_UFunction_AMapManager_CreateHostess, "CreateHostess" }, // 3456116624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__EntranceClass = { "_EntranceClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _EntranceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__EntranceClass_MetaData), NewProp__EntranceClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__BarClass = { "_BarClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _BarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__BarClass_MetaData), NewProp__BarClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__RelaxationClass = { "_RelaxationClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _RelaxationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__RelaxationClass_MetaData), NewProp__RelaxationClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__TrainingClass = { "_TrainingClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _TrainingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__TrainingClass_MetaData), NewProp__TrainingClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__VIPClass = { "_VIPClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _VIPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__VIPClass_MetaData), NewProp__VIPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__KnowledgeClass = { "_KnowledgeClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _KnowledgeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__KnowledgeClass_MetaData), NewProp__KnowledgeClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__PlotClass = { "_PlotClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _PlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__PlotClass_MetaData), NewProp__PlotClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__AIClass = { "_AIClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _AIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AIClass_MetaData), NewProp__AIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__Plots_Inner = { "_Plots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapManager_Statics::NewProp__Plots = { "_Plots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManager, _Plots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Plots_MetaData), NewProp__Plots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__EntranceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__BarClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__RelaxationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__TrainingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__VIPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__KnowledgeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__PlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManager_Statics::NewProp__AIClass,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERooms_StaticEnum, TEXT("ERooms"), &Z_Registration_Info_UEnum_ERooms, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4271384310U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapManager, AMapManager::StaticClass, TEXT("AMapManager"), &Z_Registration_Info_UClass_AMapManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapManager), 706041382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_2288279045(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
