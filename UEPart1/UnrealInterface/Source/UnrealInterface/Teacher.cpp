﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"

UTeacher::UTeacher()
{
	// CDO에 들어가는 기본값들.
	Name = TEXT("장선생");
	Id = 1;
}

void UTeacher::DoLesson()
{
	ILessonInterface::DoLesson();
	UE_LOG(LogTemp, Log, TEXT("%s님이 수업을 진행합니다."), *Name);
}
