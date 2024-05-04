#pragma once
#include "stdio.h"
int removemenu(int mainmenulist[], int mainmenusizeuplist[], int maindish[])
{
	int selectmenu, Accumulatedamount ,quantity = 0, total = 0, sizeup = 0;

	printf("취소할 메뉴를 선택해주세요.\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
	
	do
	{

		printf("1.짜장면(5,000원).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
		printf("2.짬뽕(6,000원).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
		printf("3.볶음밥(7,000원).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
		printf("4.탕수육(15,000원).\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
		printf("5.깐풍기(15,000원).\n\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("메뉴를 선택하여 주세요.\n");
		scanf("%d", &selectmenu);
		system("cls");

		Accumulatedamount = 0;

		switch (selectmenu)
		{
		case 1:

			printf("수량을 선택하여 주세요\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("곱배기를 선택하시겠습니까?\n");
				printf("맞으면 1번 아니면 2번을 눌러주세요\n");

				scanf("%d", &sizeup);
				system("cls");
				if (sizeup == 1)
				{
					if (mainmenusizeuplist[0] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}

					Accumulatedamount = -6000;
					total -= menuremover(Accumulatedamount, quantity);
						system("cls");
						printf("짜장면 곱배기를 %d개 취소하셨습니다.누적금액 %d원\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
						mainmenusizeuplist[0] -= quantity;
					
				}
				else if (sizeup == 2) {
					if (mainmenulist[0] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -5000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("짜장면을 %d개 취소하셨습니다.누적금액 %d원\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[0] -= quantity;

				}
				else {

					printf("유효하지 않은 선택입니다\n");
					printf("초기화면으로 돌아갑니다\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 2:
			printf("수량을 선택해주세요\n");
			scanf("%d", &quantity);
			system("cls");

			if (quantity > 0)
			{
				printf("곱배기를 선택하시겠습니까?\n");
				printf("맞으면 1번 아니면 2번을 눌러주세요\n");
				scanf("%d", &sizeup);
				system("cls");

				if (sizeup == 1) {
					if (mainmenusizeuplist[1] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -8000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("짬뽕 곱배기를 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15));
					mainmenusizeuplist[1] -= quantity;
				}
				else if (sizeup == 2) {
					if (mainmenulist[1] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -7000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("짬뽕을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[1] -= quantity;
				}
				else {

					printf("유효하지 않은 선택입니다.\n");
					printf("초기화면으로 돌아갑니다\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 3:
			printf("수량을 선택하여 주세요\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("곱배기를 선택하시겠습니까?\n");
				printf("맞으면 1번 아니면 2번을 눌러주세요\n");
				scanf("%d", &sizeup);
				if (sizeup == 1)
				{
					if (mainmenulist[2] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					system("cls");
					Accumulatedamount = -8000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("볶음밥 곱배기를 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14));
					mainmenusizeuplist[2] -= quantity;
				}
				else if (sizeup == 2) {
					if (mainmenusizeuplist[2] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -7000;
					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					printf("볶음밥을 %d개 취소하셨습니다.\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
					mainmenulist[2] -= quantity;
				}
				else {

					printf("유효하지 않은 선택입니다.\n");
					printf("초기화면으로 돌아갑니다\n");
					continue;
				}

			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 4:
			printf("수량을 선택하여 주세요\n");
			scanf("%d", &quantity);
			system("cls");


			if (quantity > 0)
			{
				printf("사이즈를 선택해 주세요\n");
				printf("1.소(15,000원) 2.중(20,000원) 3.대(25,000)원\n");
				scanf("%d", &sizeup);
				if (sizeup == 1) {
					if (maindish[0] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -15000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[0] -= quantity;
					printf("탕수육(소)을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
				}
				else if (sizeup == 2)
				{
					if (maindish[1] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -20000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[1] -= quantity;
					printf("탕수육(중)을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));

				}
				else if (sizeup == 3)
				{
					if (maindish[2] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}

					Accumulatedamount = -25000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("탕수육(대)을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[2] -= quantity;
				}
				else
				{
					printf("유효한 선택이 아닙니다\n");
					printf("메뉴판으로 돌아갑니다\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		case 5:
			printf("수량을 선택하여 주세요\n");
			scanf("%d", &quantity);
			system("cls");

			if (quantity > 0)
			{
				printf("사이즈를 선택해 주세요\n");
				printf("1.소(15,000원) 2.중(20,000원) 3.대(25,000)원\n");
				scanf("%d", &sizeup);
				if (sizeup == 1) {
					if (maindish[3] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount -= 15000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");
					maindish[3] -= quantity;
					printf("깐풍기(소)을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
				}
				else if (sizeup == 2)
				{
					if (maindish[4] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}
					Accumulatedamount = -20000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("깐풍기(중)을 %d개 취소하셨습니다.\n", quantity, total, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[4] -= quantity;
				}
				else if (sizeup == 3)
				{
					if (maindish[5] == 0)
					{
						printf("취소할수있는 메뉴가 없습니다. 초기화면으로 돌아갑니다.\n");
						continue;
					}

					Accumulatedamount = -25000;

					total -= menuremover(Accumulatedamount, quantity);
					system("cls");

					printf("깐풍기(대)을 %d개 취소하셨습니다.\n", quantity, SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13));
					maindish[5] -= quantity;
				}
				else
				{
					printf("유효한 선택이 아닙니다\n");
					printf("메뉴판으로 돌아갑니다\n");
					continue;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			break;

		default:

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

			printf("유효한 조작이 아닙니다.다시 선택하여 주세요.\n");

			break;
		}


	} while (additionalorderfuntion(total) == 1);

	printf("취소 금액 %d\n", total);
	return total;
}