#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int num);
void CollatzConjecture(int num);

int main()
{
	int a;
	printf("콜라즈 추측을 확인할 정수를 입력하세요 \n");
	scanf("%d",&a);
	CollatzConjecture(a);
	printf("10진수 >>2진수 변환을 확인할 정수를 입력하세요 \n");
	scanf("%d", &a);
	binary(a);
	printf("\n");
	return 0;
}

void binary(int num)
{

	if (num == 1||num==0)
	{
		printf("%d", num);
		
	}
	else
	{
		binary(num/2);
		printf("%d", num % 2);
	}
	//0 or 1이 될때 까지 2로 나눈다 		binary(num / 2);
	//나머지를 역순으로 읽어 들이면 완성이다. 
	

}

void CollatzConjecture(int num)
{
	if (num % 2 == 0)
	{
		printf("%d\n", num);
		CollatzConjecture(num / 2);

	}
	else if(num==1)
	{
		printf("%d\n", num);
		
	}
	else
	{
		printf("%d\n", num);
		CollatzConjecture(num *3+1);

	}
}
