#pragma once

#include "stdio.h"

int additionalorderfuntion(int total)
{
	while (1) {
		int a;
		printf("�޴��� �����Ͻ÷��� 1��,�ƴϸ� 2���� �����ּ���\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7));
		scanf("%d",&a);
		system("cls");

		switch (a)
		{
		case 1:
			return 1;
			
		case 2:
			return total;
			
		default:
			printf("��ȿ���� ���� �Է��Դϴ�\n");
			continue;
		}
		printf("�����Ȳ %d\n", total);
	};

}
