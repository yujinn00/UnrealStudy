// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Card.h"
#include "CourseInfo.h"

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

	// 학사 정보 객체 생성.
	CourseInfo = NewObject<UCourseInfo>(this);

	// 학생 객체 생성.
	UStudent* Student1 = NewObject<UStudent>();
	Student1->SetName(TEXT("학생1"));

	UStudent* Student2 = NewObject<UStudent>();
	Student2->SetName(TEXT("학생2"));

	UStudent* Student3 = NewObject<UStudent>();
	Student3->SetName(TEXT("학생3"));

	// 구독할 함수 등록.
	CourseInfo->OnChanged.AddUObject(Student1, &UStudent::GetNotification);
	CourseInfo->OnChanged.AddUObject(Student2, &UStudent::GetNotification);
	CourseInfo->OnChanged.AddUObject(Student3, &UStudent::GetNotification);

	// 발행.
	CourseInfo->ChangedCourseInfo(SchoolName, TEXT("새로운 학사 정보"));

	UE_LOG(LogTemp, Log, TEXT("===================="));
}
