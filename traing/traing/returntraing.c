#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int num);
void CollatzConjecture(int num);

int main()
{
	int a;
	printf("�ݶ��� ������ Ȯ���� ������ �Է��ϼ��� \n");
	scanf("%d",&a);
	CollatzConjecture(a);
	printf("10���� >>2���� ��ȯ�� Ȯ���� ������ �Է��ϼ��� \n");
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
	//0 or 1�� �ɶ� ���� 2�� ������ 		binary(num / 2);
	//�������� �������� �о� ���̸� �ϼ��̴�. 
	

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
