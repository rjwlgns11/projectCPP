#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int year;
    printf("연도를 입력하세요\n");
    scanf("%d", &year);
    if (year % 400==0){//절대적 조건 400의 배수는 윤년이다
        printf("1\n");
    }
    else if(year%100==0 &&year % 4==0)//100의 배수가 아닌, 또는 4의 배수일경우
    {
        printf("0\n");
    }
    else if (year % 4==0)//4의 배수일경우
    {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}