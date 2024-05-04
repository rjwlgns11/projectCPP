//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	//[유인물 1번 문제]
//	int a = 1;
//	int b = 5;
//	//printf("\"a\"");
//	printf("\"Welcome to C Programming!\"\n");
//	printf("'a'는 %d이고, 'b'는 %d일때 a + b = %d이야!\n"a,b,a+b);
//	
//	//[유인물 2번 문제]
//	//변수로 만들 것 : 국어, 영어, 수학 , 총점 , 평균
//	//해야하는 작업 1: 국어 , 영어, 수학을 순서대로 입력합니다
//	//			   2: 국어, 영어, 수학을 순서대로 출력합니다.
//	//			   3: 국어 영어 수학에 대한 총점을 출력합니다.
//	//			   4: 총점에 대한 평균을 출력합니다.
//	int kor;
//	int eng;
//	int mat;
//	//총점이나 평균은 국,영,수가 정해져야 값을 만들 수 있음.
//	//그래서 따로 만들겠습니다.
//
//	printf("국어, 영어, 수학 점수를 순서대로 입력하세요 >> ");
//	scanf("%d %d %d", &kor, &eng, &mat);
//	//scanf에 %d를 여러 개 적을 경우 띄어쓰기 기준으로 입력 가능
//	printf("국어 점수 %d\n영어 점수 %d\n수학 점수 %d\n", kor, eng, mat);
//
//	//총점 계산
//	int total = kor + eng + mat;
//	//평균 계산
//	float avg = total / 3.0;
//	printf("총점 : %d\n평균 : %.2f\n", total, avg);
//	return 0;
//}