// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PipeTalkAICharacters.generated.h"

UCLASS()
class PIPETALK_API APipeTalkAICharacters : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APipeTalkAICharacters();

	APipeTalkAICharacters(bool isClient);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetIsBeingPickedUp();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetIsBeingPickedUp(bool isPickedUp);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetIsDoingATask();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetIsDoingATask(bool isDoingTask);


	
	void GetPicked();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool _IsBeingPickedUp;

	bool _IsDoingATask;

	int _CharismaStat;

	int _IntelligenceStat;

	bool _HasCucumber;

	int _CurrentSocialBattery;

	int _MaxSocialBattery;

	bool _IsClient;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
