#pragma once
#include "stdio.h"
void eat()
{
	int a;
	printf("1.����Ļ�",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
	printf(" or ", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
	printf("2.����\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

		
	do
	{
		scanf("%d", &a);

		if (a == 1) {
			system("cls");
			printf("����Ļ縦 �����ϼ̽��ϴ�.\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
			break;
		}
		else if (a == 2)
		{
			system("cls");
			printf("������ �����ϼ̽��ϴ�.\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
			break;
		}
		else
		{
			printf("��ȿ���� ���� �����Դϴ�.\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			printf("�ٽ� �����Ͽ� �ּ���.\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			continue;
		}
	
	
	} while (1);

}