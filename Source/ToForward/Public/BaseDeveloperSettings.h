

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/DataTable.h"
#include "BaseDeveloperSettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "DataTable Settings"))
class TOFORWARD_API UDataTableSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	// Config �� ��������¶��������UCLASS��ָ���� ini�����ļ���
	// EditAnywhere ����������¶�� ��Ŀ���ã�Edit-ProjectSettings������
	// AdvancedDisplay�� ��ʾ·��ѡ����
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General", AdvancedDisplay)
	TSoftObjectPtr<UDataTable> DT_AttributeBase;
	
};
