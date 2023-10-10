

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseDeveloperSettings.h"
#include "BaseGameInstanceSubsystem.generated.h"


/**
 * 
 */
UCLASS()
class TOFORWARD_API UBaseGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	void Initialize(FSubsystemCollectionBase& Collection) override;
	
};
