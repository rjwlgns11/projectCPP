#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist)//초기화
{
	plist->head = (Node*)malloc(sizeof(Node));//구조체 포인터 동적할당
	plist->head->next = NULL;//구조체 포인터 변수 next는 null을 가리킨다
	plist->comp = NULL;//comp라는 이름의 포인터도 null값을 가리킨다
	plist->numOfData = 0;//데이터값 0으로 설정
}

void FInsert(List * plist, LData data)//최초의 입력을 위한 함수
{
	Node * newNode = (Node*)malloc(sizeof(Node));//노드형 포인터를 동적할당으로 초기화해주고있다  1
	newNode->data = data;//뉴노드의 멤버 데이터에 매개변수로 전달된 data를 대입한다   1-1

	newNode->next = plist->head->next;//멤버 넥스트에 매개변수로 전달된 헤드의 멤버 넥스트를 대입한다 1->2
	plist->head->next = newNode;//매개변수의 멤버 넥스트에 구조체 뉴노드의 주소값을 대입한다 2->1

	(plist->numOfData)++;//데이터 갯수 1 증가
}

void SInsert(List * plist, LData data)//이후의 데이터 입력을 위한 함수 2
{
	Node * newNode = (Node*)malloc(sizeof(Node));//노드형 포인터를 동적할당으로 초기화해주고있다 (다른 1)
	Node * pred = plist->head;//pred에 매개변수 리스트 멤버 헤드가 가리키는 주소값을 대입한다 (다른 1)
	newNode->data = data;//멤버 데이터에 매개변수로 전달된 데이터값을 대입한다 1-1

	while(pred->next != NULL &&
		plist->comp(data, pred->next->data) != 0)//반복문 pred 멤버 넥스트가 null값이 아니라면 그리고 plist 멤버 comp가 (데이터, pred -> next-> data)가 0이 아니라면 종료
	{
		pred = pred->next;//pred에 pred -> next가 가리키는 주소값을 대입한다 (다른 1-1)
	}

	newNode->next = pred->next;//newnode-> next에 pred->next의 주소값을 대입한다 (다른 1->2)
	pred->next = newNode;//pred->next에 newnode의 주소값을 대입한다 (다른 2->1)

	(plist->numOfData)++;//데이터 갯수 1 증가
}


void LInsert(List * plist, LData data)//데이터의 라인(?)을 변경하기위한 함수??
{
	if(plist->comp == NULL)//만약 plist의 멤버 comp가 null값이라면 (매개변수 멤버 comp의 값이 null이면)
		FInsert(plist, data);//finsert함수를 실행한다(매개변수 plist, 데이터값 전달)
	else//아니면
		SInsert(plist, data);//SInsert함수를 실행한다(매개변수 plist, 데이터값 전달)
}

int LFirst(List * plist, LData * pdata)//첫번째값 참조를 위한 함수
{
	if(plist->head->next == NULL)//만약 plist멤버 헤드의 멤버 next값이 null이라면 (다음 값을 지정해주는 멤버가 가리키는 값이 null이면,즉 아무것도 없거나 꽉찼으면)
		return FALSE;//FALSE를 반환한다

	plist->before = plist->head;// plist->before에 plist->head값을 대입한다(주소값?)(멤버 비포어(첫값 저장용?)을 헤드에 연결해)
	plist->cur = plist->head->next; //plist->cur에plist->head->next값을 대입한다 (위치값은 다음값을 가리킨다?)

	*pdata = plist->cur->data;// 매개변수 pdata에 plist의 멤버 cur의 멤버 data값을 대입한다 (매개변수는 next의 data다)
	return TRUE;//TRUE값 반환
}

int LNext(List * plist, LData * pdata)//이후의 데이터값 참조를 위한 함수
{
	if(plist->cur->next == NULL)//만약 plist->cur->next값이null이라면(다음 값을 지정해주는 멤버가 가리키는 값이 null이면,즉 아무것도 없거나 꽉찼으면)
		return FALSE;//FALSE 반환

	plist->before = plist->cur;//plist->before에 plist->cur값을 대입한다(멤버 비포어(첫값 저장용?)을 헤드에 연결해)
	plist->cur = plist->cur->next;//plist->cur에plist->cur->next의 값을 대입한다(위치값은 다음값을 가리킨다?)

	*pdata = plist->cur->data;//매개변수 *pdata에 plist->cur->data의 값을 대입한다(주소값?)(매개변수는 next의 data다)
	return TRUE;//TRUE 값 반환
}

LData LRemove(List * plist)//저장값 삭제를 위한 함수
{
	Node * rpos = plist->cur;//Node * rpos에 plist->cur의 주소값을 대입 (주소값을 대입해)
	LData rdata = rpos->data;//구조체 변수rdata 의 값에 = rpos->data값을 대입한다 (rdata는 rpos 멤버 data다, 정황상 삭제를 위한 변수인듯)

	plist->before->next = plist->cur->next;//plist->before->next에 plist->cur->next값을 대입한다 (다음값은 before의 다음값에 cur 다음값을 대입, 정황상 널문자를 대입한듯)
	plist->cur = plist->before;//plist->cur에 plist->before값을 대입한다 (현재위치의 수정?)

	free(rpos);//동적할당해제
	(plist->numOfData)--;//데이터 갯수 1 감소
	return rdata;//rdata값을 반환한다 (rposdata의 값, plist->cur의 값)
}

int LCount(List * plist)//데이터의 갯수를 출력하기 위한 함수
{
	return plist->numOfData;//데이터의 갯수를 반환한다
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))//매개변수 plist int형 포인터 Ldata d1,d2를 전달받는 함수
{
	plist->comp = comp;//plist의 멤버 comp에 매개변수 comp를 대입한다.(두개??)
}