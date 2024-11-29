// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plot.h"
#include "Room.h"
#include "GameFramework/Actor.h"
#include "MapManager.generated.h"

UENUM(BlueprintType)
enum class ERooms : uint8
{
	ENTRANCE_ROOM,
	BAR_ROOM,
	RELAXATION_ROOM,
	TRAINING_ROOM,
	VIP_ROOM,
	KNOWLEDGE_ROOM,
	TOTAL_ROOM
};

UCLASS()
class PIPETALK_API AMapManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMapManager();

	UFUNCTION(BlueprintCallable, Category = "Map Manager")
	void BuildRoom(int row, int column, ERooms roomCode);

	UFUNCTION(BlueprintCallable, Category = "Map Manager")
	void CreateHostess();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _EntranceClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _BarClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _RelaxationClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _TrainingClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _VIPClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _KnowledgeClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _PlotClass;

	UPROPERTY(EditAnywhere, Category = "Blueprints Map Manager")
	UClass* _AIClass;

	//Row * 7 + Column
	UPROPERTY(EditAnywhere, Category = "Map")
	TArray<APlot*> _Plots;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
