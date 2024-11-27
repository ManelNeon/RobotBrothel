// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERooms : uint8;
#ifdef PIPETALK_MapManager_generated_h
#error "MapManager.generated.h already included, missing '#pragma once' in MapManager.h"
#endif
#define PIPETALK_MapManager_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildRoom);


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapManager(); \
	friend struct Z_Construct_UClass_AMapManager_Statics; \
public: \
	DECLARE_CLASS(AMapManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(AMapManager)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapManager(AMapManager&&); \
	AMapManager(const AMapManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapManager) \
	NO_API virtual ~AMapManager();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_23_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class AMapManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_MapManager_h


#define FOREACH_ENUM_EROOMS(op) \
	op(ERooms::ENTRANCE_ROOM) \
	op(ERooms::BAR_ROOM) \
	op(ERooms::RELAXATION_ROOM) \
	op(ERooms::TRAINING_ROOM) \
	op(ERooms::VIP_ROOM) \
	op(ERooms::KNOWLEDGE_ROOM) \
	op(ERooms::TOTAL_ROOM) 

enum class ERooms : uint8;
template<> struct TIsUEnumClass<ERooms> { enum { Value = true }; };
template<> PIPETALK_API UEnum* StaticEnum<ERooms>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
