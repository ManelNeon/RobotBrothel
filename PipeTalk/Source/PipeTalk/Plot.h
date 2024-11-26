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

	UFUNCTION(BlueprintCallable, Category = "Plot Functions")
	AMapManager* GetMapManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AMapManager* _MapManager;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
