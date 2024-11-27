// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plot.generated.h"

class PIPETALK_API AMapManager;

UCLASS()
class PIPETALK_API APlot : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APlot();

	void SetMapManager(AMapManager* mapManager);

	UFUNCTION(BlueprintPure, Category = "Plot Functions")
	AMapManager* GetMapManager();

	void SetRowIndex(int row);

	UFUNCTION(BlueprintPure, Category = "Plot Functions")
	int GetRowIndex();

	void SetColumnIndex(int column);

	UFUNCTION(BlueprintPure, Category = "Plot Functions")
	int GetColumnIndex();

	UFUNCTION(BlueprintPure, Category = "Plot Functions")
	bool GetIsPlotBuyable();

	void SetIsPlotBuyable(bool isBuyable);

	void DestroyPlot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	AMapManager* _MapManager;

	int _RowIndex;

	int _ColumnIndex;

	bool _IsPlotBuyable;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
