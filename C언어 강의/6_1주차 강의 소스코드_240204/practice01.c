#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//1�� ����
	int num1, num2;
	num1 = 1, num2 = 5;
	printf("\"Welcome to c programming!\"\n");

	printf("'a'�� %d�̰� 'n'�� %d�϶� a+b=%d�̾�!\n",num1,num2,num1+num2);
	
	//2�� ����
	//1 ���� ���� ���� ������ �������.������ ���
	//2 �ؾ��ϴ� �۾� ���� ���� ������������� �Է�
	//3 ���������� ������� ���
	//4 ���������� ����� ���
	int kor, eng, mat;//����,����� �������� �������� ���� ���������.
	
	printf("���� ���� ���� ������ ������� �Է�");
    scanf("%d %d %d", &kor, &eng, &mat);
	printf("��������:%d\n��������:%d\n��������:%d\n", kor, eng, mat);

	//���� ���
	int total = kor + eng + mat;
	float avg = (float)total / 3;
	printf("���� ���� ������ �ջ� %d \n",total);
	printf("������ ��� ���� %.2f\n", avg);

	return 0;
}