//#include "Header.h"
//#include <Windows.h>
//
////void 함수 만들기 + 매개 변수 작성
////매개 변수는 함수를 호출할 때 넣어줄 값에 대한 표현
//void textColor(int color_number)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
//}
//
//
////void 함수 만들기
////void는 빈 데이터 타입을 의미합니다.
////사용만 하고 버리는 용도입니다.
//void Title()
//{
//	textColor(10); //녹색
//	printf("CAFE");
//	textColor(9); // 파란색 
//	printf("PROGRAM");
//	textColor(15); //흰색
//	printf("1. 물건 구매\n");
//	printf("2. 프로그램 종료\n");
//}
////데이터 형태가 있는 함수 만들기
////return을 작성해 결과물을 전달하는 용도입니다.
//int Input()
//{
//	int data;
//	scanf("%d", &data);
//	return data;
//}
//
//
//
//
//int main()
//{
//	system("title MyKiosk");
//	system("mode con cols=60 lines=30"); //cols (가로) line(세로) 크기 설정
//
//	//무한 반복 코드
//	while (1)
//	{
//		Title(); //함수 호출
//		//int select = Input();
//		switch (Input())
//		{
//		case 1 :
//			printf("1. 커피 2. 에이드 3. 생과일 주스\n"); break;
//		case 2 :
//			printf("프로그램을 종료하겠습니다.\n");
//			exit(0);
//		}
//	
//	}
//
//
//
//	return 0;
//}