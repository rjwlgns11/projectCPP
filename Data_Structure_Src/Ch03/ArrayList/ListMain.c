#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "point.h"


int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	int data;
	
	ListInit(&list);

	/*** 5개의 데이터 저장 ***/
	LInsert(&list, 1); LInsert(&list, 2); LInsert(&list, 3);
	LInsert(&list, 4); LInsert(&list, 5); LInsert(&list, 6);
	LInsert(&list, 7); LInsert(&list, 8); LInsert(&list, 9); 
	
	
	/*** 저장된 데이터의 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &data))    // 첫 번째 데이터 조회
	{
		printf("%d ", data);
		
		while (LNext(&list, &data))    // 두 번째 이후의 데이터 조회
		{
			printf("%d ", data);
			
		}
	}
	printf("\n\n");



	/*** 숫자 2을 탐색하여 모두 삭제 ***/
		
	if (LFirst(&list, &data))
	{
			if (data == 2)
				LRemove(&list);

			while (LNext(&list, &data))
			{
				if (data == 2 )
					LRemove(&list);
			}
	}
			

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
	printf("%d \n", LCount(&list));
	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}

	}
	printf("\n\n");
	return 0;
}