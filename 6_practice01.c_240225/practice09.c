//#include "Header.h"
//#include "Random.h"
////기왕이면 헤더파일 공부도 할것
//
//int main()
//{
//	srand(time(NULL));//현재 시간을 체크해주는 코드
//	////stdlib.h의 기능중 하나 standard liblery.h
//	////srand() 안에 수를 넣으면 그 수에 해당하는 
//	////seed값으로 선택된 결과물이 나오게 된다.
//
//	////seed는 난수 알고리즘을 실행하기 위해 사용하는 수를 의미한다.
//
//	////time.h의 time은 ()안에 수를 넣으면 시간을 처리하는 함수
//	////NULL이 들어갈경우 현재 시간을 초 단위로 처리한다
//	////(1970년 1월 1일 기준부터 현재까지의 시간을 초로 전환한 값) 
//
//	//int rand_number = rand() % 40;// 0~39
//	//printf("%d\n", rand_number);
//
//
//	int rand_number = rand() % 100;// 0~99
//	int num;
//	
//
//	//while (rand_number)//
//	//{
//	//	scanf("%d", &num);//입력을 여기서 받아야함.
//	//	if (rand_number > num) {
//	//		printf("UP\n");
//	//		
//	//	}
//	//	else if (rand_number < num) {
//	//		printf("DOWN\n");
//	//		
//	//	}
//	//	else {
//
//	//		printf("두 수가 동등합니다\n");
//	//		break;
//	//	}
//	//	
//	//}
//	do
//	{
//		scanf("%d", &num);//입력을 여기서 받아야함.
//		if (rand_number > num) {
//			printf("UP\n");
//
//		}
//		else if (rand_number < num) {
//			printf("DOWN\n");
//
//		}
//		else {
//
//			printf("두 수가 동등합니다\n");
//			break;
//		}
//
//	} while (rand_number);
//
//
//	do {
//		scanf("%d", &num);//입력을 여기서 받아야함.
//		if (rand_number > num) {
//			printf("UP\n");
//
//		}
//		else if (rand_number < num)
//		{
//			printf("DOWN\n");
//		}
//	} while (rand_number != num);
//	printf("정답!");
//
//	return 0;
//}