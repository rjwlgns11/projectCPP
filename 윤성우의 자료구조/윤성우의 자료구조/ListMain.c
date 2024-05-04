#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "point.h"


int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	point comppos;
	point* ppos;
	
	ListInit(&list);

	/*** 4개의 데이터 저장 ***/
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
	
	
	/*** 저장된 데이터의 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))    // 첫 번째 데이터 조회
	{
		showpointpos(ppos);
		
		while (LNext(&list, &ppos))    // 두 번째 이후의 데이터 조회
		{
			showpointpos(ppos);
			
		}
	}
	printf("\n");



	/*** 숫자 2을 탐색하여 모두 삭제 ***/

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
			

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
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