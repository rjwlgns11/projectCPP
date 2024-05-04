#include <stdio.h>
//stdio.h는 c언어에서 입력(input) 과 풀력(output)의 기능을 사용하기위해 추가해야하는 헤더 파일임;
//할수 있는 기능
//1.파일에 대한작업(파일이름변경 파일열기 파일닫기 삭제..)
//2.형식이 정해진 입력과 출력 (printf scanf등등)

//변수(variable) : 하나의 데이터를 사용자가 이름 붙여 저장하는 저장공간;

//변수를 만드는 방법
//자료형 변수명 (ex:int num) (변수선언)

//자료형(type) : 컴퓨터가 데이터를 판단하는 기준이며 방법;
//자료형의 종류
/*
프로그램에서 사용하는 단위중 데이터 크기의 가장 작은단위는 bit (작은 방이라고 생각하자)
1byte = 8bit

자료형의 이름   크기(byte)     값의 표현 범위           표현하는 형태 
char           1byte              -128~127                 문자 1개
int            4           -2,147,483,648 ~ 2147483647      정수
float          4          소숫점 6자리까지 정확하게 표현    실수

*/

//변수에 값 적용하기 (초기화 : initialize);
//변수명 = 값;

//문장안에서 데이터를 확인하는 방법
//서식 지정자(format specifier) 
/*
%d  10진수 정수 decimal
%o  8진수  정수 octal
%x  16진수 정수 hexadecimal
%f         실수 float(부동 소수점)
%e         실수 exponent (지수표기법)
%c         문자 1개   character
%s         문장(문자열) string
%p  16진수 8자리 poinrter
%%  -      %를 출력하고 싶을때  
*/


//int main()
//{
//	int gold;//값 안들어감;
//	gold = 1000;//변수의 초기화;
//
//	//변수 출력
//	printf("골드: %d \n", gold);//
//	
//	//서식 지정자 형태에 따라 출력
//	int number = -10;
//	unsigned int unumber = 20;//음수없는 10진수
//	//unsigned가붙는경우 음수에 대한 표현을 하지않는다;
//	//음수로 표현할수있는데이터가 -2,147,483,648 ~ 2,147,483,647 라면;
//	//unsigned int가 표현할수있는 데이터는 0 ~ 4,294,967 295가 된다;
//	printf("10진수 : %d \n", number);//10진수 정수
//	printf("8진수 : %o \n", number);//8진수 정수
//	printf("16진수 : %x\n", number);//16진수 정수
//
//	printf("10진수 : %d \n", unumber);//음수없는 정수
//	printf("8진수 : %o \n", unumber);//음수없는 정수
//	printf("16진수 : %x\n", unumber);//음수없는 정수
//	return 0;//함수 종료;
//}