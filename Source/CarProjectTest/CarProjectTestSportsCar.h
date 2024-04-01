// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CarProjectTestPawn.h"
#include "CarProjectTestSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class CARPROJECTTEST_API ACarProjectTestSportsCar : public ACarProjectTestPawn
{
	GENERATED_BODY()
	
public:

	ACarProjectTestSportsCar();
};
