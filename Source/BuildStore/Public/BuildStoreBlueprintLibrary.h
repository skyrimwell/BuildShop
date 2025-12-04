// Copyright BuildStore Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildStoreBlueprintLibrary.generated.h"

UCLASS()
class BUILDSTORE_API UBuildStoreBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Получаем версию проекта, которую указана в Project Settings движка.
     * @return FString project version (example, "1.0.0.0").
     */
    UFUNCTION(BlueprintPure, Category = "Project Settings")
    static FString GetProjectVersion();
};
