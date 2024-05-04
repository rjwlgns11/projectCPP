//#include "Header.h"
//
//int main() {
//
//	int num1,num2;//변수를 굳이 두개 만들어야 하나?
//	scanf("%d", &num1);
//	num2 = num1;//이 대입연산은 굳이 필요하진않다
//	num1 = 0;//이하동문
//	
//	while (num1<num2) {//조건 우선연산
//
//		printf("my name is james%d\n",num1);
//		num1++;
//
//	}
//	num1 = 1;
//	do {//우선 실행후 연산
//		
//		printf("my name is james%d\n", num1);
//		num1++;
//
//
//	} while (num1 <= num2);
//	return 0;
//	/*
//	풀이
//	변수 : 양의 정수
//	기능 : scanf(입력), 반복문(while or for)
//
//	int num; 양의 정수를 입력
//	 
//	 scanf("%d",&num);
//
//	int sum=0; 입력한 횟수만큼 출력하기 위해 횟수를 저장할 변수를 1개 더 만들어준다.
//
//
//	while(sum<num)//이러면 대입없이 연산가능
//	{
//	   printf("my name is james%d\n", num1);
//	   num++;
//	}
//
//
//	*/
//}