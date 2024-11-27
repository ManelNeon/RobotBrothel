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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PIPETALK_API UClass* Z_Construct_UClass_ARoom();
PIPETALK_API UClass* Z_Construct_UClass_ARoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class ARoom Function AddClient
struct Z_Construct_UFunction_ARoom_AddClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_AddClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "AddClient", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_AddClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_AddClient_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoom_AddClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_AddClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execAddClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddClient();
	P_NATIVE_END;
}
// End Class ARoom Function AddClient

// Begin Class ARoom Function AddWorkingHostess
struct Z_Construct_UFunction_ARoom_AddWorkingHostess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_AddWorkingHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "AddWorkingHostess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_AddWorkingHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_AddWorkingHostess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoom_AddWorkingHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_AddWorkingHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execAddWorkingHostess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWorkingHostess();
	P_NATIVE_END;
}
// End Class ARoom Function AddWorkingHostess

// Begin Class ARoom Function GetCurrentClientCapacity
struct Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics
{
	struct Room_eventGetCurrentClientCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCurrentClientCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetCurrentClientCapacity", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::Room_eventGetCurrentClientCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::Room_eventGetCurrentClientCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetCurrentClientCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetCurrentClientCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetCurrentClientCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentClientCapacity();
	P_NATIVE_END;
}
// End Class ARoom Function GetCurrentClientCapacity

// Begin Class ARoom Function GetCurrentHostessCapacity
struct Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics
{
	struct Room_eventGetCurrentHostessCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCurrentHostessCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetCurrentHostessCapacity", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::Room_eventGetCurrentHostessCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::Room_eventGetCurrentHostessCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetCurrentHostessCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentHostessCapacity();
	P_NATIVE_END;
}
// End Class ARoom Function GetCurrentHostessCapacity

// Begin Class ARoom Function GetIsFullClients
struct Z_Construct_UFunction_ARoom_GetIsFullClients_Statics
{
	struct Room_eventGetIsFullClients_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventGetIsFullClients_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventGetIsFullClients_Parms), &Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetIsFullClients", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::Room_eventGetIsFullClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::Room_eventGetIsFullClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetIsFullClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetIsFullClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetIsFullClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsFullClients();
	P_NATIVE_END;
}
// End Class ARoom Function GetIsFullClients

// Begin Class ARoom Function GetIsFullHostess
struct Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics
{
	struct Room_eventGetIsFullHostess_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventGetIsFullHostess_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventGetIsFullHostess_Parms), &Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetIsFullHostess", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::Room_eventGetIsFullHostess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::Room_eventGetIsFullHostess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetIsFullHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetIsFullHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetIsFullHostess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsFullHostess();
	P_NATIVE_END;
}
// End Class ARoom Function GetIsFullHostess

// Begin Class ARoom Function GetIsOccupied
struct Z_Construct_UFunction_ARoom_GetIsOccupied_Statics
{
	struct Room_eventGetIsOccupied_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventGetIsOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventGetIsOccupied_Parms), &Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetIsOccupied", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::Room_eventGetIsOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::Room_eventGetIsOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetIsOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetIsOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetIsOccupied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsOccupied();
	P_NATIVE_END;
}
// End Class ARoom Function GetIsOccupied

// Begin Class ARoom Function GetJobTeleportLocations
struct Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics
{
	struct Room_eventGetJobTeleportLocations_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetJobTeleportLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetJobTeleportLocations", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::Room_eventGetJobTeleportLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::Room_eventGetJobTeleportLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetJobTeleportLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetJobTeleportLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetJobTeleportLocations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetJobTeleportLocations();
	P_NATIVE_END;
}
// End Class ARoom Function GetJobTeleportLocations

// Begin Class ARoom Function GetTeleportLocation
struct Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics
{
	struct Room_eventGetTeleportLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "GetTeleportLocation", nullptr, nullptr, Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::Room_eventGetTeleportLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::Room_eventGetTeleportLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_GetTeleportLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_GetTeleportLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execGetTeleportLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTeleportLocation();
	P_NATIVE_END;
}
// End Class ARoom Function GetTeleportLocation

