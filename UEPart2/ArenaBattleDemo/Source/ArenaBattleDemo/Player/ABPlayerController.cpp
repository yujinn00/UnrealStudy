// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"
#include "UI/ABHUDWidget.h"

AABPlayerController::AABPlayerController()
{
	// 위젯 블루프린트 애셋에서 클래스 정보 로드.
	static ConstructorHelpers::FClassFinder<UABHUDWidget> ABHUDWidgetRef(TEXT("/Game/ArenaBattle/UI/WBP_ABHUD.WBP_ABHUD_C"));
	if (ABHUDWidgetRef.Class)
	{
		ABHUDWidgetClass = ABHUDWidgetRef.Class;
	}
}

void AABPlayerController::GameScoreChanged(int32 NewScore)
{
	K2_OnScoreChanged(NewScore);
}

void AABPlayerController::GameClear()
{
	K2_OnGameClear();
}

void AABPlayerController::GameOver()
{
	K2_OnGameOver();
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameInput;
	SetInputMode(GameInput);

	// // 위젯 생성.
	// ABHUDWidget = CreateWidget<UABHUDWidget>(this, ABHUDWidgetClass);
	//
	// // 위젯이 문제 없이 생성 됐으면,
	// if (ABHUDWidget)
	// {
	// 	// 위젯을 화면에 추가해 UI가 보일 수 있도록 설정.
	// 	ABHUDWidget->AddToViewport();
	// }
}
