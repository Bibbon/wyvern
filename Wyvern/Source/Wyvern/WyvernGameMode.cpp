// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WyvernGameMode.h"
#include "WyvernPlayerController.h"
#include "WyvernCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWyvernGameMode::AWyvernGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWyvernPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}