#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "namecard.h"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	namecard* card;
	
	ListInit(&list);

	
	card=makenamecard("������","010-7411-8321");
	LInsert(&list, card);

	card = makenamecard("�谳��", "010-1234-5678");
	LInsert(&list, card);

	card = makenamecard("�׿��ΰ�", "010-8765-4321");
	LInsert(&list, card);
	
	printf("���� �������� ��: %d \n", LCount(&list));
	
	//����� ���� �Լ�//

	if (LFirst(&list, &card))    // ù ��° ������ ��ȸ
	{
			shownamecharinfo(card);
			while (LNext(&list, &card))    // �� ��° ������ ������ ��ȸ
			{
					shownamecharinfo(card);
			}
		
	}
	printf("\n");

	//��ȣ�� ����//
	if (LFirst(&list, &card))    // ù ��° ������ ��ȸ
	{
		if (!namecompare(card,"�谳��"))//strcmp�Լ��� �����ϸ� 0 �ƴϸ� �׿� ���ڸ� ��ȯ�Ѵ� 0�� �ƴѰ�� if���� �����Ѵ�
			Changephonenum(card,"010-3456-7890");
		else
		{
			while (LNext(&list, &card))    // �� ��° ������ ������ ��ȸ
			{
				if (!namecompare(card, "�谳��"))//strcmp�Լ��� �����ϸ� 0 �ƴϸ� �׿� ���ڸ� ��ȯ�Ѵ� 0�� �ƴѰ�� if���� �����Ѵ�
				{
					Changephonenum(card, "010-3456-7890");
					break;
				}
			}
		}
	}


	
	//������ ���� �Լ�//
	if (LFirst(&list, &card))
	{
		if(!namecompare(card,"������"))//��ǻ� ����� ������ ����
		{
			LRemove(&list);
			free(card);
		}
			while (LNext(&list, &card))
			{
				if (!namecompare(card,"������"))
				{
					LRemove(&list);
					free(card);
					break;
				}
			}
	}
			

	/*** ���� �� ����� ������ ��ü ��� ***/
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