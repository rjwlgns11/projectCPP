#pragma once
#include "stdio.h"

int menuremover(int Accumulatedamount, int quantity)

{


	if (quantity == 0&&Accumulatedamount==0)
	{
		printf("제거할수 있는 메뉴가 없습니다");
		return Accumulatedamount;

	}
	else 
	{
		return Accumulatedamount * quantity;
	}
}
