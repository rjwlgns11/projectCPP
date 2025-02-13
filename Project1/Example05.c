//#include "Header.h"
////제어문
////사용자가 프로그램의 작업 흐름을 제어하기 위해 사용하는 키워드
//
////제어문의 종류
////1. 조건문 : 특정 조건에 따라 실행할지 말지를 판단해 명령을 처리합니다.
////2. 반복문 : 특정 조건 , 특정 횟수만큼 반복적으로 명령을 처리합니다.
////3. 기타 제어문 : 특정 상황, 시점에 흐름을 제어합니다.
//
//
////조건문 if
////if (조건식)
////{
////	조건식이 만족할 때 실행할 명령문;
////}
////else if (조건식2)
////{
////	조건식이 만족하지 않고, 조건식2가 만족할 때 실행할 명령문;
////}
////else
////{
////	위에서 설계한 모든 조건식이 만족하지 않을 때 실행할 명령문;
////}
//
////조건식 if와 같이 사용되는 연산자(비교 연산자)
//// 여기서 a와 b는 변수, 값을 의미합니다. 비교는 항상 a를 기준으로)
//// a > b  , a < b , a >= b, a <= b  
//// (초과 , 미만 , 이상 , 이하)
//
//// a == b ( a와 b가 같을 경우)
//// a != b ( a와 b가 서로 다를 경우)
//
//int main()
//{
//	//현재 사용자가 가지고 있는 금액은 13600원입니다.
//	//사용자가 사려는 물건의 가격은 21700원입니다.
//	//사용자가 물건을 구매할 수 있는지 없는지를 프로그램 코드로 작성합니다.
//	
//	//설계 순서
//	//1) 조건을 세우기 위해 필요한 변수들을 만들어줍니다.(초기식 생성)
//	int money = 13600;
//	int price = 21700;
//	
//	//2) 조건식을 넣어서 if문 도입부에 넣어줍니다.
//	if (money < price)
//	{
//		//실행할 명령문을 작성합니다.
//		printf("물건을 구매할 수 없습니다.\n");
//	}
//	else //위에서 작성한 if문의 결과가 참(true)이 아닌 경우
//	{
//		printf("물건을 구매할 수 있습니다.\n");
//	}
//
//
//	//입력문을 이용해서 메뉴를 선택하는 프로그램을 설계합니다.
//	
//	//설계 순서 1. 입력에 필요한 변수를 만들고 scanf를 통해 입력을 진행합니다.
//	int select;
//	printf("메뉴를 선택해주세요 1. 짜장면 2. 짬뽕 (그 이외에는 전부 볶음밥) >> ");
//	scanf("%d", &select);
//
//	//설계 순서 2. 입력 후 조건문을 통해 기능을 처리합니다.
//	
//	if (select == 1)
//	{
//		printf("오늘의 메뉴는 짜장면입니다.\n");
//	}
//	else if (select == 2) //위에 있는 if문이 거짓인 상태에서 새로운 조건을 체크하는 기능
//	{
//		printf("오늘의 메뉴는 짬뽕입니다.\n");
//	}
//	else
//	{
//		printf("오늘의 메뉴는 볶음밥입니다.\n");
//	}
//
//	//조건이 여러 개인 경우
//	//1) A and B (식 A와 식 B가 모두 만족하는 경우)
//	int number;
//	printf("숫자를 입력해주세요 >> ");
//	scanf("%d", &number);
//	
//	//A && B는 식 A와 식 B의 결과가 모두 만족하는 경우를 참으로 보는 연산자입니다. 
//	if (number < 10 && number % 2 == 0)
//	{
//		printf("조건 1) number = %d\n", number);
//	}
//
//	//2) A or B (식 A 또는 식 B 중 하나라도 만족하는 경우)
//	if (number == 0 || number < 0)
//	{
//		printf("조건 2) number = %d\n", number);
//	}
//
//	//if문 사용 시 팁)
//	//if문을 여러 개 작성하는 경우 각각의 if문을 전부 확인합니다.
//	//if문 다음이 else if인 경우에는 if문이 처리되면 else if는 처리하지 않습니다.
//	//if문 도입부에 세미콜론(;)을 작성하지 않습니다.
//
//	return 0;
//} 