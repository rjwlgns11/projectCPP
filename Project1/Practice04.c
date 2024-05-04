//#include "Header.h"
////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
//
////구매할 물건의 가격을 입력받고, 그 금액에 따라 할인율을 적용하는 프로그램을 구현합니다.
//
////할인율은 다음과 같습니다.
////10000원 이상  5%
////50000원 이상 10%
//// 
////출력 예시)
////구매하실 물건의 금액을 입력해주세요 >> 50000
////결제 금액은 45000원입니다.
//int main()
//{
//	int price;
//	printf("구매하실 물건의 금액을 입력해주세요 >> ");
//	scanf("%d", &price);
//	if (price >= 50000)
//	{
//		price = price - (price * 0.1);
//	}
//	else if (price >= 10000)
//	{
//		price = price - (price * 0.05);
//	}
//	printf("결제 금액은 %d입니다.\n", price);
//	return 0;
//}