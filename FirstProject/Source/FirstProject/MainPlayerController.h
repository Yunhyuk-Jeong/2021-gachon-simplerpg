#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

UCLASS()
class FIRSTPROJECT_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AMainPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget *HUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WEnemyHealthBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget *EnemyHealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WPauseMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget *PauseMenu;

	bool bEnemyHealthBarVisible;

	void DisplayEnemyHealthBar();
	void RemoveEnemyHealthBar();

	UFUNCTION(BlueprintNativeEvent)
	void DisplayPauseMenu();

	UFUNCTION(BlueprintNativeEvent)
	void RemovePauseMenu();

	UFUNCTION(BlueprintCallable)
	void TogglePauseMenu();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	bool bPauseMenuOpen;

	FVector EnemyLocation;

	void GameModeOnly();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
