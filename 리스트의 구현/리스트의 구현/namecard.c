#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"


namecard* makenamecard(char* name, char* phone)//�Ű������� �̸��� ��ȭ��ȣ�� ���� char�� �迭��
{
	namecard* Card = (namecard*)malloc(sizeof(namecard));
	
	strcpy(Card->name,name);//card->name�� �Ű����� name ����(���ڿ��� �ܼ� ������ �ȵȴ�!!)
	strcpy(Card->phone , phone);//card->phone�� �Ű����� phone ����

	return Card;//card�� �ּҰ� ��ȯ

}

void shownamecharinfo(namecard* pcard)
{
	printf("%s \n", pcard->name);//���
	printf("%s \n", pcard->phone);//���
}

int namecompare(namecard* pcard, char* name)
{
	return strcmp(pcard->name,name);//���� �����ϸ� 0�� �ƴҰ�� null�� ��ȯ
}
void Changephonenum(namecard* pcard, char* phonenum)
{
	strcpy(pcard->phone, phonenum);//�Ű������� ����ü ����� �����Ѵ�
}
