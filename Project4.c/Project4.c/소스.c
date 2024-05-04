#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
int seosic(void)
{
	FILE* fp = fopen("c언어 정보 저장문서.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}

	fputs("서식문자 관련 \n", fp);
	fputs("\n", fp);
	fputs("%d = 부호있는 10진수 정수 출력 (int,short,char) \n", fp);
	fputs("%ld = 부호있는 10진수 정수 출력 (long) \n", fp);
	fputs("%lld = 부호있는 10진수 정수 출력 (long long) \n", fp);
	fputs("%u = 부호없는 10진수단위 정수 출력(unsigned int) \n", fp);
	fputs("%x = 부호없는 16진수 정수 출력 (unsigned int) \n", fp);
	fputs("%f = 10진수 방식의 부동 소수점 풀력, (long) scanf함수기준 = 실수를 입력받는다 \n", fp);
	fputs("%lf = 10진수 방식의 부동소수점 출력 (long double) \n", fp);
	fputs("%e, %E = e 또는 E 방식의 부동소수점 실수 출력 (float, long double) \n", fp);
	fputs("%g, %G = 값에 따라 %f와 %e 사이에서 선택 (float, double) \n", fp);
	fputs("%c = 아스키 코드값 출력 \n", fp);
	fputs("%s = 문자열 단위 출력 (배열,문자열) \n", fp);
	fputs("%p = 포인터의 주소값 \n", fp);
	fclose(fp);
	return 0;
}
int sansul(void)
{
    FILE* fp = fopen("c언어 정보 저장문서.txt", "at");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	fputs("\n",fp);
	fputs("산술연산자 \n", fp);
	fputs("\n", fp);
	fputs("대입연산자(=) 오른쪽에 있는값을 왼쪽에 대입시킨다. \n", fp);
	fputs("덧셈 뺄셈(+,-) \n", fp);
	fputs("곱셈 나눗셈(*,/)\n", fp);
	fputs("나머지값 반환 연산자(%) 왼쪽의 피연산자값을 오른쪽의 피연산자값으로 나눴을때 얻게되는 나머지를 반환한다 \n", fp);
	fputs("\n",fp);
	fputs("복합  대입 연산자 \n", fp);
	fputs("\n", fp);
	fputs("*= 곱한뒤 대입\n", fp);
	fputs("/= 나눈뒤 대입\n", fp);
	fputs("%= 나머지를 대입?\n", fp);
	fputs("+= 더한뒤 대입\n", fp);
	fputs("-= 뺀뒤 대입\n", fp);
	fputs("<<=,>>= 비트열을 왼,오른쪽으로 이동시킨후 대입 \n", fp);
	fputs("&= 비트단위 and 연산후 대입(두개의 비트가 모두 1일때 1을 반환) \n", fp);
	fputs("|= 비트단위 or 연산후 대입(두개의 비트중 하나라도 1일경우 1을 반환) \n", fp);
	fputs("^= 비트단위 xor 연산후 대입(두개의 비트가 서로 다른경우 1반환) \n", fp);
	fclose(fp);
	return 0;

}
int beat(void)
{
	FILE* fp = fopen("c언어 정보 저장문서.txt", "at");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}

	fputs("비트 연산자 \n",fp);
	fputs("\n", fp);
	fputs("& 비트단위로 and 연산을 한다(두 비트가 모두 1이어야 1반환) \n", fp);
	fputs("| 비트단위로 or 연산을 한다(두 비트중 하나라도 1이면 1반환) \n", fp);
	fputs("^ 비트단위로 xor 연산을 한다(두 비트가 다르면 1반환) \n", fp);
	fputs("~ 피연산자의 모든 비트를 반전시킨다 \n", fp);
	fputs("<< 피연산자의 비트를 왼쪽으로 이동시킨다(이때의 결과값은 컴파일러마다 다름) \n", fp);
	fputs(">> 피연산자의 비트를 오른쪽으로 이동시킨다(이때의 결과값은 컴파일러마다 다름) \n", fp);
	fputs("\n", fp);
	fclose(fp);
	return 0;
	
}
int datetype(void)
{
	FILE* fp = fopen("c언어 정보 저장문서.txt", "at");
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	fputs("데이터 자료형 \n", fp);
	fputs("\n", fp);
	fputs("int = 4바이트 정수\n", fp);
	fputs("short = 2바이트 정수 \n", fp);
	fputs("char = 1바이트 정수(주로 문자의 저장에 이용) \n", fp);
	fputs("long = 4바이트 정수 \n", fp);
	fputs("long long = 8바이트 정수 \n", fp);
	fputs("float = 4바이트 실수 \n", fp);
	fputs("double = 8바이트 실수 \n", fp);
	fputs("long double = 8바이트 이상 실수 (double 이상의 표현범위) \n", fp);
	fputs("\n", fp);
	fputs("음수의 표현을 허용하지 않는 자료형 \n", fp);
	fputs("unsigned \" 음수의 표현을 허용하지않는 키워드\"\n", fp);
	fclose(fp);

	return 0;
}

int main(void)
{
	seosic();
	sansul();
	beat();
	datetype();
	
	return 0;
}





