#pragma once
#include "stdio.h"
#include "kioskproject.h"

int returnmenu(int Accumulatedamount,int mycash,int sidemenulist[], int mainmenulist[],int mainmenusizeuplist[],int maindish[])

{
	int returnmenu = 0;
	do {

		printf("1번을 누르시면 메인 메뉴판으로 \n2번을 누르시면 사이드 메뉴판으로 \n3번을 누르시면 결제창으로 넘어갑니다.\n");
		scanf("%d", &returnmenu);

		if (returnmenu == 1)
		{
			system("cls");
			Accumulatedamount += menu(Accumulatedamount,mainmenulist, mainmenusizeuplist,maindish);
			return Accumulatedamount;

		}
		else if (returnmenu == 2)
		{
			system("cls");
			Accumulatedamount += exmenu(Accumulatedamount, sidemenulist);
			return Accumulatedamount;

		}

		else if (returnmenu == 3)
		{
			system("cls");
			printf("결제 금액 %d,잔액 %d\n", Accumulatedamount, mycash);//중간점검
			break;
		}
		else
		{
			system("cls");
			printf("유효한 입력이 아닙니다. 다시 입력해 주세요\n");
			returnmenu = 4;
		}

		

	} while (returnmenu < 5 && returnmenu != 3);
	
	return 0;

}