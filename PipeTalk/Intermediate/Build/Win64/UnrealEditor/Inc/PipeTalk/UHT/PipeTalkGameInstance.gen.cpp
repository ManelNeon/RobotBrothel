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

// Begin Class UPipeTalkGameInstance Function GiveMoney
struct Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics
{
	struct PipeTalkGameInstance_eventGiveMoney_Parms
	{
		int32 amountOfMoney;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfMoney;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::NewProp_amountOfMoney = { "amountOfMoney", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGiveMoney_Parms, amountOfMoney), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::NewProp_amountOfMoney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GiveMoney", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PipeTalkGameInstance_eventGiveMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::PipeTalkGameInstance_eventGiveMoney_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGiveMoney)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amountOfMoney);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveMoney(Z_Param_amountOfMoney);
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GiveMoney

// Begin Class UPipeTalkGameInstance Function GiveXP
struct Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics
{
	struct PipeTalkGameInstance_eventGiveXP_Parms
	{
		int32 amountOfXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::NewProp_amountOfXP = { "amountOfXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGiveXP_Parms, amountOfXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::NewProp_amountOfXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GiveXP", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PipeTalkGameInstance_eventGiveXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::PipeTalkGameInstance_eventGiveXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGiveXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amountOfXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveXP(Z_Param_amountOfXP);
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GiveXP

// Begin Class UPipeTalkGameInstance
void UPipeTalkGameInstance::StaticRegisterNativesUPipeTalkGameInstance()
{
	UClass* Class = UPipeTalkGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GiveMoney", &UPipeTalkGameInstance::execGiveMoney },
		{ "GiveXP", &UPipeTalkGameInstance::execGiveXP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "PipeTalkGameInstance.h" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney, "GiveMoney" }, // 3833871127
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP, "GiveXP" }, // 1439793831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UPipeTalkGameInstance);
UPipeTalkGameInstance::~UPipeTalkGameInstance() {}
// End Class UPipeTalkGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPipeTalkGameInstance, UPipeTalkGameInstance::StaticClass, TEXT("UPipeTalkGameInstance"), &Z_Registration_Info_UClass_UPipeTalkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPipeTalkGameInstance), 2064737105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_872221147(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
