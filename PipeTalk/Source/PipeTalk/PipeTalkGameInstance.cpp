// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkGameInstance.h"

UPipeTalkGameInstance::UPipeTalkGameInstance()
{
	XP = 0;

	Level = 1;

	Money = 1000;

	AmountOfHostess = 0;
}


void UPipeTalkGameInstance::GiveXP(int amountOfXP)
{
	int xpToLevelUp = Level * 100 + 325;

	XP += amountOfXP;

	if (XP < xpToLevelUp) return;

	XP -= xpToLevelUp;

	Level++;
}

void UPipeTalkGameInstance::GiveMoney(int amountOfMoney)
{
	Money += amountOfMoney;

	if (Money > 99999999) Money = 99999999;
}