// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	    // Initialize the projectile
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile(FVector Direction, float Speed);

    // Deal damage to an actor
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	static void DealDamageTo(AActor* Damaging, float Damage);

    // Called when the projectile hits something
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

    // Get the instigator's collision channel
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    ECollisionChannel GetInstigatorCollisionChannel() const;

    // Check if a ground unit is a target
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForGroundUnitTarget();

    // Should the projectile check for a ground target
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget() const;

    // Adjust to the target
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    // Check if this is an enemy projectile
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsEnemyProjectile() const;

    // Adjust to the desired Z coordinate
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

    // Variables
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    float GroundUnitCheckAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    AActor* GroundTarget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    float DesiredZ;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    USoundBase* ImpactSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
