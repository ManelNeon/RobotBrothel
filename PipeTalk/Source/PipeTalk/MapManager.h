// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plot.h"
#include "GameFramework/Actor.h"
#include "MapManager.generated.h"

UCLASS()
class PIPETALK_API AMapManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMapManager();

	UFUNCTION(BlueprintCallable, Category = "Map Manager")
	void BuildFirstRoom(APlot* plot);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UClass* _RoomClass;

	UClass* _PlotClass;

	UPROPERTY(EditAnywhere, Category = "Map")
	TArray<APlot*> _Plots;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
