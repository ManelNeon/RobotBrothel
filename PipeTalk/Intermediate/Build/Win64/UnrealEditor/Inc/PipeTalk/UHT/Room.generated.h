// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Room.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIPETALK_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define PIPETALK_Room_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveClient); \
	DECLARE_FUNCTION(execAddClient); \
	DECLARE_FUNCTION(execRemoveWorkingHostess); \
	DECLARE_FUNCTION(execAddWorkingHostess); \
	DECLARE_FUNCTION(execGetIsFullClients); \
	DECLARE_FUNCTION(execGetIsFullHostess); \
	DECLARE_FUNCTION(execGetCurrentClientCapacity); \
	DECLARE_FUNCTION(execGetCurrentHostessCapacity); \
	DECLARE_FUNCTION(execSetIsOccupied); \
	DECLARE_FUNCTION(execGetIsOccupied); \
	DECLARE_FUNCTION(execSetTeleportJobLocation); \
	DECLARE_FUNCTION(execGetJobTeleportLocations); \
	DECLARE_FUNCTION(execSetTeleportLocation); \
	DECLARE_FUNCTION(execGetTeleportLocation);


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoom(); \
	friend struct Z_Construct_UClass_ARoom_Statics; \
public: \
	DECLARE_CLASS(ARoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(ARoom)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoom(ARoom&&); \
	ARoom(const ARoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoom) \
	NO_API virtual ~ARoom();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_9_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class ARoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
