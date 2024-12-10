// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseGameInstance.h"
#include "BaseGameAgent.generated.h"


UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ChangeWeaponType();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetWeaponSpawnTransform() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnDefaultWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void TakeDamage(float DamageAmount);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool IsAlive() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Died();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo(const FSAgentInfo& Info);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(FVector AimTarget);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForOutOfBounds();

    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float MoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<AActor> Weapon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<AActor> DefaultWeaponType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FSAgentInfo AgentInfo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bCheckForOutOfBound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float OutOfBoundsCheckTolerance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FName WeaponSocketName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TEnumAsByte<EAttachLocation::Type> WeaponAttachRule;
	
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector TargetLocation;

};
