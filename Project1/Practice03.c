//#include "Header.h"
////화면에 나와있는 체질량 지수 프로그램(BMI)
////를 연출하시오.
//
////BMI 지수 조건 표
//// 18.5보다 작으면 저체중
//// 18.5 ~ 23 정상
//// 23보다 크고 25 과체중
//// 25보다 크면 비만
//
////CM와 KG을 입력받습니다.
////체질량 계수는  KG / M의 제곱
//
////1cm = 0.01m
//
//int main()
//{
//	float cm, kg;
//	printf("신장(cm) >> ");
//	scanf("%f", &cm);
//	printf("체중(kg) >> ");
//	scanf("%f", &kg);
//
//	float BMI = kg / ((cm * 0.01) * (cm * 0.01));
//	
//	printf("비만도 결과 : ");
//	if(BMI < 18.5)
//	{
//		printf("저체중\n");
//	}
//	else if (BMI >= 18.5 && BMI <= 23)
//	{
//		printf("정상\n");
//	}
//	else if (BMI > 23 && BMI < 25)
//	{
//		printf("과체중\n");
//	}
//	else
//	{
//		printf("비만\n");
//	}
//
//	printf("BMI  지수 %.2f", BMI);
//	return 0;
//}