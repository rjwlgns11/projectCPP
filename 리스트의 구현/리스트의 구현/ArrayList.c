#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
	(plist->numOfData) = 0;//데이터 저장값 0
	(plist->curPosition) = -1;//현재 저장된값 없음
}

void LInsert(List* plist, LData data)
{
	if (plist-> numOfData >LIST_LEN)//구조체 멤버 numofdata의 값이 100보다 커지면
	{
		puts("저장공간이 부족합니다.");
		return;
	}
	
	plist->arr[plist->numOfData] = data;//arr[numofdata](현재 인덱스에 데이터값 저장)
	(plist->numOfData)++;//인덱스 값 증가
	
}
int LFirst(List* plist, LData *pdata)
{
	if (plist->arr[plist->numOfData] == 0)// 만약 arr[numofdata]의 값이 == 0이면
	{
		return FALSE;//FALSE를 반환한다
	}
	(plist->curPosition) = 0;//현재 포지션(리스트)이 증가한다(-1 -> 0)
	*pdata = plist->arr[0]; //데이터의 값이 배열의 첫번째 값과 동일하면
	return TRUE;//0반환
	
}
int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >=(plist->numOfData)-1)//위치 저장 값이 데이터 저장값과 같거나 크면
	{
		return FALSE;
	}
	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}
LData LRemove(List * plist)
{
	int rpos = plist->curPosition;//좌표값
	int num = plist->numOfData;//데이터 값
	int i;
	LData rdata = plist->arr[rpos];//데이터값은 arr[rpos]값
	for (i = rpos; i < num-1; i++)//i가 num-1보다 커지면 종료
	{
		plist->arr[i] = plist->arr[i + 1];
	}
	(plist->curPosition)--;//좌표값 -1
	(plist->numOfData)--;//데이터값 -1
	return rdata;//삭제된 데이터는 반환된다
}
int LCount(List * plist)
{
	return plist->numOfData;
}