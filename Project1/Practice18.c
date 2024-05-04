//#include "Header.h"
//#include "Random.h"
//
////연습문제) 0부터 9까지의 범위의 수를 랜덤으로 100번 생성해,
////가장 많이 생성된 수를 화면에 출력하시오.
//
////예시) 배열 출력 1 1 3 4 5 6 8 0 ...... 1 2 3
////      가장 많이 나온 수 1 횟수 : 17번
//
//int main()
//{
//	srand(time(NULL));
//
//	//0부터 9까지를 저장하기 위한 배열
//	//앞 부분만 초기화해두면 나머지는 알아서 0으로 초기화됩니다.
//	int range_number[10] = { 0,0 };
//	int rand_number; //100번 반복할 랜덤 숫자 표현
//	int max_number; //가장 많이 생성된 수
//	int count; //횟수
//
//	printf("배열 출력 : ");
//	for(int i =0; i < 100; i++)
//	{
//		//보기 편하기 위해 추가
//		if (i % 5 == 0)
//		{
//			printf("\n");
//		}
//		rand_number = rand() % 10;
//		printf("%d ", rand_number);
//
//		range_number[rand_number] += 1; //랜덤 값에 따라 그 위치에 있는 값이 1씩 증가할 것입니다.(해당 수가 몇번 나왓는지 체크 가능)
//	}
//	
//	count = range_number[0]; //가장 많이 나온 횟수를 가장 첫번째 값으로 설정
//
//	printf("\n숫자 나온 횟수 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", range_number[i]);
//
//		if (range_number[i] > count) //현재 값이 count보다 클 경우
//		{
//			count = range_number[i]; //그 횟수를 가장 많이 나온 횟수로 변경합니다.
//			max_number = i; //해당 위치(인덱스)를 가장 많이 나온 숫자로 설정합니다.
//		}
//	}
//	printf("\n가장 많이 나온 숫자 %d 횟수 : %d번\n", max_number, count);
//
//
//
//
//
//	return 0;
//}