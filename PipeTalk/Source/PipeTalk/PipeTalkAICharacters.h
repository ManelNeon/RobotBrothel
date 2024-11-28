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
	int GetCharismaStat();

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	int GetIntelligenceStat();
	
	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetCucumberStat();

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetIsBeingPickedUp();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetIsBeingPickedUp(bool isPickedUp);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetIsDoingATask();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetIsDoingATask(bool isDoingTask);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	int GetCurrentSocialBattery();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void AddSocialBattery(int socialBattery);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	int GetMaxSocialBattery();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetMaxSocialBattery(int socialBattery);

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetID(int id);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	int GetID();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void MoveAIAround();

	UFUNCTION(BlueprintCallable, Category = "AI Logic")
	void SetIsMoving(bool isMoving);

	UFUNCTION(BlueprintPure, Category = "AI Logic")
	bool GetIsMoving();

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

	UPROPERTY(EditAnywhere, Category = "AI Definitions")
	bool _IsClient;

	int _ID;

	bool _IsMoving;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
