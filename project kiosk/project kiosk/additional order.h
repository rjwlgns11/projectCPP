#pragma once

#include "stdio.h"

int additionalorderfuntion(int total)
{
	while (1) {
		int a;
		printf("메뉴를 선택하시려면 1번,아니면 2번을 눌러주세요\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7));
		scanf("%d",&a);
		system("cls");

		switch (a)
		{
		case 1:
			return 1;
			
		case 2:
			return total;
			
		default:
			printf("유효하지 않은 입력입니다\n");
			continue;
		}
		printf("현재상황 %d\n", total);
	};

}
