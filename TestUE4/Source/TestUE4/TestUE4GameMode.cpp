// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestUE4GameMode.h"
#include "TestUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ATestUE4GameMode::ATestUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
