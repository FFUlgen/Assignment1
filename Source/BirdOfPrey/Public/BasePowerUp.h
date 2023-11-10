// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "PlayerShip.h"
#include "BasePowerUp.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, category = "BirdOfPrey")
	virtual void Apply(APlayerShip* PlayerShip);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;
};
