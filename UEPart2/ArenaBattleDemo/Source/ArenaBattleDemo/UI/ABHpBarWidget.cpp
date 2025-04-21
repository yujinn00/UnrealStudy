// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ABHpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Interface/ABCharacterWidgetInterface.h"
 
UABHpBarWidget::UABHpBarWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// 일부러 유효하지 않은 값을 구분하기 위해 값 설정.
	MaxHp = -1.0f;
}
 
void UABHpBarWidget::UpdateHpBar(float NewCurrentHp)
{
	// MaxHp 값이 제대로 설정됐는지 확인.
	ensure(MaxHp > 0.0f);
 
	// 프로그레사 바 위젯 업데이트.
	if (HpProgressBar)
	{
		HpProgressBar->SetPercent(NewCurrentHp / MaxHp);
	}
}
 
void UABHpBarWidget::NativeConstruct()
{
	Super::NativeConstruct();
 
	// 이 함수가 호출되면, UI에 대한 대부분의 값이 초기화 되었다고 생각할 수 있음.

	// 위젯 참조 설정을 위해 이름으로 검색.
	HpProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PbHpBar")));
	ensure(HpProgressBar);

	// 캐릭터에 내 정보(위젯)를 전달.
	// 강한 참조를 피하기 위해 인터페이스를 통해 우회해 전달 (느슨한 결합).
	IABCharacterWidgetInterface* CharacterWidget = Cast<IABCharacterWidgetInterface>(OwningActor);
	if (CharacterWidget)
	{
		// 캐릭터에 내 정보(위젯) 전달.
		CharacterWidget->SetUpCharacterWidget(this);
	}
}
