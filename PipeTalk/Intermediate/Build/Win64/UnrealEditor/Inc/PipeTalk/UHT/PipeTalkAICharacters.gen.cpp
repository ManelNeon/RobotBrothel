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

// Begin Class APipeTalkAICharacters Function AddSocialBattery
struct Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics
{
	struct PipeTalkAICharacters_eventAddSocialBattery_Parms
	{
		int32 socialBattery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_socialBattery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::NewProp_socialBattery = { "socialBattery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventAddSocialBattery_Parms, socialBattery), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::NewProp_socialBattery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "AddSocialBattery", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PipeTalkAICharacters_eventAddSocialBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::PipeTalkAICharacters_eventAddSocialBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execAddSocialBattery)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_socialBattery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSocialBattery(Z_Param_socialBattery);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function AddSocialBattery

// Begin Class APipeTalkAICharacters Function GetCharismaStat
struct Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics
{
	struct PipeTalkAICharacters_eventGetCharismaStat_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventGetCharismaStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetCharismaStat", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PipeTalkAICharacters_eventGetCharismaStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::PipeTalkAICharacters_eventGetCharismaStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetCharismaStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharismaStat();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetCharismaStat

// Begin Class APipeTalkAICharacters Function GetCucumberStat
struct Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics
{
	struct PipeTalkAICharacters_eventGetCucumberStat_Parms
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
void Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventGetCucumberStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventGetCucumberStat_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetCucumberStat", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PipeTalkAICharacters_eventGetCucumberStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::PipeTalkAICharacters_eventGetCucumberStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetCucumberStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCucumberStat();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetCucumberStat

// Begin Class APipeTalkAICharacters Function GetCurrentSocialBattery
struct Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics
{
	struct PipeTalkAICharacters_eventGetCurrentSocialBattery_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventGetCurrentSocialBattery_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetCurrentSocialBattery", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PipeTalkAICharacters_eventGetCurrentSocialBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::PipeTalkAICharacters_eventGetCurrentSocialBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetCurrentSocialBattery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentSocialBattery();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetCurrentSocialBattery

// Begin Class APipeTalkAICharacters Function GetID
struct Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics
{
	struct PipeTalkAICharacters_eventGetID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PipeTalkAICharacters_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::PipeTalkAICharacters_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetID

// Begin Class APipeTalkAICharacters Function GetIntelligenceStat
struct Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics
{
	struct PipeTalkAICharacters_eventGetIntelligenceStat_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventGetIntelligenceStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetIntelligenceStat", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PipeTalkAICharacters_eventGetIntelligenceStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::PipeTalkAICharacters_eventGetIntelligenceStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetIntelligenceStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntelligenceStat();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetIntelligenceStat

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

// Begin Class APipeTalkAICharacters Function GetIsMoving
struct Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics
{
	struct PipeTalkAICharacters_eventGetIsMoving_Parms
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
void Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventGetIsMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventGetIsMoving_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetIsMoving", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PipeTalkAICharacters_eventGetIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::PipeTalkAICharacters_eventGetIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetIsMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsMoving();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetIsMoving

// Begin Class APipeTalkAICharacters Function GetMaxSocialBattery
struct Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics
{
	struct PipeTalkAICharacters_eventGetMaxSocialBattery_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventGetMaxSocialBattery_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "GetMaxSocialBattery", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PipeTalkAICharacters_eventGetMaxSocialBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::PipeTalkAICharacters_eventGetMaxSocialBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execGetMaxSocialBattery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxSocialBattery();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function GetMaxSocialBattery

// Begin Class APipeTalkAICharacters Function MoveAIAround
struct Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "MoveAIAround", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execMoveAIAround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveAIAround();
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function MoveAIAround

// Begin Class APipeTalkAICharacters Function SetID
struct Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics
{
	struct PipeTalkAICharacters_eventSetID_Parms
	{
		int32 id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventSetID_Parms, id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::NewProp_id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "SetID", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PipeTalkAICharacters_eventSetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::PipeTalkAICharacters_eventSetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_SetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_SetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execSetID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetID(Z_Param_id);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function SetID

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

// Begin Class APipeTalkAICharacters Function SetIsMoving
struct Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics
{
	struct PipeTalkAICharacters_eventSetIsMoving_Parms
	{
		bool isMoving;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::NewProp_isMoving_SetBit(void* Obj)
{
	((PipeTalkAICharacters_eventSetIsMoving_Parms*)Obj)->isMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::NewProp_isMoving = { "isMoving", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PipeTalkAICharacters_eventSetIsMoving_Parms), &Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::NewProp_isMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "SetIsMoving", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PipeTalkAICharacters_eventSetIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::PipeTalkAICharacters_eventSetIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execSetIsMoving)
{
	P_GET_UBOOL(Z_Param_isMoving);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsMoving(Z_Param_isMoving);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function SetIsMoving

// Begin Class APipeTalkAICharacters Function SetMaxSocialBattery
struct Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics
{
	struct PipeTalkAICharacters_eventSetMaxSocialBattery_Parms
	{
		int32 socialBattery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Logic" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_socialBattery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::NewProp_socialBattery = { "socialBattery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PipeTalkAICharacters_eventSetMaxSocialBattery_Parms, socialBattery), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::NewProp_socialBattery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APipeTalkAICharacters, nullptr, "SetMaxSocialBattery", nullptr, nullptr, Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PipeTalkAICharacters_eventSetMaxSocialBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::PipeTalkAICharacters_eventSetMaxSocialBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APipeTalkAICharacters::execSetMaxSocialBattery)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_socialBattery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxSocialBattery(Z_Param_socialBattery);
	P_NATIVE_END;
}
// End Class APipeTalkAICharacters Function SetMaxSocialBattery

// Begin Class APipeTalkAICharacters
void APipeTalkAICharacters::StaticRegisterNativesAPipeTalkAICharacters()
{
	UClass* Class = APipeTalkAICharacters::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSocialBattery", &APipeTalkAICharacters::execAddSocialBattery },
		{ "GetCharismaStat", &APipeTalkAICharacters::execGetCharismaStat },
		{ "GetCucumberStat", &APipeTalkAICharacters::execGetCucumberStat },
		{ "GetCurrentSocialBattery", &APipeTalkAICharacters::execGetCurrentSocialBattery },
		{ "GetID", &APipeTalkAICharacters::execGetID },
		{ "GetIntelligenceStat", &APipeTalkAICharacters::execGetIntelligenceStat },
		{ "GetIsBeingPickedUp", &APipeTalkAICharacters::execGetIsBeingPickedUp },
		{ "GetIsDoingATask", &APipeTalkAICharacters::execGetIsDoingATask },
		{ "GetIsMoving", &APipeTalkAICharacters::execGetIsMoving },
		{ "GetMaxSocialBattery", &APipeTalkAICharacters::execGetMaxSocialBattery },
		{ "MoveAIAround", &APipeTalkAICharacters::execMoveAIAround },
		{ "SetID", &APipeTalkAICharacters::execSetID },
		{ "SetIsBeingPickedUp", &APipeTalkAICharacters::execSetIsBeingPickedUp },
		{ "SetIsDoingATask", &APipeTalkAICharacters::execSetIsDoingATask },
		{ "SetIsMoving", &APipeTalkAICharacters::execSetIsMoving },
		{ "SetMaxSocialBattery", &APipeTalkAICharacters::execSetMaxSocialBattery },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__IsClient_MetaData[] = {
		{ "Category", "AI Definitions" },
		{ "ModuleRelativePath", "PipeTalkAICharacters.h" },
	};
#endif // WITH_METADATA
	static void NewProp__IsClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__IsClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APipeTalkAICharacters_AddSocialBattery, "AddSocialBattery" }, // 4131608379
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetCharismaStat, "GetCharismaStat" }, // 3663597922
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetCucumberStat, "GetCucumberStat" }, // 3360894951
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetCurrentSocialBattery, "GetCurrentSocialBattery" }, // 2633231484
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetID, "GetID" }, // 2355742064
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIntelligenceStat, "GetIntelligenceStat" }, // 1374719026
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIsBeingPickedUp, "GetIsBeingPickedUp" }, // 1667121074
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIsDoingATask, "GetIsDoingATask" }, // 966719510
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetIsMoving, "GetIsMoving" }, // 235799696
		{ &Z_Construct_UFunction_APipeTalkAICharacters_GetMaxSocialBattery, "GetMaxSocialBattery" }, // 506465443
		{ &Z_Construct_UFunction_APipeTalkAICharacters_MoveAIAround, "MoveAIAround" }, // 1948408343
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetID, "SetID" }, // 2834122112
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetIsBeingPickedUp, "SetIsBeingPickedUp" }, // 2406681279
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetIsDoingATask, "SetIsDoingATask" }, // 3103894631
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetIsMoving, "SetIsMoving" }, // 2517822089
		{ &Z_Construct_UFunction_APipeTalkAICharacters_SetMaxSocialBattery, "SetMaxSocialBattery" }, // 2455806371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APipeTalkAICharacters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APipeTalkAICharacters_Statics::NewProp__IsClient_SetBit(void* Obj)
{
	((APipeTalkAICharacters*)Obj)->_IsClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APipeTalkAICharacters_Statics::NewProp__IsClient = { "_IsClient", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APipeTalkAICharacters), &Z_Construct_UClass_APipeTalkAICharacters_Statics::NewProp__IsClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__IsClient_MetaData), NewProp__IsClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APipeTalkAICharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APipeTalkAICharacters_Statics::NewProp__IsClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkAICharacters_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_APipeTalkAICharacters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkAICharacters_Statics::PropPointers),
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
		{ Z_Construct_UClass_APipeTalkAICharacters, APipeTalkAICharacters::StaticClass, TEXT("APipeTalkAICharacters"), &Z_Registration_Info_UClass_APipeTalkAICharacters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APipeTalkAICharacters), 2684622595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_3040321157(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
