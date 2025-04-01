// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h" // 이건 맨 앞이어야 함 !!
#include "Student.h"
#include "Teacher.h"

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

	// 클래스 정보 가져오기.
	UClass* RuntimeClass = GetClass();						// 아래와 같다.
	UClass* StaticClass = UMyGameInstance::StaticClass();	// 위와 같다.

	// 어썰트 (Assert).
	//if (RuntimeClass == StaticClass)									// 기존의 방식.
	//{
	//}
	//check(RuntimeClass == StaticClass);								// 강한 어썰트.
	ensure(RuntimeClass == StaticClass);								// 약한 어썰트.
	//ensureMsgf(RuntimeClass != StaticClass, TEXT("강제 에러 발생."));	// 메세지 출력.

	UE_LOG(LogTemp, Log, TEXT("학교를 담당하는 클래스 이름: %s"), *RuntimeClass->GetName());

	SchoolName = TEXT("새로 변경된 학교");

	UE_LOG(LogTemp, Log, TEXT("학교 이름: %s"), *SchoolName);
	UE_LOG(LogTemp, Log, TEXT("학교 이름 기본값: %s"),
		*RuntimeClass->GetDefaultObject<UMyGameInstance>()->SchoolName);

	UE_LOG(LogTemp, Log, TEXT("===================="));

	// Student/Teacher 객체 생성.
	UStudent* Student = NewObject<UStudent>();
	UTeacher* Teacher = NewObject<UTeacher>();

	Student->SetName(TEXT("학생1"));
	UE_LOG(LogTemp, Log, TEXT("새로운 학생의 이름: %s"),
		*Student->GetName());

	// 리플렉션을 이용한 프로퍼티 정보 설정.
	FProperty* NameProperty
		= UTeacher::StaticClass()->FindPropertyByName(TEXT("Name"));

	FString CurrentTeacherName;
	if (NameProperty) // 어썰트: 기존의 방식.
	{
		// 현재 저장된 값 가져오기.
		NameProperty->GetValue_InContainer(Teacher, &CurrentTeacherName);
		UE_LOG(LogTemp, Log, TEXT("현재 선생님 이름: %s"),
			*CurrentTeacherName);

		FString NewTeacherName(TEXT("장세윤"));
		NameProperty->SetValue_InContainer(Teacher, &NewTeacherName);
		UE_LOG(LogTemp, Log, TEXT("현재 선생님 이름: %s"),
			*Teacher->GetName());
	}

	UE_LOG(LogTemp, Log, TEXT("===================="));

	Student->DoLesson();

	// 리플렉션을 통한 함수 호출.
	UFunction* DoLessonFunction
		= Teacher->GetClass()->FindFunctionByName(TEXT("DoLesson"));
	if (DoLessonFunction)
	{
		Teacher->ProcessEvent(DoLessonFunction, nullptr);
	}

	UE_LOG(LogTemp, Log, TEXT("===================="));
}
