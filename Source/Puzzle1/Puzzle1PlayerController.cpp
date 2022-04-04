// Copyright Epic Games, Inc. All Rights Reserved.

#include "Puzzle1PlayerController.h"

APuzzle1PlayerController::APuzzle1PlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
