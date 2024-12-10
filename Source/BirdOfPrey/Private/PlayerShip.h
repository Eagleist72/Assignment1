// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()
public:
	
	// Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConstructionScript();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	static void CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldSpawnAIController() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently() const;
	
	// Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	APlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float InvulnerabilityTime;
};
