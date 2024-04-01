// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarProjectTestWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UCarProjectTestWheelRear::UCarProjectTestWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}