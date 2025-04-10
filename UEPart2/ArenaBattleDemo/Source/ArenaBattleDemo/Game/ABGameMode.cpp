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
	//PlayerControllerClass = AABPlayerController::StaticClass(); // 아직 객체가 생성되지 않았으므로 GetClass() 대신 StaticClass() 사용
}
