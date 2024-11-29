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
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkAICharacters_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_UPipeTalkGameInstance();
PIPETALK_API UClass* Z_Construct_UClass_UPipeTalkGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class UPipeTalkGameInstance Function DestroyItAll
struct Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "DestroyItAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execDestroyItAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyItAll();
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function DestroyItAll

// Begin Class UPipeTalkGameInstance Function GetHostess
struct Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics
{
	struct PipeTalkGameInstance_eventGetHostess_Parms
	{
		int32 id;
		APipeTalkAICharacters* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGetHostess_Parms, id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGetHostess_Parms, ReturnValue), Z_Construct_UClass_APipeTalkAICharacters_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GetHostess", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PipeTalkGameInstance_eventGetHostess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::PipeTalkGameInstance_eventGetHostess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGetHostess)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APipeTalkAICharacters**)Z_Param__Result=P_THIS->GetHostess(Z_Param_id);
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GetHostess

// Begin Class UPipeTalkGameInstance Function GetLevel
struct Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics
{
	struct PipeTalkGameInstance_eventGetLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GetLevel", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PipeTalkGameInstance_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::PipeTalkGameInstance_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GetLevel

// Begin Class UPipeTalkGameInstance Function GetMoney
struct Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics
{
	struct PipeTalkGameInstance_eventGetMoney_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGetMoney_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GetMoney", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PipeTalkGameInstance_eventGetMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::PipeTalkGameInstance_eventGetMoney_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGetMoney)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMoney();
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GetMoney

// Begin Class UPipeTalkGameInstance Function GetNumberOfHostess
struct Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics
{
	struct PipeTalkGameInstance_eventGetNumberOfHostess_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventGetNumberOfHostess_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "GetNumberOfHostess", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PipeTalkGameInstance_eventGetNumberOfHostess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::PipeTalkGameInstance_eventGetNumberOfHostess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execGetNumberOfHostess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfHostess();
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function GetNumberOfHostess

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

// Begin Class UPipeTalkGameInstance Function RemoveHostess
struct Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics
{
	struct PipeTalkGameInstance_eventRemoveHostess_Parms
	{
		int32 id;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instance Functions" },
		{ "ModuleRelativePath", "PipeTalkGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkGameInstance_eventRemoveHostess_Parms, id), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PipeTalkGameInstance_eventRemoveHostess_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkGameInstance_eventRemoveHostess_Parms), &Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPipeTalkGameInstance, nullptr, "RemoveHostess", nullptr, nullptr, Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PipeTalkGameInstance_eventRemoveHostess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::PipeTalkGameInstance_eventRemoveHostess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPipeTalkGameInstance::execRemoveHostess)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveHostess(Z_Param_id);
	P_NATIVE_END;
}
// End Class UPipeTalkGameInstance Function RemoveHostess

// Begin Class UPipeTalkGameInstance
void UPipeTalkGameInstance::StaticRegisterNativesUPipeTalkGameInstance()
{
	UClass* Class = UPipeTalkGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyItAll", &UPipeTalkGameInstance::execDestroyItAll },
		{ "GetHostess", &UPipeTalkGameInstance::execGetHostess },
		{ "GetLevel", &UPipeTalkGameInstance::execGetLevel },
		{ "GetMoney", &UPipeTalkGameInstance::execGetMoney },
		{ "GetNumberOfHostess", &UPipeTalkGameInstance::execGetNumberOfHostess },
		{ "GiveMoney", &UPipeTalkGameInstance::execGiveMoney },
		{ "GiveXP", &UPipeTalkGameInstance::execGiveXP },
		{ "RemoveHostess", &UPipeTalkGameInstance::execRemoveHostess },
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
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_DestroyItAll, "DestroyItAll" }, // 2283381051
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GetHostess, "GetHostess" }, // 1669615840
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GetLevel, "GetLevel" }, // 413463867
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GetMoney, "GetMoney" }, // 2382575281
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GetNumberOfHostess, "GetNumberOfHostess" }, // 1123077920
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GiveMoney, "GiveMoney" }, // 3833871127
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_GiveXP, "GiveXP" }, // 1439793831
		{ &Z_Construct_UFunction_UPipeTalkGameInstance_RemoveHostess, "RemoveHostess" }, // 678391069
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
		{ Z_Construct_UClass_UPipeTalkGameInstance, UPipeTalkGameInstance::StaticClass, TEXT("UPipeTalkGameInstance"), &Z_Registration_Info_UClass_UPipeTalkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPipeTalkGameInstance), 1443765237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_551520677(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
