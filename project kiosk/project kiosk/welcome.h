#pragma once
#include "stdio.h"

void chineserestaurant()
{
	printf("어서오세요!\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1));
	printf("중", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10));
	printf("화", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
	printf("요", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
	printf("리", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
	printf(" 만", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
	printf("리", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
    printf("장", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
	printf("성", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
	printf("입니다!\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7));
	printf("메뉴를 선택하여 주세요.\n\n");
	

}
