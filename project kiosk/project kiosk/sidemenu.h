#pragma once
#include "stdio.h"

int exmenu(int Accumulatedamount,int sidemenulist[])
{
	int sidemenuselect, quantity, additionalorder=0,total=0;
	printf("추가메뉴를 선택하시겠습니까?\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6));
	
	

	do
	{
		Accumulatedamount = 0; quantity = 0;
		printf("1.공기밥 추가(1000원)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1));
		printf("2.콜라(2000원)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
		printf("3.사이다(2000원)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3));
		printf("4.소주(5000원)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
		printf("5.선택 안함(0원)\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
		
		scanf("%d", &sidemenuselect);

		switch (sidemenuselect)
		{
		case 1 :
			printf("갯수를 입력해주세요: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 1000;
			total+=menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("공기밥 %d그릇 추가하였습니다.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1));
			sidemenulist[0] +=quantity;
			
			    continue;
			

		case 2: 
			printf("갯수를 입력해주세요: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 2000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("콜라 %d캔 추가하였습니다.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2));
			sidemenulist[1] +=quantity;
			
				continue;
			
			
		case 3:
			printf("갯수를 입력해주세요: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 2000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("사이다 %d캔 추가하였습니다.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3));
			sidemenulist[2] +=quantity;
			
			continue;
			

		case 4:
			printf("갯수를 입력해주세요: \n");
			scanf("%d", &quantity);
			Accumulatedamount = 5000;
			total += menuchoice(Accumulatedamount, quantity);
			system("cls");
			printf("소주 %d병 추가하였습니다.\n\n", quantity,SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			sidemenulist[3] +=quantity;
			
			continue;
			

		case 5:
			system("cls");
			printf("추가메뉴 선택하지 않으셨습니다\n\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5));
			quantity = 5;
			
			break;

		default:
			printf("유효하지 않은 조작입니다\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11));
			continue;
		}
		
		
		
	} while (additionalorderfuntion(total) == 1);
	printf("사이드 메뉴 %d\n", total);
	return total;
	
}

