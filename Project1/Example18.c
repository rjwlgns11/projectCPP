//#include "Header.h"
//
////포인터와 함수
////함수를 사용할 때, 포인터가 필요한 경우가 존재합니다.
//
////1. Call by value(값에 의한 호출)
////함수가 호출될 때 복사본 parameter가 전달됩니다.
////parameter는 함수 호출 종료 시 삭제되기 때문에 원본이 변하지 않습니다.
//
////2. 함수가 호출될 때 원본에 값이 변화를 주고 싶은 경우(Call by value가 가지는 문제를 해결하고 싶을 경우)
////Call by reference(참조에 의한 호출)
////parameter가 함수 호출 종료 시 삭제되지만, 변수의 실제 위치에 전달했기 때문에 원본에 변화가 오게됩니다.
//
//void Method01(int value)
//{
//	value = 1;
//}
//
//void Method02(int* value)
//{
//	*value = 1;
//}
//
////연습문제 int 타입의 매개변수 2개를 가지는 함수 swap을 호출할 경우
////전달한 값이 서로 교환됩니다. Swap을 구현하시오. (함수의 리턴 타입은 void)
//
////a = 10
////b = 5
//// swap 함수에 a와 b를 순서대로 넣고 호출
////a = 5
////b = 10
//
//void Swap(int* a, int* b)
//{
//	int temp;
//	temp = *a; //변수에 포인터 값을 전달할 경우 a에 *을 붙여서 주소로부터 값을 받아옵니다.(참조 연산자)
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int data = 2;
//	Method01(data);
//	printf("%d\n", data);
//	Method02(&data); //함수의 매개변수가 포인터일 경우에는 인자 값으로 주소값이 들어가게 됩니다.
//	printf("%d\n", data);
//
//	int a = 10;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a,&b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}