// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AttackHitCheck.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEDEMO_API UAnimNotify_AttackHitCheck : public UAnimNotify
{
	GENERATED_BODY()

protected:
	// 애니메이션 노티파이가 발생할 때 호출되는 이벤트 함수.
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
