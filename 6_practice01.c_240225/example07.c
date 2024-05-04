//#include "Header.h"
//#include <windows.h>//윈도우에서 제공하는 기능을 사용할수있음
////분기문 switch
///*
//    
//	switch(변수명)//여기에 연산 안들어간다!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	case 값1 : //여기에 연산 안들어간다!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	   실행할 명령문 ;
//	   break;
//    case 값2 : 
//	   실행할 명령문 ;
//	   break;
//	default
//	   위에 작성한 case에 해당하지 않는 모든 상황에 처리할 명령문
//
//
//switch문은 if문과 비슷한 구조를 가지고있다.
//if와 다르게 한 {}내에서 모든 경우를 체크하고 있어 가독성이 더 좋다.
//단 if와 다르게 세세한 조건을 표현하기는 어렵다.(주로 선택지 등에서 사용)
////게임 프로그래밍 분야에서 많이 사용되는 기능
////콘솔 키보드 입력 작업, 키오스크 메뉴선택기능 구현등 
//*/
//
//int main()
//{
//	int select;
//	printf("1.start 2.option 3.exit\n");
//	scanf("%d", &select);
//
//	switch (select)
//	{
//	 case 1:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
//		 printf("Start Program\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 break;
//
//	 case 2:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
//		 printf("Option select\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 break;
//	 case 3:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
//		 printf("Program Exit\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 exit(0);//프로그램을 종료함
//		 break;
//
//	 default:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
//		 printf("없는 기능입니다.\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 exit(0);
//	}
//
//
//
//	return 0;
//}