// Begin Class ARoom Function RemoveClient
struct Z_Construct_UFunction_ARoom_RemoveClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_RemoveClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "RemoveClient", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_RemoveClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_RemoveClient_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoom_RemoveClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_RemoveClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execRemoveClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveClient();
	P_NATIVE_END;
}
// End Class ARoom Function RemoveClient

// Begin Class ARoom Function RemoveWorkingHostess
struct Z_Construct_UFunction_ARoom_RemoveWorkingHostess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_RemoveWorkingHostess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "RemoveWorkingHostess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_RemoveWorkingHostess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_RemoveWorkingHostess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoom_RemoveWorkingHostess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_RemoveWorkingHostess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execRemoveWorkingHostess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWorkingHostess();
	P_NATIVE_END;
}
// End Class ARoom Function RemoveWorkingHostess

// Begin Class ARoom Function SetIsOccupied
struct Z_Construct_UFunction_ARoom_SetIsOccupied_Statics
{
	struct Room_eventSetIsOccupied_Parms
	{
		bool isOccupied;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isOccupied;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::NewProp_isOccupied_SetBit(void* Obj)
{
	((Room_eventSetIsOccupied_Parms*)Obj)->isOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::NewProp_isOccupied = { "isOccupied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventSetIsOccupied_Parms), &Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::NewProp_isOccupied_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::NewProp_isOccupied,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "SetIsOccupied", nullptr, nullptr, Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::Room_eventSetIsOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::Room_eventSetIsOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_SetIsOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_SetIsOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execSetIsOccupied)
{
	P_GET_UBOOL(Z_Param_isOccupied);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsOccupied(Z_Param_isOccupied);
	P_NATIVE_END;
}
// End Class ARoom Function SetIsOccupied

// Begin Class ARoom Function SetTeleportJobLocation
struct Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics
{
	struct Room_eventSetTeleportJobLocation_Parms
	{
		FVector location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventSetTeleportJobLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "SetTeleportJobLocation", nullptr, nullptr, Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::Room_eventSetTeleportJobLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::Room_eventSetTeleportJobLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_SetTeleportJobLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_SetTeleportJobLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execSetTeleportJobLocation)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeleportJobLocation(Z_Param_location);
	P_NATIVE_END;
}
// End Class ARoom Function SetTeleportJobLocation

// Begin Class ARoom Function SetTeleportLocation
struct Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics
{
	struct Room_eventSetTeleportLocation_Parms
	{
		FVector location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Functions" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventSetTeleportLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoom, nullptr, "SetTeleportLocation", nullptr, nullptr, Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::Room_eventSetTeleportLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::Room_eventSetTeleportLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoom_SetTeleportLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoom_SetTeleportLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoom::execSetTeleportLocation)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeleportLocation(Z_Param_location);
	P_NATIVE_END;
}
// End Class ARoom Function SetTeleportLocation

// Begin Class ARoom
void ARoom::StaticRegisterNativesARoom()
{
	UClass* Class = ARoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddClient", &ARoom::execAddClient },
		{ "AddWorkingHostess", &ARoom::execAddWorkingHostess },
		{ "GetCurrentClientCapacity", &ARoom::execGetCurrentClientCapacity },
		{ "GetCurrentHostessCapacity", &ARoom::execGetCurrentHostessCapacity },
		{ "GetIsFullClients", &ARoom::execGetIsFullClients },
		{ "GetIsFullHostess", &ARoom::execGetIsFullHostess },
		{ "GetIsOccupied", &ARoom::execGetIsOccupied },
		{ "GetJobTeleportLocations", &ARoom::execGetJobTeleportLocations },
		{ "GetTeleportLocation", &ARoom::execGetTeleportLocation },
		{ "RemoveClient", &ARoom::execRemoveClient },
		{ "RemoveWorkingHostess", &ARoom::execRemoveWorkingHostess },
		{ "SetIsOccupied", &ARoom::execSetIsOccupied },
		{ "SetTeleportJobLocation", &ARoom::execSetTeleportJobLocation },
		{ "SetTeleportLocation", &ARoom::execSetTeleportLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MaximumHostessCapacity_MetaData[] = {
		{ "Category", "Room Variables" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MaximumClientsCapacity_MetaData[] = {
		{ "Category", "Room Variables" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__TeleportLocationBasic_MetaData[] = {
		{ "Category", "Room Variables" },
		{ "ModuleRelativePath", "Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__TeleportLocationJob_MetaData[] = {
		{ "Category", "Room Variables" },
		{ "ModuleRelativePath", "Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__MaximumHostessCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp__MaximumClientsCapacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp__TeleportLocationBasic;
	static const UECodeGen_Private::FStructPropertyParams NewProp__TeleportLocationJob_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__TeleportLocationJob;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoom_AddClient, "AddClient" }, // 1320310994
		{ &Z_Construct_UFunction_ARoom_AddWorkingHostess, "AddWorkingHostess" }, // 1958954694
		{ &Z_Construct_UFunction_ARoom_GetCurrentClientCapacity, "GetCurrentClientCapacity" }, // 387738186
		{ &Z_Construct_UFunction_ARoom_GetCurrentHostessCapacity, "GetCurrentHostessCapacity" }, // 3622451634
		{ &Z_Construct_UFunction_ARoom_GetIsFullClients, "GetIsFullClients" }, // 3826001900
		{ &Z_Construct_UFunction_ARoom_GetIsFullHostess, "GetIsFullHostess" }, // 549292719
		{ &Z_Construct_UFunction_ARoom_GetIsOccupied, "GetIsOccupied" }, // 1959508740
		{ &Z_Construct_UFunction_ARoom_GetJobTeleportLocations, "GetJobTeleportLocations" }, // 2296075497
		{ &Z_Construct_UFunction_ARoom_GetTeleportLocation, "GetTeleportLocation" }, // 465177180
		{ &Z_Construct_UFunction_ARoom_RemoveClient, "RemoveClient" }, // 404076816
		{ &Z_Construct_UFunction_ARoom_RemoveWorkingHostess, "RemoveWorkingHostess" }, // 1619948597
		{ &Z_Construct_UFunction_ARoom_SetIsOccupied, "SetIsOccupied" }, // 2036390293
		{ &Z_Construct_UFunction_ARoom_SetTeleportJobLocation, "SetTeleportJobLocation" }, // 2895536899
		{ &Z_Construct_UFunction_ARoom_SetTeleportLocation, "SetTeleportLocation" }, // 3189735629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp__MaximumHostessCapacity = { "_MaximumHostessCapacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, _MaximumHostessCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MaximumHostessCapacity_MetaData), NewProp__MaximumHostessCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp__MaximumClientsCapacity = { "_MaximumClientsCapacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, _MaximumClientsCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MaximumClientsCapacity_MetaData), NewProp__MaximumClientsCapacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationBasic = { "_TeleportLocationBasic", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, _TeleportLocationBasic), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__TeleportLocationBasic_MetaData), NewProp__TeleportLocationBasic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationJob_Inner = { "_TeleportLocationJob", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationJob = { "_TeleportLocationJob", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoom, _TeleportLocationJob), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__TeleportLocationJob_MetaData), NewProp__TeleportLocationJob_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp__MaximumHostessCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp__MaximumClientsCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationBasic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationJob_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoom_Statics::NewProp__TeleportLocationJob,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ARoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoom_Statics::PropPointers),
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
		{ Z_Construct_UClass_ARoom, ARoom::StaticClass, TEXT("ARoom"), &Z_Registration_Info_UClass_ARoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom), 2824637753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_2930376839(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
