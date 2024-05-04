#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"


namecard* makenamecard(char* name, char* phone)//매개변슈로 이름과 전화번호를 받음 char형 배열로
{
	namecard* Card = (namecard*)malloc(sizeof(namecard));
	
	strcpy(Card->name,name);//card->name에 매개변수 name 대입(문자열은 단순 대입이 안된다!!)
	strcpy(Card->phone , phone);//card->phone에 매개변수 phone 대입

	return Card;//card의 주소값 반환

}

void shownamecharinfo(namecard* pcard)
{
	printf("%s \n", pcard->name);//출력
	printf("%s \n", pcard->phone);//출력
}

int namecompare(namecard* pcard, char* name)
{
	return strcmp(pcard->name,name);//비교후 동일하면 0을 아닐경우 null을 반환
}
void Changephonenum(namecard* pcard, char* phonenum)
{
	strcpy(pcard->phone, phonenum);//매개변수를 구조체 멤버에 대입한다
}
