#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Hanoitawer(int n,char a,char b,char c, int count)//n�� ����,a.b.c�� ���
{
	if (n == 1)
		printf("���� 1���� %c���� %c�� �̵� \n", a,c);//123 
	else
	{
		Hanoitawer(n - 1, a, c,b ,count); // 132  132
		printf("���� %d�� %c���� %c�� �̵� \n", n,a, c);
		Hanoitawer(n - 1, b, a, c,count);// 312 213
	}
}
	
int main()
{	
	int count=0;
	Hanoitawer(3, 'a', 'b','c',count);
	return 0;
}