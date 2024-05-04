//#include "header.h"
//
////화면에 나온 체질량지수 프로그램을 연출
//
////1cm 0.01m
//int main()
//{
//	float cm, kg ;
//	float bmi;
//	int a =18.5;
//	int b = 23;
//	int c = 25;
//	
//
//	printf("키와 체중을 입력하세요\n");
//	scanf("%f %f",&cm, &kg);
//	
//	bmi = kg / ((cm*0.01)*(cm*0.01));//
//	printf("bmi>>%f\n",bmi);
//
//	if (bmi<a) {
//		printf("저체중입니다\n");
//	}
//	else if (bmi<b)//bmi >=a&& bmi<=b
//	{
//		printf("정상체중입니다\n");
//	}
//	else if(bmi<c){//bmi >= b && bmi <= c
//		printf("과체중입니다\n");
//	}
//	else {
//		printf("비만입니다\n");
//	}
//	return 0;
//
//}