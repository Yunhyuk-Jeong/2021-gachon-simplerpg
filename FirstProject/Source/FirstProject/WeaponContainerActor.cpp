#include "WeaponContainerActor.h"

AWeaponContainerActor::AWeaponContainerActor()
{

	PrimaryActorTick.bCanEverTick = true;
}

void AWeaponContainerActor::BeginPlay()
{
	Super::BeginPlay();
}

void AWeaponContainerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
