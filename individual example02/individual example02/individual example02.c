#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char a;
	scanf("%c",&a);

	if (a >= 'a' && a <= 'z') {
		a -= 32;
		
	}
	else if(a >= 'A' && a <= 'Z') {
		a += 32;
	}
	else {
		printf("올바른 값이 아닙니다\n");
	}
	printf("%c\n", a);

	return 0;
}