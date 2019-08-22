// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestTestPlayerController.h"

ATestTestPlayerController::ATestTestPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
