#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' }; //���� �迭 ��Ÿ�� �ʱ�ȭ
	int arrlen = sizeof(arr) / sizeof(char);//arreln�� 9(arr�� ũ��) /  1(char, �� 1����Ʈ 1) ���� 9�� (�̼����� �迭�� ���̸� ����ϴ� ������)
	int u;

	for (u = 0; u < arrlen; u++)
		printf("%c", arr[u]);
	printf("\n");
	return 0;

}