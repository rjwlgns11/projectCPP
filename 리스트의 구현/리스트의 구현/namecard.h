#ifndef _NAMECARD_H_
#define _NAMECARD_H_

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct _namecard{

	char name[NAME_LEN];
	char phone[PHONE_LEN];

}namecard;




namecard* makenamecard(char* name, char* phone);

void shownamecharinfo(namecard* pcard);

int namecompare(namecard* pcard, char* name);

void Changephonenum(namecard* pcard, char* phonenum);

#endif