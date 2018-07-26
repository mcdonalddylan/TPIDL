// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Taffy_PilotGameMode.h"
#include "Taffy_PilotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATaffy_PilotGameMode::ATaffy_PilotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
