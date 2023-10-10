

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

	// Config ： 将变量暴露至到上面UCLASS后指定的 ini配置文件里
	// EditAnywhere ：将变量暴露至 项目设置（Edit-ProjectSettings）窗口
	// AdvancedDisplay： 显示路径选择器
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General", AdvancedDisplay)
	TSoftObjectPtr<UDataTable> DT_AttributeBase;
	
};
