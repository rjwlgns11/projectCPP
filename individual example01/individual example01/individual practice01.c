#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int year;
    printf("������ �Է��ϼ���\n");
    scanf("%d", &year);
    if (year % 400==0){//������ ���� 400�� ����� �����̴�
        printf("1\n");
    }
    else if(year%100==0 &&year % 4==0)//100�� ����� �ƴ�, �Ǵ� 4�� ����ϰ��
    {
        printf("0\n");
    }
    else if (year % 4==0)//4�� ����ϰ��
    {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}