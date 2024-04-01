// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarProjectTestGameMode.h"
#include "CarProjectTestPlayerController.h"

ACarProjectTestGameMode::ACarProjectTestGameMode()
{
	PlayerControllerClass = ACarProjectTestPlayerController::StaticClass();
}
