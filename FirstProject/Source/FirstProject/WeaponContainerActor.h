#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponContainerActor.generated.h"

UCLASS()
class FIRSTPROJECT_API AWeaponContainerActor : public AActor
{
	GENERATED_BODY()

public:
	AWeaponContainerActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	TMap<FString, TSubclassOf<class AWeapon>> WeaponMap;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
