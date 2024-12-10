// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	// Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void PlayFireEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual FTransform GetFireEffectSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool HasFinishedFiring() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool IsFiring() const;

	// Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bIsAutomatic;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
