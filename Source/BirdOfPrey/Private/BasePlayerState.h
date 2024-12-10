// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore(float Amount);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife();

    UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
    bool HasRemainingLives() const;

    // Variables
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "BirdOfPrey")
    float PlayerScore;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "BirdOfPrey")
    int32 RemainingLives;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "BirdOfPrey")
    float TimeOfLastDeath;
};
