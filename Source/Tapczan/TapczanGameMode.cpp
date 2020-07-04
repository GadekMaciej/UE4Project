// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TapczanGameMode.h"
#include "TapczanCharacter.h"
#include "TapczanController.h"
#include "TapczanHud.h"
#include "UObject/ConstructorHelpers.h"

ATapczanGameMode::ATapczanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// -M set default HUD to SMainMenu
	HUDClass = ATapczanHud::StaticClass();
	PlayerControllerClass = ATapczanController::StaticClass();
}
