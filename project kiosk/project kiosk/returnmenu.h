#pragma once
#include "stdio.h"
#include "kioskproject.h"

int returnmenu(int Accumulatedamount,int mycash,int sidemenulist[], int mainmenulist[],int mainmenusizeuplist[],int maindish[])

{
	int returnmenu = 0;
	do {

		printf("1���� �����ø� ���� �޴������� \n2���� �����ø� ���̵� �޴������� \n3���� �����ø� ����â���� �Ѿ�ϴ�.\n");
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
			printf("���� �ݾ� %d,�ܾ� %d\n", Accumulatedamount, mycash);//�߰�����
			break;
		}
		else
		{
			system("cls");
			printf("��ȿ�� �Է��� �ƴմϴ�. �ٽ� �Է��� �ּ���\n");
			returnmenu = 4;
		}

		

	} while (returnmenu < 5 && returnmenu != 3);
	
	return 0;

}