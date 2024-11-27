// Fill out your copyright notice in the Description page of Project Settings.


#include "MapManager.h"
#include "PipeTalkGameInstance.h"

// Sets default values
AMapManager::AMapManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UBlueprint> blueprint_finder(TEXT("Blueprint'/Game/Blueprints/BP_Entrance.BP_Entrance'"));

	_EntranceClass = (UClass*)blueprint_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> fourth_finder(TEXT("Blueprint'/Game/Blueprints/BP_BarRoom.BP_BarRoom'"));

	_BarClass = (UClass*)fourth_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> fifth_finder(TEXT("Blueprint'/Game/Blueprints/BP_RelaxationRoom.BP_RelaxationRoom'"));

	_RelaxationClass = (UClass*)fifth_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> sixth_finder(TEXT("Blueprint'/Game/Blueprints/BP_TrainingRoom.BP_TrainingRoom'"));

	_TrainingClass = (UClass*)sixth_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> seventh_finder(TEXT("Blueprint'/Game/Blueprints/BP_VIPRoom.BP_VIPRoom'"));

	_VIPClass = (UClass*)seventh_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> eighth_finder(TEXT("Blueprint'/Game/Blueprints/BP_KnowledgeRoom.BP_KnowledgeRoom'"));

	_KnowledgeClass = (UClass*)eighth_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> second_finder(TEXT("Blueprint'/Game/Blueprints/BP_Plot.BP_Plot'"));

	_PlotClass = (UClass*)second_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> third_finder(TEXT("Blueprint'/Game/Blueprints/BP_PipeTalkAI.BP_PipeTalkAI'"));

	_AIClass = (UClass*)third_finder.Object->GeneratedClass;
}


void AMapManager::BuildRoom(int row, int column, ERooms roomCode)
{
	if (!_Plots[row * 7 + column])
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No Plot Here SUPPOSTAMENTE"));
		return;
	}
	
	switch (roomCode)
	{
	case ERooms::ENTRANCE_ROOM:

		GetWorld()->SpawnActor(_EntranceClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Entrance Room"));

		break;

	case ERooms::BAR_ROOM:

		GetWorld()->SpawnActor(_BarClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Bar Room"));

		break;

	case ERooms::RELAXATION_ROOM:

		GetWorld()->SpawnActor(_RelaxationClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Relaxation Room"));

		break;

	case ERooms::TRAINING_ROOM:

		GetWorld()->SpawnActor(_TrainingClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Training Room"));

		break;

	case ERooms::VIP_ROOM:

		GetWorld()->SpawnActor(_VIPClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("VIP Room"));
		
		break;

	case ERooms::KNOWLEDGE_ROOM:

		GetWorld()->SpawnActor(_KnowledgeClass)->SetActorLocation((_Plots[row * 7 + column]->GetActorLocation()));

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Knowledge Room"));
		
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

	auto gameInstance = Cast<UPipeTalkGameInstance>(GetGameInstance());

	auto firstNpc = GetWorld()->SpawnActor(_AIClass);

	firstNpc->SetActorLocation(FVector(-280, 3070, 100));

	auto npcToAdd = Cast<APipeTalkAICharacters>(firstNpc);
	
	gameInstance->HostessArray.Add(npcToAdd);
}

// Called every frame
void AMapManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

