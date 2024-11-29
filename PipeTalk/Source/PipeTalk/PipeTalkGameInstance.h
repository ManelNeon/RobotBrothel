// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PipeTalkAICharacters.h"
#include "Engine/GameInstance.h"
#include "PipeTalkGameInstance.generated.h"


UCLASS()
class PIPETALK_API UPipeTalkGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPipeTalkGameInstance();

	int XP;

	int Level;

	int Money;

	int AmountOfHostess;

	TArray<APipeTalkAICharacters*> HostessArray;

	UFUNCTION(BlueprintCallable, Category = "Instance Functions")
	void DestroyItAll();
	
	UFUNCTION(BlueprintPure, Category = "Instance Functions")
	int GetNumberOfHostess();

	UFUNCTION(BlueprintPure, Category = "Instance Functions")
	APipeTalkAICharacters* GetHostess(int id);

	UFUNCTION(BlueprintCallable, Category = "Instance Functions")
	bool RemoveHostess(int id);

	UFUNCTION(BlueprintCallable, Category = "Instance Functions")
	void GiveXP(int amountOfXP);

	UFUNCTION(BlueprintCallable, Category = "Instance Functions")
	void GiveMoney(int amountOfMoney);

	UFUNCTION(BlueprintPure, Category = "Instance Functions")
	int GetMoney();

	UFUNCTION(BlueprintPure, Category = "Instance Functions")
	int GetLevel();
	
};
