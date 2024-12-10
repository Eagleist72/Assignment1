// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()
public:
	
	ABaseAIController();

	// Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim() const;

protected:
	// Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bShouldUpdateAim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;
};
