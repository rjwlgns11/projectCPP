#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[] = { 71, 79, 79, 68, 84, 73, 77, 69 };
	
	printf("%c%c%c%c %c%c%c%c", arr[0], arr[1], arr[1], arr[3], arr[4], arr[5], arr[6], arr[7]);
	
	return 0;

}