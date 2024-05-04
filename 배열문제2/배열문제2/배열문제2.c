#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' }; //문자 배열 굿타임 초기화
	int arrlen = sizeof(arr) / sizeof(char);//arreln은 9(arr의 크기) /  1(char, 즉 1바이트 1) 값은 9임 (이수식은 배열의 길이를 계산하는 수식임)
	int u;

	for (u = 0; u < arrlen; u++)
		printf("%c", arr[u]);
	printf("\n");
	return 0;

}