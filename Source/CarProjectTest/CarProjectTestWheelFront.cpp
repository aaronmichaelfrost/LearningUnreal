// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarProjectTestWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UCarProjectTestWheelFront::UCarProjectTestWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}