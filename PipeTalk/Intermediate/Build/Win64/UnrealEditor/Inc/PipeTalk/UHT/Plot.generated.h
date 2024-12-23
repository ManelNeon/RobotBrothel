// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Plot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapManager;
#ifdef PIPETALK_Plot_generated_h
#error "Plot.generated.h already included, missing '#pragma once' in Plot.h"
#endif
#define PIPETALK_Plot_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsPlotBuyable); \
	DECLARE_FUNCTION(execGetColumnIndex); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execGetMapManager);


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlot(); \
	friend struct Z_Construct_UClass_APlot_Statics; \
public: \
	DECLARE_CLASS(APlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(APlot)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlot(APlot&&); \
	APlot(const APlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlot) \
	NO_API virtual ~APlot();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_11_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class APlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_Plot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
