//#include "Header.h"
//
////구조체 연습문제 1. 입력받은 시간(시, 분)을
////12시간제와 24시간제로 출력할 수 있는 프로그램을 설계하기 위해
////구조체 time을 설계하시오.
//
//struct time
//{
//	int time_12;
//	int time_24;
//	int time;
//	int minute;
//};
//int main()
//{
//	struct time t;
//
//	printf("시를 입력해주세요 >> ");
//	scanf("%d", &t.time);
//	printf("분을 입력해주세요 >> ");
//	scanf("%d", &t.minute);
//
//	t.time_12 = t.time > 12 ? t.time - 12: t.time;
//	t.time_24 = t.time;
//
//	printf("[12시간제] %2d : %2d\n", t.time_12 , t.minute  );
//	printf("[24시간제] %2d : %2d\n", t.time_24 , t.minute );
//
//	return 0;
//}