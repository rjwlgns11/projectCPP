#pragma once
#include "stdio.h"
#include "PleaseWaitForAMoment.h"

int cash(int mycash,int change)
{
	int a;
	
	if (change == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("�� �����ݾ� 0�� ���ϴ� �ŷ��� �̷������ �ʽ��ϴ�.\n");
		return mycash;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	do
	{
		
		printf("��������� �����Ͽ� �ּ���\n\n");
		printf("1. ���� ����, 2.ī�� ����\n");
		scanf("%d", &a);
		
		    if (mycash < change)
		    {
			
			printf("�ܾ��� �����մϴ�\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			printf("�ܾ��� �����Ͽ� ������ ���� �� �� �����ϴ�. �����մϴ�.\n");
			return mycash;
		    }
			
			else if (a == 1)
			{
				system("cls");
				printf("���ݰ����� �����ϼ̽��ϴ�\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9));
				printf("���� �ݾ��� %d�� �̰� �Ž������� %d���Դϴ�.\n\n", change, mycash - change);
				PleaseWaitForAMoment();
				return mycash -= change;
			}
			else if (a == 2)
			{
				system("cls");
				printf("ī������� �����ϼ̽��ϴ�.\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
				printf("���� �ݾ��� %d���̰� �̹� �� �ѵ��� %d�� �Դϴ�.\n\n", change, mycash - change);
				PleaseWaitForAMoment();
				return mycash -= change;

			}
			
			else
			{
				printf("��ȿ�� ������ �ƴմϴ�\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7));
				printf("�ٽ� ������ �ּ���\n");
				continue;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n");
		

	}while(1);

}