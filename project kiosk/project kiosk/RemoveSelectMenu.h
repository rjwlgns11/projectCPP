#pragma once
#include "stdio.h"
int removemenu(int mainmenulist[], int mainmenusizeuplist[], int maindish[])
{
	int selectmenu, Accumulatedamount ,quantity = 0, total = 0, sizeup = 0;

	printf("����� �޴��� �������ּ���.\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
	
	do
	{

		printf("1.¥���(5,000��).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
		printf("2.«��(6,000��).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
		printf("3.������(7,000��).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
		printf("4.������(15,000��).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
		printf("5.��ǳ��(15,000��).\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("�޴��� �����Ͽ� �ּ���.\n");
		scanf("%d", &selectmenu);
		system("cls");

		Accumulatedamount = 0;

		switch (selectmenu)
		{
		case 1:

			printf("������ �����Ͽ� �ּ���\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("����⸦ �����Ͻðڽ��ϱ�?\n");
				printf("������ 1�� �ƴϸ� 2���� �����ּ���\n");

				scanf("%d", &sizeup);
				system("cls");
				if (sizeup == 1)
				{
					if (mainmenusizeuplist[0] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}

					Accumulatedamount = -6000;
					total -= menuremover(Accumulatedamount, quantity);
						system("cls");
						printf("¥��� ����⸦ %d�� ����ϼ̽��ϴ�.�����ݾ� %d��\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
						mainmenusizeuplist[0] -= quantity;
					
				}
				else if (sizeup == 2) {
					if (mainmenulist[0] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -5000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("¥����� %d�� ����ϼ̽��ϴ�.�����ݾ� %d��\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[0] -= quantity;

				}
				else {

					printf("��ȿ���� ���� �����Դϴ�\n");
					printf("�ʱ�ȭ������ ���ư��ϴ�\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 2:
			printf("������ �������ּ���\n");
			scanf("%d", &quantity);
			system("cls");

			if (quantity > 0)
			{
				printf("����⸦ �����Ͻðڽ��ϱ�?\n");
				printf("������ 1�� �ƴϸ� 2���� �����ּ���\n");
				scanf("%d", &sizeup);
				system("cls");

				if (sizeup == 1) {
					if (mainmenusizeuplist[1] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -8000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("«�� ����⸦ %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
					mainmenusizeuplist[1] -= quantity;
				}
				else if (sizeup == 2) {
					if (mainmenulist[1] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -7000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("«���� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[1] -= quantity;
				}
				else {

					printf("��ȿ���� ���� �����Դϴ�.\n");
					printf("�ʱ�ȭ������ ���ư��ϴ�\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 3:
			printf("������ �����Ͽ� �ּ���\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("����⸦ �����Ͻðڽ��ϱ�?\n");
				printf("������ 1�� �ƴϸ� 2���� �����ּ���\n");
				scanf("%d", &sizeup);
				if (sizeup == 1)
				{
					if (mainmenulist[2] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					system("cls");
					Accumulatedamount = -8000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("������ ����⸦ %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
					mainmenusizeuplist[2] -= quantity;
				}
				else if (sizeup == 2) {
					if (mainmenusizeuplist[2] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -7000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("�������� %d�� ����ϼ̽��ϴ�.\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[2] -= quantity;
				}
				else {

					printf("��ȿ���� ���� �����Դϴ�.\n");
					printf("�ʱ�ȭ������ ���ư��ϴ�\n");
					continue;
				}

			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 4:
			printf("������ �����Ͽ� �ּ���\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("����� ������ �ּ���\n");
				printf("1.��(15,000��) 2.��(20,000��) 3.��(25,000)��\n");
				scanf("%d", &sizeup);
				if (sizeup == 1) {
					if (maindish[0] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -15000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[0] -= quantity;
					printf("������(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
				}
				else if (sizeup == 2)
				{
					if (maindish[1] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -20000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[1] -= quantity;
					printf("������(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));

				}
				else if (sizeup == 3)
				{
					if (maindish[2] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}

					Accumulatedamount = -25000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("������(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[2] -= quantity;
				}
				else
				{
					printf("��ȿ�� ������ �ƴմϴ�\n");
					printf("�޴������� ���ư��ϴ�\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 5:
			printf("������ �����Ͽ� �ּ���\n");
			scanf("%d", &quantity);
			system("cls");

			if (quantity > 0)
			{
				printf("����� ������ �ּ���\n");
				printf("1.��(15,000��) 2.��(20,000��) 3.��(25,000)��\n");
				scanf("%d", &sizeup);
				if (sizeup == 1) {
					if (maindish[3] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount -= 15000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[3] -= quantity;
					printf("��ǳ��(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
				}
				else if (sizeup == 2)
				{
					if (maindish[4] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}
					Accumulatedamount = -20000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("��ǳ��(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[4] -= quantity;
				}
				else if (sizeup == 3)
				{
					if (maindish[5] == 0)
					{
						printf("����Ҽ��ִ� �޴��� �����ϴ�. �ʱ�ȭ������ ���ư��ϴ�.\n");
						continue;
					}

					Accumulatedamount = -25000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("��ǳ��(��)�� %d�� ����ϼ̽��ϴ�.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[5] -= quantity;
				}
				else
				{
					printf("��ȿ�� ������ �ƴմϴ�\n");
					printf("�޴������� ���ư��ϴ�\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		default:

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			printf("��ȿ�� ������ �ƴմϴ�.�ٽ� �����Ͽ� �ּ���.\n");

			break;
		}


	} while (additionalorderfuntion(total) == 1);

	printf("��� �ݾ� %d\n", total);
	return total;
}