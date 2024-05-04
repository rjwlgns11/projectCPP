#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct friend{
	char name[20];
	char sex;
	int age;
}friend;

int main(void)
{
	FILE* fp;
	friend my1;
	friend my2;
	
	/*** 바이너리 파일 쓰기 모드 ***/
	fp = fopen("friend.bin", "wb");
	scanf("%s %c %d", my1.name, &my1.sex, &my1.age);
	fwrite((void*)&my1, sizeof(my1), 1, fp);
	fclose(fp);
	
	/**** 바이너리 파일 읽기 모드 ****/
	fp = fopen("friend.bin", "rb");
	fread((void*)&my2, sizeof(my2), 1, fp);
	printf("%s %c %d \n", my2.name, my2.sex, my2.age);
	fclose(fp);
	
	return 0;

}