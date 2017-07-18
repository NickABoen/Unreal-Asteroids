// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "ShipPlayer2D.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDSCLONE_API AShipPlayer2D : public APaperCharacter
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Player Ship")
	void StartThrust();

	UFUNCTION(BlueprintImplementableEvent, Category = "Player Ship")
	void EndThrust();

	UFUNCTION(BlueprintImplementableEvent, Category = "Player Ship")
	void TurnLeft(float AxisValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "Player Ship")
	void TurnRight(float AxisValue);
};
