// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

UCLASS()
class PIPETALK_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoom();

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	FVector GetTeleportLocation();

	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void SetTeleportLocation(FVector location);

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	TArray<FVector> GetJobTeleportLocations();

	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void SetTeleportJobLocation(FVector location);

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	bool GetIsOccupied();
	
	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void SetIsOccupied(bool isOccupied);

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	int GetCurrentHostessCapacity();

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	int GetCurrentClientCapacity();

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	bool GetIsFullHostess();

	UFUNCTION(BlueprintPure, Category = "Room Functions")
	bool GetIsFullClients();

	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void AddWorkingHostess();

	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void RemoveWorkingHostess();
	
	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void AddClient();

	UFUNCTION(BlueprintCallable, Category = "Room Functions")
	void RemoveClient();
	
	UPROPERTY(EditAnywhere, Category = "Room Variables")
	int _MaximumHostessCapacity;

	UPROPERTY(EditAnywhere, Category = "Room Variables")
	int _MaximumClientsCapacity;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Room Variables")
	FVector _TeleportLocationBasic;

	UPROPERTY(EditAnywhere, Category = "Room Variables")
	TArray<FVector> _TeleportLocationJob;

	int _CurrentHostessCapacity;

	int _CurrentClientsCapacity;
	
	bool _IsOccupied;

	bool _IsFullHostess;

	bool _IsFullClients;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
