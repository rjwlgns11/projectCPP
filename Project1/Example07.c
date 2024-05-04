//#include "Header.h"
//
////분기문 switch
//
////switch (변수명)
////{
////case 값 :
////	실행할 명령문;
////	break;
////case 값2 :
////	....
////default :
////	위에 작성한 case에 해당하지 않는 모든 상황에 처리할 명령문
////}
//
////switch문은 if문과 비슷한 구조를 가지고 있습니다.
////if문과 다르게 한 {} 내에서 모든 경우를 체크하고 있어 가독성이 더 좋습니다.
////단 if문처럼 세세한 조건을 표현하기는 어렵습니다.(주로 선택지 등에서 사용)
//
////게임 프로그래밍 분야에서 많이 사용되는 기능
////콘솔 키보드 입력 작업 , 키오스크 메뉴 선택 기능 구현
//
//
//#include <windows.h> //윈도우에서 제공하는 기능들을 사용할 수 있습니다.
//int main()
//{
//	
//	//메뉴 선택
//	int select;
//	printf("1. START 2. OPTION 3. EXIT\n");
//	scanf("%d", &select);
//	
//	//스위치문 작성
//	switch (select)
//	{
//	case 1 :
//		//콘솔 텍스트 색을 변경하는 코드		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //빨간색
//		printf("START PROGRAM\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //흰색
//		break; //break를 작성하지 않을 경우 다음 case의 작업을 진행하기 됩니다.
//	case 2:
//		//콘솔 텍스트 색을 변경하는 코드		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); //청록색
//		printf("OPTION SELECT\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //흰색
//		break; //break를 작성하지 않을 경우 다음 case의 작업을 진행하기 됩니다.
//	case 3:
//		//콘솔 텍스트 색을 변경하는 코드		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); //노란색
//		printf("PROGRAM EXIT\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //흰색
//		exit(0); //프로그램을 종료합니다.
//		break; //break를 작성하지 않을 경우 다음 case의 작업을 진행하기 됩니다.
//	default :
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //녹색
//		printf("없는 기능입니다.\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //흰색
//	}
//
//
//	return 0;
//}