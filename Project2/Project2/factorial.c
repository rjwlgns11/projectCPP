#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int f(int n)
{
	if (n == 0)
		return 1;
	else
		return n*(n-1);
}

int main(void)
{

	int n;
	printf("���丮�� �Է�: ");
	scanf("%d" ,&n);
	printf("���丮��:%d \n", f(n));
	
	return 0;

}