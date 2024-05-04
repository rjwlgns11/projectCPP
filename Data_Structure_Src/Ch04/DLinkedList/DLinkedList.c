#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist)//�ʱ�ȭ
{
	plist->head = (Node*)malloc(sizeof(Node));//����ü ������ �����Ҵ�
	plist->head->next = NULL;//����ü ������ ���� next�� null�� ����Ų��
	plist->comp = NULL;//comp��� �̸��� �����͵� null���� ����Ų��
	plist->numOfData = 0;//�����Ͱ� 0���� ����
}

void FInsert(List * plist, LData data)//������ �Է��� ���� �Լ�
{
	Node * newNode = (Node*)malloc(sizeof(Node));//����� �����͸� �����Ҵ����� �ʱ�ȭ���ְ��ִ�  1
	newNode->data = data;//������� ��� �����Ϳ� �Ű������� ���޵� data�� �����Ѵ�   1-1

	newNode->next = plist->head->next;//��� �ؽ�Ʈ�� �Ű������� ���޵� ����� ��� �ؽ�Ʈ�� �����Ѵ� 1->2
	plist->head->next = newNode;//�Ű������� ��� �ؽ�Ʈ�� ����ü ������� �ּҰ��� �����Ѵ� 2->1

	(plist->numOfData)++;//������ ���� 1 ����
}

void SInsert(List * plist, LData data)//������ ������ �Է��� ���� �Լ� 2
{
	Node * newNode = (Node*)malloc(sizeof(Node));//����� �����͸� �����Ҵ����� �ʱ�ȭ���ְ��ִ� (�ٸ� 1)
	Node * pred = plist->head;//pred�� �Ű����� ����Ʈ ��� ��尡 ����Ű�� �ּҰ��� �����Ѵ� (�ٸ� 1)
	newNode->data = data;//��� �����Ϳ� �Ű������� ���޵� �����Ͱ��� �����Ѵ� 1-1

	while(pred->next != NULL &&
		plist->comp(data, pred->next->data) != 0)//�ݺ��� pred ��� �ؽ�Ʈ�� null���� �ƴ϶�� �׸��� plist ��� comp�� (������, pred -> next-> data)�� 0�� �ƴ϶�� ����
	{
		pred = pred->next;//pred�� pred -> next�� ����Ű�� �ּҰ��� �����Ѵ� (�ٸ� 1-1)
	}

	newNode->next = pred->next;//newnode-> next�� pred->next�� �ּҰ��� �����Ѵ� (�ٸ� 1->2)
	pred->next = newNode;//pred->next�� newnode�� �ּҰ��� �����Ѵ� (�ٸ� 2->1)

	(plist->numOfData)++;//������ ���� 1 ����
}


void LInsert(List * plist, LData data)//�������� ����(?)�� �����ϱ����� �Լ�??
{
	if(plist->comp == NULL)//���� plist�� ��� comp�� null���̶�� (�Ű����� ��� comp�� ���� null�̸�)
		FInsert(plist, data);//finsert�Լ��� �����Ѵ�(�Ű����� plist, �����Ͱ� ����)
	else//�ƴϸ�
		SInsert(plist, data);//SInsert�Լ��� �����Ѵ�(�Ű����� plist, �����Ͱ� ����)
}

int LFirst(List * plist, LData * pdata)//ù��°�� ������ ���� �Լ�
{
	if(plist->head->next == NULL)//���� plist��� ����� ��� next���� null�̶�� (���� ���� �������ִ� ����� ����Ű�� ���� null�̸�,�� �ƹ��͵� ���ų� ��á����)
		return FALSE;//FALSE�� ��ȯ�Ѵ�

	plist->before = plist->head;// plist->before�� plist->head���� �����Ѵ�(�ּҰ�?)(��� ������(ù�� �����?)�� ��忡 ������)
	plist->cur = plist->head->next; //plist->cur��plist->head->next���� �����Ѵ� (��ġ���� �������� ����Ų��?)

	*pdata = plist->cur->data;// �Ű����� pdata�� plist�� ��� cur�� ��� data���� �����Ѵ� (�Ű������� next�� data��)
	return TRUE;//TRUE�� ��ȯ
}

int LNext(List * plist, LData * pdata)//������ �����Ͱ� ������ ���� �Լ�
{
	if(plist->cur->next == NULL)//���� plist->cur->next����null�̶��(���� ���� �������ִ� ����� ����Ű�� ���� null�̸�,�� �ƹ��͵� ���ų� ��á����)
		return FALSE;//FALSE ��ȯ

	plist->before = plist->cur;//plist->before�� plist->cur���� �����Ѵ�(��� ������(ù�� �����?)�� ��忡 ������)
	plist->cur = plist->cur->next;//plist->cur��plist->cur->next�� ���� �����Ѵ�(��ġ���� �������� ����Ų��?)

	*pdata = plist->cur->data;//�Ű����� *pdata�� plist->cur->data�� ���� �����Ѵ�(�ּҰ�?)(�Ű������� next�� data��)
	return TRUE;//TRUE �� ��ȯ
}

LData LRemove(List * plist)//���尪 ������ ���� �Լ�
{
	Node * rpos = plist->cur;//Node * rpos�� plist->cur�� �ּҰ��� ���� (�ּҰ��� ������)
	LData rdata = rpos->data;//����ü ����rdata �� ���� = rpos->data���� �����Ѵ� (rdata�� rpos ��� data��, ��Ȳ�� ������ ���� �����ε�)

	plist->before->next = plist->cur->next;//plist->before->next�� plist->cur->next���� �����Ѵ� (�������� before�� �������� cur �������� ����, ��Ȳ�� �ι��ڸ� �����ѵ�)
	plist->cur = plist->before;//plist->cur�� plist->before���� �����Ѵ� (������ġ�� ����?)

	free(rpos);//�����Ҵ�����
	(plist->numOfData)--;//������ ���� 1 ����
	return rdata;//rdata���� ��ȯ�Ѵ� (rposdata�� ��, plist->cur�� ��)
}

int LCount(List * plist)//�������� ������ ����ϱ� ���� �Լ�
{
	return plist->numOfData;//�������� ������ ��ȯ�Ѵ�
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))//�Ű����� plist int�� ������ Ldata d1,d2�� ���޹޴� �Լ�
{
	plist->comp = comp;//plist�� ��� comp�� �Ű����� comp�� �����Ѵ�.(�ΰ�??)
}