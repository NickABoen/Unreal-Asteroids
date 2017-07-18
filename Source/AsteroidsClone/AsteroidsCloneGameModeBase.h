// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "AsteroidsCloneGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDSCLONE_API AAsteroidsCloneGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Asteroids")
	void BeginPlay() override { Super::BeginPlay(); }
};
