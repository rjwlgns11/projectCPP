#pragma once
#include "stdio.h"

void PleaseWaitForAMoment()
{
	   
		printf("잠시만 기다리시면 음식이 나옵니다.\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
		printf("이용해주셔서 감사합니다.\n");
}