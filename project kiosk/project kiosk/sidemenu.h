#pragma once
#include "stdio.h"

int exmenu(int Accumulatedamount,int sidemenulist[])
{
	int sidemenuselect, quantity, additionalorder=0,total=0;
	printf("�߰��޴��� �����Ͻðڽ��ϱ�?\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6));
	
	

	do
	{
		Accumulatedamount = 0; quantity = 0;
		printf("1.����� �߰�(1000��)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1));
		printf("2.�ݶ�(2000��)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
		printf("3.���̴�(2000��)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3));
		printf("4.����(5000��)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
		printf("5.���� ����(0��)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
		
		scanf("%d", &sidemenuselect);

		switch (sidemenuselect)
		{
		case 1 :
			printf("������ �Է����ּ���: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 1000;
			total+=menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("����� %d�׸� �߰��Ͽ����ϴ�.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1));
			sidemenulist[0] +=quantity;
			
			    continue;
			

		case 2: 
			printf("������ �Է����ּ���: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 2000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("�ݶ� %dĵ �߰��Ͽ����ϴ�.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
			sidemenulist[1] +=quantity;
			
				continue;
			
			
		case 3:
			printf("������ �Է����ּ���: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 2000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("���̴� %dĵ �߰��Ͽ����ϴ�.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3));
			sidemenulist[2] +=quantity;
			
			continue;
			

		case 4:
			printf("������ �Է����ּ���: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 5000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("���� %d�� �߰��Ͽ����ϴ�.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			sidemenulist[3] +=quantity;
			
			continue;
			

		case 5:
			system("cls");
			printf("�߰��޴� �������� �����̽��ϴ�\n\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5));
			quantity = 5;
			
			break;

		default:
			printf("��ȿ���� ���� �����Դϴ�\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
			continue;
		}
		
		
		
	} while (additionalorderfuntion(total) == 1);
	printf("���̵� �޴� %d\n", total);
	return total;
	
}

