// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestTestGameMode.h"
#include "TestTestPlayerController.h"
#include "TestTestPawn.h"

ATestTestGameMode::ATestTestGameMode()
{
	// no pawn by default
	DefaultPawnClass = ATestTestPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ATestTestPlayerController::StaticClass();
}
