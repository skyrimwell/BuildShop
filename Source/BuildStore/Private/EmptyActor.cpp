// Copyright Epic Games, Inc. All Rights Reserved.

#include "EmptyActor.h"

AEmptyActor::AEmptyActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AEmptyActor::BeginPlay()
{
	Super::BeginPlay();
}

void AEmptyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
