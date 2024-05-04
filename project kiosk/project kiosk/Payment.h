#pragma once
#include "stdio.h"
#include "PleaseWaitForAMoment.h"

int cash(int mycash,int change)
{
	int a;
	
	if (change == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("총 결제금액 0원 이하는 거래가 이루어지지 않습니다.\n");
		return mycash;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	do
	{
		
		printf("결제방식을 선택하여 주세요\n\n");
		printf("1. 현금 결제, 2.카드 결제\n");
		scanf("%d", &a);
		
		    if (mycash < change)
		    {
			
			printf("잔액이 부족합니다\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4));
			printf("잔액이 부족하여 음식을 제공 할 수 없습니다. 감사합니다.\n");
			return mycash;
		    }
			
			else if (a == 1)
			{
				system("cls");
				printf("현금결제를 선택하셨습니다\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9));
				printf("결제 금액은 %d원 이고 거스름돈은 %d원입니다.\n\n", change, mycash - change);
				PleaseWaitForAMoment();
				return mycash -= change;
			}
			else if (a == 2)
			{
				system("cls");
				printf("카드결제를 선택하셨습니다.\n",SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12));
				printf("결제 금액은 %d원이고 이번 달 한도는 %d원 입니다.\n\n", change, mycash - change);
				PleaseWaitForAMoment();
				return mycash -= change;

			}
			
			else
			{
				printf("유효한 선택이 아닙니다\n", SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7));
				printf("다시 선택해 주세요\n");
				continue;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n");
		

	}while(1);

}