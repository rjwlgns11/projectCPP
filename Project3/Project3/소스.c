#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


long filesizeof(FILE*fp)//���� ����ü �����͸� ���ڷ� ����
{
	long i,i2;
	i2 = ftell(fp);//��ġ ��� ���߽�
	fseek(fp, 0, SEEK_END);//���� ��ġ �����ڷ� ������ �� ������ �̵�
	i = ftell(fp);//i�� ������ �ǳ��� ������
	fseek(fp, i2, SEEK_SET);//���� ��ġ �����ڷ� ������ �� ó������ �̵� 
	
	return i;//������ ����Ʈ���� ��ȯ
}
int main(void)
{
	FILE* fp = fopen("mystory.txt", "rt");//�б� read , ���� write

	printf("%ld \n ", filesizeof(fp));//�Լ��� ���� ����ü �����͸� ���ڷ� ����,long�� ���� ���

	fclose(fp);//���� ����
	
	return 0;
}