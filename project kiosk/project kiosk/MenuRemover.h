#pragma once
#include "stdio.h"

int menuremover(int Accumulatedamount, int quantity)

{


	if (quantity == 0&&Accumulatedamount==0)
	{
		printf("�����Ҽ� �ִ� �޴��� �����ϴ�");
		return Accumulatedamount;

	}
	else 
	{
		return Accumulatedamount * quantity;
	}
}
