// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:

    ABasePlayerController();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector2D CalcScreenDimensions();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDeath(AController* Killer);

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring;
};
