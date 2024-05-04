//#include "Header.h"
////구매할 물건의 가격을 입력받고 그 금액에 따라 할인율을 적용하는 프로그램 작성
////할인율을 다음과 같다
////10000원 이상 5%
////5만 이상 10%
//int main() 
//{
//	int price, sale;
//	printf("가격을 입력하세요\n");
//	scanf("%d", &price);
//	if (price >= 10000 && price <= 49999)
//	{
//		sale = price / 20;
//		price -=sale;
//		printf("할인된 가격>>>%d\n",price);
//
//	}
//	else if (price >= 50000)
//	{
//		sale = price / 10;
//		price -= sale;
//		printf("할인된 가격>>>%d\n", price);
//
//	}
//	else {
//		printf("할인이 적용되지 않습니다\n");
//	}
//	return 0;
//
//}
////ex 답안
//
///*int price, sale;
//printf("가격을 입력하세요\n");
//scanf("%d", &price);
//
//if (price >= 50000)
//	{
//		price = price-(price*0.1);
//
//	}
//
//else if(price>=10000)
//{
//        price = price-(price*0.05);
//}
//
//        printf("할인된 가격>>>%d\n", price")
//}
//
//만원을 먼저 적용할경우 더 큰 문장을 적용하기 위해 문장이 낭비될수있음;
//
//*/