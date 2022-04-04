// Copyright Epic Games, Inc. All Rights Reserved.

#include "Puzzle1GameMode.h"
#include "Puzzle1PlayerController.h"
#include "Puzzle1Pawn.h"

APuzzle1GameMode::APuzzle1GameMode()
{
	// no pawn by default
	DefaultPawnClass = APuzzle1Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = APuzzle1PlayerController::StaticClass();
}
