#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagnode
{
	ElementType data;// ����� ��ȣ
	struct tagnode* nextnode;//���� ��带 ����ų �ؽ�Ʈ��� ������ �̰� ������ ����Ʈ��°� ��ü�� ������ �ȵ�

}node;

//�Լ� ���� ����

node* SLL_CreateNode(ElementType Newdata);//��� �����
void SLL_DestroyNode(node* node);//��� �ı�
void SLL_AppendNode(node** Head, node* Newnode);//��� �߰� 
void SLL_InsertAfter(node* current, node* newnode);//��� ����
void SLL_InsertNewNode(node** Head, node* Newnode);
void SLL_RemoveNode(node** Head, node* remove);//��� (����Ʈ����)����
node* SLL_GetNodeAt(node* head, int location);//��� ����?
int SLL_GetNodeCount(node* head);//��� ���� �ľ� �Լ�
void SLL_InsertBefore(node **head, node *current, node *newnode);//����Ʈ�� -1���� �� ��� ����
void SLL_DestroyAllnode(node** head);//��� ��� �ı� �Լ�




#endif