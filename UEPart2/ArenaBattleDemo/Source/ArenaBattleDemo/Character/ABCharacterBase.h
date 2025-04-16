// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABCharacterBase.generated.h"

UENUM()
enum class ECharacterControlType : uint8
{
	Shoulder,
	Quarter
};

UCLASS()
class ARENABATTLEDEMO_API AABCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacterBase();

	virtual void SetCharacterControlData(const class UABCharacterControlData* InCharacterControlData);

// Combo Section
protected:
	// 콤보 액션 처리 함수.
	// 공격을 처음 재생할 때와 콤보 액션 처리를 분기.
	void ProcessComboCommand();

	// 콤보 액션이 시작될 때 호출할 함수.
	void ComboActionBegin();

	// 콤보 액션이 종료될 때 호출할 함수.
	// 애님 몽타주에서 제공하는 델리게이트와 파라미터 맞춤.
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded);

	// 콤보 타이머 설정 함수.
	void SetComboCheckTimer();

	// 타이머 시간 사이에 입력이 들어왔는지 여부를 확인하는 함수.
	void ComboCheck();

protected:
	UPROPERTY(EditAnywhere, Category = CharacterControl, meta = (AllowPrivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlData*> CharacterControlManager;

	// 공격 몽타주 에셋.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAnimMontage> ComboActionMontage;

	// 콤보 처리 시 사용할 데이터 에셋
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UABComboActionData> ComboActionData;

	// 현재 재생 중인 콤보 단계
	// 0: 콤보를 시작하지 않음.
	// 1/2/3/4: 콤보를 시작함.
	int32 CurrentCombo = 0;

	// 콤보 가능 여부를 판단하기 위한 타이머 핸들.
	FTimerHandle ComboTimerHandle;

	// 콤보 타이머 이전에 입력이 들어왔는지를 확인하는 불리언 변수.
	bool HasNextComboCommand = false;
};
