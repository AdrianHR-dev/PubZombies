// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharCPP.h"

// Sets default values
AFirstPersonCharCPP::AFirstPersonCharCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstPersonCharCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPersonCharCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFirstPersonCharCPP::m_TakeDamage()
{

}

void AFirstPersonCharCPP::m_Heal()
{

}

void AFirstPersonCharCPP::m_BuyWallWeapon()
{
	
}

