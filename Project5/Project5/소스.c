#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Hanoitawer(int n,char a,char b,char c, int count)//n은 원반,a.b.c는 기둥
{
	if (n == 1)
		printf("원반 1개를 %c에서 %c로 이동 \n", a,c);//123 
	else
	{
		Hanoitawer(n - 1, a, c,b ,count); // 132  132
		printf("원반 %d를 %c에서 %c로 이동 \n", n,a, c);
		Hanoitawer(n - 1, b, a, c,count);// 312 213
	}
}
	
int main()
{	
	int count=0;
	Hanoitawer(3, 'a', 'b','c',count);
	return 0;
}