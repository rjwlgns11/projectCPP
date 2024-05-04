#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7,8 };
	int arr3[5] = { 1,2 };
	int a, b, c, i;

	a = sizeof(arr) / sizeof(int);
	b = sizeof(arr2) / sizeof(int);
	c = sizeof(arr3) / sizeof(int);

	for (i = 0; i < a; i++)
		printf("%d", arr[i]);
	printf("\n");

	for (i = 0; i < b; i++)
		printf("%d", arr2[i]);
	printf("\n");

	for (i = 0; i < c; i++)
		printf("%d", arr3[i]);
	printf("\n");

	return 0;
}