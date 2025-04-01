﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"

UTeacher::UTeacher()
{
	// CDO에 들어가는 기본값들.
	Name = TEXT("장선생");
	Year = 5;
	Id = 1;
}

void UTeacher::DoLesson()
{
	Super::DoLesson();

	UE_LOG(LogTemp, Log, TEXT("%d년차 선생님 %s님이 수업을 진행합니다."), Year, *Name);
}
