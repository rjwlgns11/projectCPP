#pragma once
#include "stdio.h"

void selectlist(int mainmenulist[], int mainmenusizeuplist[], int maindish[], int sidemenulist[],int count)
{
	for (int i = 0; i < count; i++)
	{
		if (mainmenulist[i] > 0)
		{
			printf("¥��� %d�׸�\n", mainmenulist[0]);
			printf("«�� %d�׸�\n", mainmenulist[1]);
			printf("������ %d�׸�\n", mainmenulist[2]);
			break;
		}
		else
			continue;
	}
	for (int i = 0; i < count; i++) {
		if (mainmenusizeuplist[i] > 0) {
			printf("¥��� ����� %d�׸�\n", mainmenusizeuplist[0]);
			printf("«�� ����� %d�׸�\n", mainmenusizeuplist[1]);
			printf("������ ����� %d�׸�\n", mainmenusizeuplist[2]);
			break;
		}
		else
			continue;
	}

	printf("\n");

	for (int i = 0; i < count; i++) {
		if (maindish[i] > 0) {
			printf("������ �� %d��\n", maindish[0]);
			printf("������ �� %d��\n", maindish[1]);
			printf("������ �� %d��\n", maindish[2]);
			printf("��ǳ�� �� %d��\n", maindish[3]);
			printf("��ǳ�� �� %d��\n", maindish[4]);
			printf("��ǳ�� �� %d��\n", maindish[5]);
			break;
		}
	}
	printf("\n");
	for (int i = 0; i < count; i++) {
		if (sidemenulist[i] > 0) {
			printf("����� %d�׸�\n", sidemenulist[0]);
			printf("�ݶ� %dĵ\n", sidemenulist[1]);
			printf("���̴� %dĵ\n", sidemenulist[2]);
			printf("���� %d��\n", sidemenulist[3]);
			break;
		}
		else
			continue;
	}
	printf("\n");

}