#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


long filesizeof(FILE*fp)//파일 구조체 포인터를 인자로 받음
{
	long i,i2;
	i2 = ftell(fp);//위치 백업 안했슴
	fseek(fp, 0, SEEK_END);//파일 위치 지시자로 파일의 맨 끝으로 이동
	i = ftell(fp);//i는 파일의 맨끝을 저장함
	fseek(fp, i2, SEEK_SET);//파일 위치 지시자로 파일의 맨 처음으로 이동 
	
	return i;//파일의 바이트값을 반환
}
int main(void)
{
	FILE* fp = fopen("mystory.txt", "rt");//읽기 read , 쓰기 write

	printf("%ld \n ", filesizeof(fp));//함수에 파일 구조체 포인터를 인자로 전달,long형 으로 출력

	fclose(fp);//파일 종료
	
	return 0;
}