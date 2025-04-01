// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"

UMyGameInstance::UMyGameInstance()
{
	// 기본 값 설정.
	// CDO (Class Default Object).
	// 템플릿 클래스 객체.
	SchoolName = TEXT("기본 스쿨");
}

void UMyGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("===================="));

	// 객체 생성.
	TArray<UPerson*> Persons =
	{
		NewObject<UStudent>(),
		NewObject<UTeacher>(),
		NewObject<UStaff>()
	};

	// 이름 출력.
	for (const auto Person : Persons)
	{
		// 인터페이스 구현 여부 확인.
		ILessonInterface* LessonInterface
			= Cast<ILessonInterface>(Person);

		if (LessonInterface)
		{
			UE_LOG(LogTemp, Log, TEXT("%s님은 수업에 참여 가능합니다."),
				*Person->GetName());
			LessonInterface->DoLesson();
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("%s님은 수업에 참여 불가능합니다."),
				*Person->GetName());
		}

		UE_LOG(LogTemp, Log, TEXT("구성원 이름: %s"), *Person->GetName());
	}

	UE_LOG(LogTemp, Log, TEXT("===================="));
}
