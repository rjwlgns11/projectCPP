#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
	(plist->numOfData) = 0;//������ ���尪 0
	(plist->curPosition) = -1;//���� ����Ȱ� ����
}

void LInsert(List* plist, LData data)
{
	if (plist-> numOfData >LIST_LEN)//����ü ��� numofdata�� ���� 100���� Ŀ����
	{
		puts("��������� �����մϴ�.");
		return;
	}
	
	plist->arr[plist->numOfData] = data;//arr[numofdata](���� �ε����� �����Ͱ� ����)
	(plist->numOfData)++;//�ε��� �� ����
	
}
int LFirst(List* plist, LData *pdata)
{
	if (plist->arr[plist->numOfData] == 0)// ���� arr[numofdata]�� ���� == 0�̸�
	{
		return FALSE;//FALSE�� ��ȯ�Ѵ�
	}
	(plist->curPosition) = 0;//���� ������(����Ʈ)�� �����Ѵ�(-1 -> 0)
	*pdata = plist->arr[0]; //�������� ���� �迭�� ù��° ���� �����ϸ�
	return TRUE;//0��ȯ
	
}
int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >=(plist->numOfData)-1)//��ġ ���� ���� ������ ���尪�� ���ų� ũ��
	{
		return FALSE;
	}
	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}
LData LRemove(List * plist)
{
	int rpos = plist->curPosition;//��ǥ��
	int num = plist->numOfData;//������ ��
	int i;
	LData rdata = plist->arr[rpos];//�����Ͱ��� arr[rpos]��
	for (i = rpos; i < num-1; i++)//i�� num-1���� Ŀ���� ����
	{
		plist->arr[i] = plist->arr[i + 1];
	}
	(plist->curPosition)--;//��ǥ�� -1
	(plist->numOfData)--;//�����Ͱ� -1
	return rdata;//������ �����ʹ� ��ȯ�ȴ�
}
int LCount(List * plist)
{
	return plist->numOfData;
}