// Fill out your copyright notice in the Description page of Project Settings.


#include "LogPrint/Public/logPrintActor.h"

#include "LogPrint/Public/GameDebugHelper.h"

// Sets default values
AlogPrintActor::AlogPrintActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AlogPrintActor::BeginPlay()
{
	Super::BeginPlay();
	// UE_LOG(日志分类、日志类型、日志内容)
	// 日志内容需要使用TEXT包裹
	// UE_LOG(LogTemp, Error, TEXT("Hello,UE C++!!!"));
	// UE_LOG(LogTemp, Warning, TEXT("Hello,UE C++!!!"));
	// UE_LOG(LogTemp, Display, TEXT("Hello,UE C++!!!"));
	// UE_LOG(LogTemp, Log, TEXT("Hello,UE C++!!!"));

	// 格式化整数：%d
	// UE_LOG(LogTemp, Warning, TEXT("Tome %d Sui"), 35);

	// 格式化小数：%f、%.2f
	// UE_LOG(LogTemp, Warning, TEXT("Show Message Float:%.2f"), 55.5555);

	// 格式化字符串：%s
	// UE_LOG(LogTemp, Warning, TEXT("ShowText:%s"), TEXT("Message"));

	// 组合格式化
	//UE_LOG(LogTemp, Warning, TEXT("ShowStr:%s,ShowNum:%d"), TEXT("StrMsg"), 88);

	// GEngine->AddOnScreenDebugMessage(Key,显示时间，显示的颜色，显示的内容)：
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(),TEXT("你好，这是修改输出后的文本！！！"));
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(),TEXT("Hello,Screen Message"));

	UE_LOG(LogTemp, Warning, TEXT("这是输出在控制台的文本"));

	Debug::PrintMessage(TEXT("这是使用封装的函数输出的信息"));
}

// Called every frame
void AlogPrintActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
