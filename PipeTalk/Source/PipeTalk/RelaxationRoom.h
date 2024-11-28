// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Room.h"
#include "RelaxationRoom.generated.h"

/**
 * 
 */
UCLASS()
class PIPETALK_API ARelaxationRoom : public ARoom
{
	GENERATED_BODY()
	
public:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Relaxation Room Stats")
	int SocialBatteryToGive;
};
