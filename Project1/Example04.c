//#include <stdio.h>
//
////연산자(operator)
////연산할 때 사용하는 기호
//
//// l-r value
//// int a = 5;
//// l-value : a (사라지지 않고 남아있는 변수)
//// r-value : 5 (값을 적용 후 사라지는 임시 변수) (그냥 값)
//
//int main()
//{
//	int a = 5; //정수형 변수 a에 5의 값을 초기화합니다.
//	int b = 7;
//
//	//산술 연산(arithmetic)
//	//기본적인 사칙연산 작업에 사용되는 연산자
//	// + , - , *(곱하기), / , %(나머지 값)
//	printf("%d + %d = %d\n",a,b,a+b);
//	printf("%d - %d = %d\n",a,b,a-b);
//	printf("%d * %d = %d\n",a,b,a*b);
//	printf("%d / %d = %d\n",a,b,a/b);
//	printf("%d %% %d = %d\n",a,b,a%b);
//
//	//연습 문제
//	//사용자는 27600원을 가지고 있습니다.
//	//사용자는 아래의 계산표를 통해 돈을 코인으로 환전하려합니다.
//	//A : 10000원 B : 5000원 C : 1000원 D : 500원 E : 100원
//
//	int user_money = 27600;
//	int A, B, C, D, E;
//
//	printf("금액 : %d원\n", user_money);
//	A = user_money / 10000;
//	printf("A : %d\n", A);
//	user_money = user_money % 10000;
//	printf("금액 : %d원\n", user_money);
//	
//	B = user_money / 5000;
//	printf("B : %d\n", B);
//	user_money = user_money % 5000;
//	printf("금액 : %d원\n", user_money);
//
//	C = user_money / 1000;
//	printf("C : %d\n", C);
//	user_money = user_money % 1000;
//	printf("금액 : %d원\n", user_money);
//
//	D = user_money / 500;
//	printf("D : %d\n", D);
//	user_money = user_money % 500;
//	printf("금액 : %d원\n", user_money);
//
//	E = user_money / 100;
//	printf("E : %d\n", E);
//	user_money = user_money % 100;
//	printf("금액 : %d원\n", user_money);
//
//	return 0;
//}