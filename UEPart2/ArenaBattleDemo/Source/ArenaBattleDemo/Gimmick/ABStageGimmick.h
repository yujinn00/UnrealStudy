// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABStageGimmick.generated.h"

// 상태에 따른 처리를 위한 델리게이트 선언.
DECLARE_DELEGATE(FOnStageChangedDelegate);

// 래퍼 구조체.
USTRUCT(BlueprintType)
struct FOnStageChangedDelegateWrapper
{
	GENERATED_BODY()

	FOnStageChangedDelegateWrapper() {}
	FOnStageChangedDelegateWrapper(FOnStageChangedDelegate InDelegate)
		: StageChangedDelegate(InDelegate) {}

	FOnStageChangedDelegate StageChangedDelegate;
};

// 상태를 나타내는 열거형.
UENUM(BlueprintType)
enum class EStageState : uint8
{
	Ready = 0,
	Fight,
	Reward,
	Next
};

UCLASS()
class ARENABATTLEDEMO_API AABStageGimmick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABStageGimmick();

	// 이 함수는 트랜스폼 뿐만 아니라, 다른 속성이 변경되는 경우에도 호출됨.
	virtual void OnConstruction(const FTransform& Transform) override;

// Stat Section.
public:
	// CurrentStageNum에 대한 Getter/Setter.
	FORCEINLINE int32 GetStageNum() const { return CurrentStageNum; }
	FORCEINLINE void SetStageNum(int32 InNewStageNum)
	{
		CurrentStageNum = InNewStageNum;
	}

// Stage Section.
protected:
	// 스테이지를 보여줄 때 사용할 메시 컴포넌트.
	UPROPERTY(VisibleAnywhere, Category = Stage, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UStaticMeshComponent> Stage;

	UPROPERTY(VisibleAnywhere, Category = Stage, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBoxComponent> StageTrigger;

	// 현재 상태를 나타내는 열거형 변수.
	UPROPERTY(EditAnywhere, Category = Stage, meta = (AllowPrivateAccess = "true"))
	EStageState CurrentState;

	// 상태를 설정할 때 사용할 함수.
	void SetState(EStageState InNewStage);

	// 스테이지 트리거의 오버랩 이벤트 확인을 위한 함수.
	UFUNCTION()
	void OnStageTriggerBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	// 상태에 따른 처리를 위해 열거형과 델리게이트를 맵으로 관리.
	TMap<EStageState, FOnStageChangedDelegateWrapper> StageChangedActions;

	// 상태 값에 따라 실행할 함수.
	void SetReady();
	void SetFight();
	void SetChooseReward();
	void SetChooseNext();

// Gate Section (4개의 문에 대한 섹션).
protected:
	// 4개의 게이트(문)가 필요하기 때문에 Map으로 관리.
	UPROPERTY(VisibleAnywhere, Category = Gate, meta = (AllowPrivateAccess = "true"))
	TMap<FName, TObjectPtr<class UStaticMeshComponent>> Gates;

	// 각 문의 트리거를 배열로 관리.
	UPROPERTY(VisibleAnywhere, Category = Gate, meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<class UBoxComponent>> GateTriggers;

	// 게이트 트리거의 오버랩 이벤트 확인을 위한 함수.
	UFUNCTION()
	void OnGateTriggerBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	// 문 열고 닫는 함수.
	void OpenAllGates();
	void CloseAllGates();

// Fight Section.
protected:
	// 대전할 NPC 지정을 위한 클래스 변수 선언.
	// TSubclassOf는 지정한 클래스를 제한적으로 보여주는 필터링을 제공함.
	UPROPERTY(EditAnywhere, Category = Fight, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AABCharacterNonPlayer> OpponentClass;

	// NPC를 생성하기까지 대기할 시간.
	UPROPERTY(EditAnywhere, Category = Fight, meta = (AllowPrivateAccess = "true"))
	float OpponentSpawnTime;

	// NPC를 무찔렀을 때 실행할 함수.
	UFUNCTION()
	void OpponentDestroyed(AActor* DestroyedActor);

	// NPC 생성 시간을 계산할 타이머 핸들.
	FTimerHandle OpponentTimerHandle;

	// 타이머가 종료되어 NPC가 생성될 때 호출할 함수.
	void OpponentSpawn();

// Reward Section.
protected:
	// 보상 상자 생성을 위한 클래스.
	UPROPERTY(VisibleAnywhere, Category = Reward, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AABItemBox> RewardItemClass;

	// 보상 상자는 스테이지와 무고나하기 때문에 강참조(TObjectPtr)보다는 약참조(TWeakObjectPtr)를 사용하는 것이 좋음.
	UPROPERTY(VisibleAnywhere, Category = Reward, meta = (AllowPrivateAccess = "true"))
	TArray<TWeakObjectPtr<class AABItemBox>> RewardBoxes;

	// 보상 상자 생성 위치를 맵으로 관리.
	TMap<FName, FVector> RewardBoxLocations;

	// 생성된 상자와의 오버랩 이벤트를 처리할 때 사용할 함수.
	UFUNCTION()
	void OnRewardTriggerBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	// 보상 상자 생성 함수.
	void SpawnRewardBoxes();

// Stage Stat.
protected:
	// 스테이지의 넘버를 스탯으로 관리.
	UPROPERTY(VisibleInstanceOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 CurrentStageNum;
};
