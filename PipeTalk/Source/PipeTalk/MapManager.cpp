// Fill out your copyright notice in the Description page of Project Settings.


#include "MapManager.h"
#include "PipeTalkGameInstance.h"

// Sets default values
AMapManager::AMapManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void AMapManager::BuildRoom(int row, int column, ERooms roomCode)
{
	if (!_Plots[row * 7 + column])
	{
		return;
	}

	auto gameInstance = Cast<UPipeTalkGameInstance>(GetGameInstance());
	
	switch (roomCode)
	{
	case ERooms::ENTRANCE_ROOM:

		GetWorld()->SpawnActor(_EntranceClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));
		
		break;

	case ERooms::BAR_ROOM:

		GetWorld()->SpawnActor(_BarClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		gameInstance->GiveMoney(-200);

		break;

	case ERooms::RELAXATION_ROOM:

		GetWorld()->SpawnActor(_RelaxationClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		gameInstance->GiveMoney(-250);
		
		break;

	case ERooms::TRAINING_ROOM:

		GetWorld()->SpawnActor(_TrainingClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		gameInstance->GiveMoney(-300);
		
		break;

	case ERooms::VIP_ROOM:

		GetWorld()->SpawnActor(_VIPClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		gameInstance->GiveMoney(-350);

		break;

	case ERooms::KNOWLEDGE_ROOM:

		GetWorld()->SpawnActor(_KnowledgeClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		gameInstance->GiveMoney(-400);

		break;

	case ERooms::TOTAL_ROOM:
		break;

	default:
		break;
	}	

	if(row + 1 < 7)
		if (_Plots[(row + 1) * 7 + column]) _Plots[(row + 1) * 7 + column]->SetIsPlotBuyable(true);

	if(row - 1 >= 0)
		if (_Plots[(row - 1) * 7 + column]) _Plots[(row - 1) * 7 + column]->SetIsPlotBuyable(true);

	if(column + 1 < 7)
		if (_Plots[row * 7 + (column + 1)]) _Plots[row * 7 + (column + 1)]->SetIsPlotBuyable(true);

	if(column - 1 >= 0)
		if (_Plots[row * 7 + (column - 1)]) _Plots[row * 7 + (column - 1)]->SetIsPlotBuyable(true);

	_Plots[row * 7 + column]->DestroyPlot();

	_Plots[row * 7 + column] = nullptr;
}

void AMapManager::CreateHostess()
{
	auto gameInstance = Cast<UPipeTalkGameInstance>(GetGameInstance());

	auto firstNpc = GetWorld()->SpawnActor(_AIClass);

	firstNpc->SetActorLocation(FVector(-280, 3070, 100));

	auto npcToAdd = Cast<APipeTalkAICharacters>(firstNpc);

	gameInstance->HostessArray.Add(npcToAdd);

	npcToAdd->SetID(gameInstance->HostessArray.Num() - 1);
}

// Called when the game starts or when spawned
void AMapManager::BeginPlay()
{
	Super::BeginPlay();

	int counterRow = 0;
	int counterColumn = 0;

	for (size_t i{ 0 }; i < 49; ++i)
	{
		_Plots.Add(Cast<APlot>(GetWorld()->SpawnActor(_PlotClass)));

		if (i % 7 == 0 && i != 0)
		{
			counterRow = 0;
			counterColumn ++;
		}

		_Plots[i]->SetActorLocation(FVector(counterColumn * 1000, (1000 * counterRow), 0));

		_Plots[i]->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		_Plots[i]->SetMapManager(this);

		_Plots[i]->SetRowIndex(counterColumn);

		_Plots[i]->SetColumnIndex(counterRow);

		counterRow++;
	}

	BuildRoom(0, 3, ERooms::ENTRANCE_ROOM);

	BuildRoom(1, 3, ERooms::BAR_ROOM);

	CreateHostess();
}

// Called every frame
void AMapManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

