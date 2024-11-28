// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BarRoom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIPETALK_BarRoom_generated_h
#error "BarRoom.generated.h already included, missing '#pragma once' in BarRoom.h"
#endif
#define PIPETALK_BarRoom_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarRoom(); \
	friend struct Z_Construct_UClass_ABarRoom_Statics; \
public: \
	DECLARE_CLASS(ABarRoom, ARoom, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(ABarRoom)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarRoom(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABarRoom(ABarRoom&&); \
	ABarRoom(const ABarRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarRoom) \
	NO_API virtual ~ABarRoom();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_12_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class ABarRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_BarRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
