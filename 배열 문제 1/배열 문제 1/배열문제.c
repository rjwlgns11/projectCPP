#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5];
	int a, b=5, result=0;
	

	printf("�迭�� �����Է�: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (a = 0; a < b; a++)
	{
		
		result = result < arr[a] ? arr[a] : result;
	}
	printf("�ִ밪:%d", result);
		
	for (a = 0; a < b; a++)
	{
		result = result > arr[a] ? arr[a] : result;
	}
	printf("�ּҰ�:%d", result);

	result = 0;

	for (a = 0; a < b; a++)
		result += arr[a];
	
	printf("�ջ�:%d", result);
	return 0;

}