// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/PipeTalkAICharacters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePipeTalkAICharacters() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkAICharacters();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkAICharacters_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class APipeTalkAICharacters Function GetIsBeingPickedUp
struct Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics
{
	struct PipeTalkAICharacters_eventGetIsBeingPickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventGetIsBeingPickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventGetIsBeingPickedUp_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetIsBeingPickedUp", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PipeTalkAICharacters_eventGetIsBeingPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::PipeTalkAICharacters_eventGetIsBeingPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetIsBeingPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsBeingPickedUp();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetIsBeingPickedUp

// Begin Class APipeTalkAICharacters Function GetIsDoingATask
struct Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics
{
	struct PipeTalkAICharacters_eventGetIsDoingATask_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventGetIsDoingATask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventGetIsDoingATask_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetIsDoingATask", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PipeTalkAICharacters_eventGetIsDoingATask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::PipeTalkAICharacters_eventGetIsDoingATask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetIsDoingATask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsDoingATask();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetIsDoingATask

// Begin Class APipeTalkAICharacters Function SetIsBeingPickedUp
struct Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics
{
	struct PipeTalkAICharacters_eventSetIsBeingPickedUp_Parms
	{
		bool isPickedUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isPickedUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::NewProp_isPickedUp_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventSetIsBeingPickedUp_Parms*)Obj)->isPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::NewProp_isPickedUp = { "isPickedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventSetIsBeingPickedUp_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::NewProp_isPickedUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::NewProp_isPickedUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "SetIsBeingPickedUp", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PipeTalkAICharacters_eventSetIsBeingPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::PipeTalkAICharacters_eventSetIsBeingPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execSetIsBeingPickedUp)
{
	P_GET_UBOOL(Z_Param_isPickedUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsBeingPickedUp(Z_Param_isPickedUp);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function SetIsBeingPickedUp

// Begin Class APipeTalkAICharacters Function SetIsDoingATask
struct Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics
{
	struct PipeTalkAICharacters_eventSetIsDoingATask_Parms
	{
		bool isDoingTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isDoingTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDoingTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::NewProp_isDoingTask_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventSetIsDoingATask_Parms*)Obj)->isDoingTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::NewProp_isDoingTask = { "isDoingTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventSetIsDoingATask_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::NewProp_isDoingTask_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::NewProp_isDoingTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "SetIsDoingATask", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PipeTalkAICharacters_eventSetIsDoingATask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::PipeTalkAICharacters_eventSetIsDoingATask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execSetIsDoingATask)
{
	P_GET_UBOOL(Z_Param_isDoingTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsDoingATask(Z_Param_isDoingTask);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function SetIsDoingATask

// Begin Class APipeTalkAICharacters
void APipeTalkAICharacters::StaticRegisterNativesAPipeTalkAICharacters()
{
	UClass* Class = APipeTalkAICharacters::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsBeingPickedUp", &APipeTalkAICharacters::execGetIsBeingPickedUp },
		{ "GetIsDoingATask", &APipeTalkAICharacters::execGetIsDoingATask },
		{ "SetIsBeingPickedUp", &APipeTalkAICharacters::execSetIsBeingPickedUp },
		{ "SetIsDoingATask", &APipeTalkAICharacters::execSetIsDoingATask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APipeTalkAICharacters);
UClass* Z_Construct_UClass_APipeTalkAICharacters_NoRegister()
{
	return APipeTalkAICharacters::StaticClass();
}
struct Z_Construct_UClass_APipeTalkAICharacters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PipeTalkAICharacters.h" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp, "GetIsBeingPickedUp" }, // 1667121074
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask, "GetIsDoingATask" }, // 966719510
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp, "SetIsBeingPickedUp" }, // 2406681279
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask, "SetIsDoingATask" }, // 3103894631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APipeTalkAICharacters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APipeTalkAICharacters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkAICharacters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APipeTalkAICharacters_Statics::ClassParams = {
	&APipeTalkAICharacters::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkAICharacters_Statics::Class_MetaDataParams), Z_Construct_UClass_APipeTalkAICharacters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APipeTalkAICharacters()
{
	if (!Z_Registration_Info_UClass_APipeTalkAICharacters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APipeTalkAICharacters.OuterSingleton, Z_Construct_UClass_APipeTalkAICharacters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APipeTalkAICharacters.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<APipeTalkAICharacters>()
{
	return APipeTalkAICharacters::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APipeTalkAICharacters);
APipeTalkAICharacters::~APipeTalkAICharacters() {}
// End Class APipeTalkAICharacters

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APipeTalkAICharacters, APipeTalkAICharacters::StaticClass, TEXT("APipeTalkAICharacters"), &Z_Registration_Info_UClass_APipeTalkAICharacters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APipeTalkAICharacters), 2871376728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_844986394(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
