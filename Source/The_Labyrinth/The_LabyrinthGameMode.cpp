// Copyright Epic Games, Inc. All Rights Reserved.

#include "The_LabyrinthGameMode.h"
#include "The_LabyrinthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThe_LabyrinthGameMode::AThe_LabyrinthGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
