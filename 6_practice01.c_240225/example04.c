//#include <stdio.h>
//
////연산자 (operator)
////연산할때 사용하는 기호 
//
////:L-R value(좌우 변수?)
//
////int a = 5;
////L value :a(사라지지 않고 남아있는 변수)
////R value : 5;(값을 적용후 사라지는 임시변수) (그냥 값)
//
//
//
//
//
//int main()
//{
//	int a = 5;
//	int b = 7;
//
//	//산술 연산 (arithmatic)
//	//기본적인 사칙연산 작업에 사용되는 연산자 (+-/%*)
//	//+,-,*,/,%
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%dx%d=%d\n", a, b, a * b);//곱
//	printf("%d/%d=%d\n", a, b, a / b);
//	printf("%d%%%d=%d\n", a, b, a % b);//나머지
//
//
//
//
//    //연습문제;
//	//사용자는 27600원을 가지고 있다
//	//사용자는 아래의 계산표를 통해 돈을 코인으로 환전하려한다
//	//a: 10000 b: 5000 c: 1000 d:500 e: 100
//	
//	int user_money = 27600;
//	int A, B, C, D, E;//값이 초기화되지 않은 상태
//
//	A = user_money / 10000;//A = 2 (이하생략)
//	printf("A:%d\n", A);
//    printf("금액 :%d \n", user_money);
//	user_money = user_money % 10000;
//
//	B = user_money / 5000;
//	printf("b:%d\n",B);
//	user_money = user_money % 5000;
//	printf("금액 :%d \n", user_money);
//
//
//	C = user_money / 1000;
//	printf("C:%d\n", C);
//	user_money = user_money % 1000;
//	printf("금액 :%d \n", user_money);
//
//	D = user_money / 500;
//	printf("D:%d\n", D);
//	user_money = user_money % 500;
//	printf("금액 :%d \n", user_money);
//
//	E = user_money / 100;
//	printf("E:%d\n", E);
//	user_money = user_money % 100;
//	printf("금액 :%d \n", user_money);
//
//
//
//	return 0;
//}