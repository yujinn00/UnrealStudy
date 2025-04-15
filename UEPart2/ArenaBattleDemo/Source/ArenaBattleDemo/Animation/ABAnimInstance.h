// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEDEMO_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UABAnimInstance();

	// 애니메이션이 초기화될 때 호출.
	virtual void NativeInitializeAnimation();

	// 애니메이션 업데이트 함수.
	virtual void NativeUpdateAnimation(float DeltaSeconds);

// 프로퍼티.
public:
	// 애님 인스턴스를 소유하는 캐릭터 참조 변수.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class ACharacter> Owner;

	// 캐릭터 무브먼트 컴포넌트 참조 변수.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class UCharacterMovementComponent> Movement;

	// 캐릭터의 현재 이동 속도를 저정할 변수.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	FVector Velocity;

	// 캐릭터의 땅에서의 이동 속도를 저장할 변수.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float GroundSpeed;

	// 캐릭터가 Idle인지 여부를 확인할 변수.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsIdle : 1;

	// 캐릭터가 이동하는지 여부를 판단하는 데 사용할 문턱 값.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float MovingThreshold;

	// 캐릭터가 공중에서 떨어지는지 여부를 확인할 변수.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsFalling : 1;

	// 캐릭터가 점프하는지 여부를 확인할 변수.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	uint8 bIsJumping : 1;

	// 캐릭터가 점프하는지 여부를 판단하는 데 사용할 문턱 값.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	float JumpingThreshold;
};
