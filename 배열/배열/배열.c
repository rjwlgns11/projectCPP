#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int a(int n)

{
	n = 0;
	int i;
	for (i = 0; i <= 5; i++)
	
		n += i;

	
	return n;

}



int main(void)
{
	int arr[5];
	int sum = 0;

	arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;

	sum += a(arr);
    printf("배열요소의 저장된값의 합:%d \n", a(arr));
	

	return 0;

}