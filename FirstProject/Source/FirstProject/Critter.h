#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Critter.generated.h"

UCLASS()
class FIRSTPROJECT_API ACritter : public APawn
{
	GENERATED_BODY()

public:
	ACritter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mesh")
	class USkeletalMeshComponent *MeshComponent;

	UPROPERTY(EditAnywhere)
	class UCameraComponent *Camera;

	UPROPERTY(EditAnywhere, Category = "Pawn Movement")
	float MaxSpeed;

	UPROPERTY(EditAnywhere, Category = "Pawn Movement")
	TSubclassOf<class AWeapon> Weapon;

	UPROPERTY(EditAnywhere, Category = "Pawn Movement")
	TArray<UClass *> WeaponArray;

private:
	void MoveForward(float Value);
	void MoveRight(float Value);

	FVector CurrentVelocity;
};
