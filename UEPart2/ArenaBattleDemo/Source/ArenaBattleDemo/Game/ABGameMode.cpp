// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	// static ConstructorHelpers::FClassFinder<APawn> DefaultCharacterRef(
	// 	TEXT("/Script/ArenaBattleDemo.ABCharacterPlayer"_C));
	static ConstructorHelpers::FClassFinder<APawn> DefaultCharacterRef(
	TEXT("/Script/ArenaBattleDemo.ABCharacterPlayer"));

	if (DefaultCharacterRef.Class)
	{
		DefaultPawnClass = DefaultCharacterRef.Class;
	}

	// PlayerControllerClass.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattleDemo.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
	// 아직 객체가 생성되지 않았으므로 GetClass() 대신 StaticClass() 사용.
	// PlayerControllerClass = AABPlayerController::StaticClass();

	// 기본 값 설정.
	ClearScore = 3;
	CurrentScore = 0;
	bIsCleared = false;
}

void AABGameMode::OnPlayerScoreChanged(int32 NewPlayerScore)
{
	// 현재 점수를 새로운 점수로 업데이트.
	CurrentScore = NewPlayerScore;

	// 플레이어 컨트롤러 가져오기.
	// GetFirstPlayerController(): 0번 플레이어 컨트롤러 가져오기.
	AABPlayerController* ABPlayerController = Cast<AABPlayerController>(GetWorld()->GetFirstPlayerController());

	// 형 변환 확인.
	if (ABPlayerController)
	{
		ABPlayerController->GameScoreChanged(CurrentScore);
	}

	// 게임 클리어 여부 확인.
	if (CurrentScore >= ClearScore)
	{
		bIsCleared = true;

		if (ABPlayerController)
		{
			ABPlayerController->GameClear();
		}
	}
}

void AABGameMode::OnPlayerDead()
{
	// 플레이어 컨트롤러 가져오기.
	// GetFirstPlayerController(): 0번 플레이어 컨트롤러 가져오기.
	AABPlayerController* ABPlayerController = Cast<AABPlayerController>(GetWorld()->GetFirstPlayerController());

	// 형 변환 확인.
	if (ABPlayerController)
	{
		ABPlayerController->GameOver();
	}
}

bool AABGameMode::IsGameCleared()
{
	return bIsCleared;
}
