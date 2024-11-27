// Fill out your copyright notice in the Description page of Project Settings.


#include "Plot.h"
#include "MapManager.h"

// Sets default values
APlot::APlot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_MapManager = nullptr;

	_IsPlotBuyable = false;

	_ColumnIndex = 0;

	_RowIndex = 0;
}

void APlot::SetColumnIndex(int column)
{
	_ColumnIndex = column;
}

int APlot::GetColumnIndex()
{
	return _ColumnIndex;
}

void APlot::SetRowIndex(int row)
{
	_RowIndex = row;
}

int APlot::GetRowIndex()
{
	return _RowIndex;
}

void APlot::SetMapManager(AMapManager* mapManager)
{
	_MapManager = mapManager;
}

AMapManager* APlot::GetMapManager()
{
	return _MapManager;
}

bool APlot::GetIsPlotBuyable()
{
	return _IsPlotBuyable;
}

void APlot::SetIsPlotBuyable(bool isBuyable)
{
	_IsPlotBuyable = isBuyable;
}

// Called when the game starts or when spawned
void APlot::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlot::DestroyPlot()
{
	PrimaryActorTick.bCanEverTick = false;
	Destroy();
}


