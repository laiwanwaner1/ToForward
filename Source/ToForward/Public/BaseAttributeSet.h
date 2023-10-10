

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemComponent.h"
#include "Engine/DataTable.h"
#include "GameplayEffect.h"
#include "BaseGameInstanceSubsystem.h"
#include "GameplayEffectExtension.h"
#include "BaseAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
   GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
   GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
   GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
   GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class TOFORWARD_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	


public:
	UBaseAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Level,AbilityPoint
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Level)
		FGameplayAttributeData Level;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Level);
	UFUNCTION()
		virtual void OnRep_Level(const FGameplayAttributeData& OldLevel);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_AbilityPoint)
		FGameplayAttributeData AbilityPoint;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, AbilityPoint);
	UFUNCTION()
		virtual void OnRep_AbilityPoint(const FGameplayAttributeData& OldAbilityPoint);

		// Health , MaxHealth 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Health);
		UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth);
		UFUNCTION()
		virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

		// Mana , MaxMana 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Mana)
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mana);
		UFUNCTION()
		virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_MaxMana)
		FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana);
		UFUNCTION()
		virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

		//AttackSpeed
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_AttackSpeed)
		FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, AttackSpeed);
		UFUNCTION()
		virtual void OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed);

		//AttackDamage
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_AttackDamage)
		FGameplayAttributeData AttackDamage;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, AttackDamage);
		UFUNCTION()
		virtual void OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage);

		//AbilityPower
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_AbilityPower)
		FGameplayAttributeData AbilityPower;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, AbilityPower);
		UFUNCTION()
		virtual void OnRep_AbilityPower(const FGameplayAttributeData& OldAbilityPower);

		//Armor
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Armor)
		FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Armor);
		UFUNCTION()
		virtual void OnRep_Armor(const FGameplayAttributeData& OldArmor);

		//MagicResist
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_MagicResist)
		FGameplayAttributeData MagicResist;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MagicResist);
		UFUNCTION()
		virtual void OnRep_MagicResist(const FGameplayAttributeData& OldMagicResist);

		//BaseAttackRange
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_BaseAttackRange)
		FGameplayAttributeData BaseAttackRange;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BaseAttackRange);
		UFUNCTION()
		virtual void OnRep_BaseAttackRange(const FGameplayAttributeData& OldBaseAttackRange);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
		const UDataTableSettings* Settings = GetDefault<UDataTableSettings>();
	UDataTable* DT_AttributeBase = Settings->DT_AttributeBase.Get();

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;


};