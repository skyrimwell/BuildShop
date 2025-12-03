// Copyright BuildStore Team. All Rights Reserved.

#include "BuildStoreBlueprintLibrary.h"
#include "GeneralProjectSettings.h"
#include "Engine/Engine.h"

FString UBuildStoreBlueprintLibrary::GetProjectVersion()
{
    const UGeneralProjectSettings* ProjectSettings = GetDefault<UGeneralProjectSettings>();
    if (ProjectSettings)
    {
        return ProjectSettings->ProjectVersion;
    }

    return TEXT("1.0.0.0");
}
