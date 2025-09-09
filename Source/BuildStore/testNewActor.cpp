// Fill out your copyright notice in the Description page of Project Settings.


#include "testNewActor.h"

// Sets default values
AtestNewActor::AtestNewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AtestNewActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AtestNewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("4523709808970520493t78902304957809230495"));

}

