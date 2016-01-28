// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MyProject3.h"
#include "MyProject3GameMode.h"
#include "MyProject3Character.h"

AMyProject3GameMode::AMyProject3GameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AMyProject3Character::StaticClass();	
}
