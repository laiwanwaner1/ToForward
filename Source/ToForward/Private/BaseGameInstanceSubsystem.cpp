


#include "BaseGameInstanceSubsystem.h"

void UBaseGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    const UDataTableSettings* DTSettings = GetDefault<UDataTableSettings>();
    UDataTable* DataTable = DTSettings->DT_AttributeBase.LoadSynchronous(); //╪сть
}