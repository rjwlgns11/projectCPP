#pragma once
#include "stdio.h"
void eat()
{
	int a;
	printf("1.매장식사",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
	printf(" or ", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
	printf("2.포장\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

		
	do
	{
		scanf("%d", &a);

		if (a == 1) {
			system("cls");
			printf("매장식사를 선택하셨습니다.\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
			break;
		}
		else if (a == 2)
		{
			system("cls");
			printf("포장을 선택하셨습니다.\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
			break;
		}
		else
		{
			printf("유효하지 않은 조작입니다.\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			printf("다시 선택하여 주세요.\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			continue;
		}
	
	
	} while (1);

}