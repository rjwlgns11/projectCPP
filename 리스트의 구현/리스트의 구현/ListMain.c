#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "namecard.h"

int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	namecard* card;
	
	ListInit(&list);

	
	card=makenamecard("허지훈","010-7411-8321");
	LInsert(&list, card);

	card = makenamecard("김개똥", "010-1234-5678");
	LInsert(&list, card);

	card = makenamecard("잉여인간", "010-8765-4321");
	LInsert(&list, card);
	
	printf("현재 데이터의 수: %d \n", LCount(&list));
	
	//출력을 위한 함수//

	if (LFirst(&list, &card))    // 첫 번째 데이터 조회
	{
			shownamecharinfo(card);
			while (LNext(&list, &card))    // 두 번째 이후의 데이터 조회
			{
					shownamecharinfo(card);
			}
		
	}
	printf("\n");

	//번호의 변경//
	if (LFirst(&list, &card))    // 첫 번째 데이터 조회
	{
		if (!namecompare(card,"김개똥"))//strcmp함수는 동일하면 0 아니면 그외 숫자를 반환한다 0이 아닌경우 if문을 실행한다
			Changephonenum(card,"010-3456-7890");
		else
		{
			while (LNext(&list, &card))    // 두 번째 이후의 데이터 조회
			{
				if (!namecompare(card, "김개똥"))//strcmp함수는 동일하면 0 아니면 그외 숫자를 반환한다 0이 아닌경우 if문을 실행한다
				{
					Changephonenum(card, "010-3456-7890");
					break;
				}
			}
		}
	}


	
	//삭제를 위한 함수//
	if (LFirst(&list, &card))
	{
		if(!namecompare(card,"허지훈"))//사실상 변경과 동일한 문장
		{
			LRemove(&list);
			free(card);
		}
			while (LNext(&list, &card))
			{
				if (!namecompare(card,"허지훈"))
				{
					LRemove(&list);
					free(card);
					break;
				}
			}
	}
			

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
	printf("%d \n", LCount(&list));
	if (LFirst(&list, &card))
	{
		shownamecharinfo(card);
		while (LNext(&list, &card))
		{
			shownamecharinfo(card);
		}

	}
	printf("\n");
	return 0;
}