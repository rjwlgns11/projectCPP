//#include "Header.h"
////반복문 while 
////조건에 따라 반복 횟수를 결정하는 경우에 많이 사용됨
////반복횟수가 정해져 있지 않을경우 많이 사용됨 
//
///*/int
//
//    초기식;
//	while (조건식)
//	{
//		조건식이 만족하는동안 실행할 명령문;
//
//	}
//*/
//
////for문
//
//int main() 
//{
//	int num = 1;
//	while (num < 10)
//	{
//		printf("%d\n", num);
//		num++;
//	}
////while문 설계시 주의 사항
//	//while 문 내부에서 작업라는 명령문 중에서 조건을 바꿀 명령이 없다면 무한으로 실행된다.(infinity loop)
//	
//	//while (num < 10)
//	//{
//		//printf("%d\n", num);
//		// break는 반복문을 종료하는 명령문.
//	//}//조건이 만족하지 않기에 영원히 작동된다.()
//
//	//while문 내부에서 사용되는 제어문
//    //1.break : 반복명령을 종료함]
//	//2.continue:반복문을 종료하지 않고 해당 부분을 건너 뛴다. continue 아래에 설계된 코드는 생략된다
//	num = 1;
//	while (num <11)
//	{
//		printf("%d ", num);
//		num++;
//		if (num % 2 == 1)
//		{ 
//			continue;//이 시점부터 모든 반복문 내의 문장을 건너 뛴다
//			printf("해당문장은 실행되지 않는다 \n");
//
//		}
//	
//	
//	}
//	printf("반복문 탈출\n");
//
//	
//
//
//	return 0;
//}