#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagnode
{
	ElementType data;// 노드의 번호
	struct tagnode* nextnode;//다음 노드를 가리킬 넥스트노드 포인터 이거 없으면 리스트라는것 자체가 성립이 안됨

}node;

//함수 원형 선언

node* SLL_CreateNode(ElementType Newdata);//노드 만들기
void SLL_DestroyNode(node* node);//노드 파괴
void SLL_AppendNode(node** Head, node* Newnode);//노드 추가 
void SLL_InsertAfter(node* current, node* newnode);//노드 제거
void SLL_InsertNewNode(node** Head, node* Newnode);
void SLL_RemoveNode(node** Head, node* remove);//노드 (리스트에서)삭제
node* SLL_GetNodeAt(node* head, int location);//노드 삽입?
int SLL_GetNodeCount(node* head);//노드 길이 파악 함수
void SLL_InsertBefore(node **head, node *current, node *newnode);//리스트의 -1값에 새 노드 삽입
void SLL_DestroyAllnode(node** head);//모든 노드 파괴 함수




#endif