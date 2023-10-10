

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseAbilitySystemComponent.h"
#include "BaseAttributeSet.h"
#include "BaseGameplayAbility.h"
#include "AbilitySystemInterface.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class TOFORWARD_API ABaseCharacter : public ACharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseCharacter")
		class UBaseAbilitySystemComponent* AbilitySystem;
		
	virtual UBaseAbilitySystemComponent* GetAbilitySystemComponent() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseAttributeSet")
		class UBaseAttributeSet* AttributeSet;

	UFUNCTION(BlueprintCallable, Category = "Ability System")
		void GiveAbility(TSubclassOf<UBaseGameplayAbility> Ability);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
