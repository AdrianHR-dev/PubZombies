// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharCPP.generated.h"

UCLASS()
class PROJECTZOMB_API AFirstPersonCharCPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharCPP();


	//UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ECollisionChannel> m_collTypes;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_maxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_startHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int m_score;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool m_takingDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool m_ads;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector m_interactRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) UTimelineComponent* m_healTimeline;

	UFUNCTION(BlueprintCallable) void m_TakeDamage();
	UFUNCTION(BlueprintCallable) void m_Heal();
	UFUNCTION(BlueprintCallable) void m_BuyWallWeapon();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
