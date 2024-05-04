#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "point.h"


int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	point comppos;
	point* ppos;
	
	ListInit(&list);

	/*** 4���� ������ ���� ***/
	ppos = (point*)malloc(sizeof(point));
	setpointpos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	setpointpos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	setpointpos(ppos, 2, 3);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	setpointpos(ppos, 3, 3);
	LInsert(&list, ppos);
	
	
	/*** ����� �������� ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))    // ù ��° ������ ��ȸ
	{
		showpointpos(ppos);
		
		while (LNext(&list, &ppos))    // �� ��° ������ ������ ��ȸ
		{
			showpointpos(ppos);
			
		}
	}
	printf("\n");



	/*** ���� 2�� Ž���Ͽ� ��� ���� ***/

	comppos.xpos = 2;
	comppos.ypos = 0;
	if (LFirst(&list, &ppos))
	{
		if(pointcomp(ppos,&comppos)==1)
		{
			LRemove(&list);
			free(ppos);
		}
			while (LNext(&list, &ppos))
			{
				if (pointcomp(ppos,&comppos)== 1)
				{
					LRemove(&list);
					free(ppos);
				}
			}
	}
			

	/*** ���� �� ����� ������ ��ü ��� ***/
	printf("%d \n", LCount(&list));
	if (LFirst(&list, &ppos))
	{
		showpointpos(ppos);
		while (LNext(&list, &ppos))
		{
			showpointpos(ppos);
		}

	}
	printf("\n");
	return 0;
}