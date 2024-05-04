#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//1번 문제
	int num1, num2;
	num1 = 1, num2 = 5;
	printf("\"Welcome to c programming!\"\n");

	printf("'a'는 %d이고 'n'는 %d일때 a+b=%d이야!\n",num1,num2,num1+num2);
	
	//2번 문제
	//1 국어 영어 수학 점수를 순서대로.총점과 평균
	//2 해야하는 작업 국어 영어 수학을순서대로 입력
	//3 국어영어수학을 순서대로 출력
	//4 총점에대한 평균을 출력
	int kor, eng, mat;//총점,평균은 국영수가 정해져야 값을 만들수있음.
	
	printf("국어 영어 수학 점수를 순서대로 입력");
    scanf("%d %d %d", &kor, &eng, &mat);
	printf("국어점수:%d\n영어점수:%d\n수학점수:%d\n", kor, eng, mat);

	//총점 계산
	int total = kor + eng + mat;
	float avg = (float)total / 3;
	printf("국어 영어 수학의 합산 %d \n",total);
	printf("성적의 평균 점수 %.2f\n", avg);

	return 0;
}