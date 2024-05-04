//#include "Header.h"
//
////Q1. 1부터 매개변수로 넘어온 정수보다 10만큼 더 큰 수치까지 
////출력하는 함수 StartNumber를 구현하시오.
//void StartNumber(int value)
//{
//	for (int i = 1; i < value + 11; i++)
//	{
//		printf("%d ", i);
//	}
//}
//
////Q2. 매개변수로 정수 2개를 넘겨 받아 두 숫자 사이의 범위의 총 합을 return 하는 함수
////SumValues를 구현하시오.
//int SumValues(int a, int b)
//{
//	int sum = 0;
//
//	//사이의 범위를 적을 건데 a가 더 크게 적힐 경우 반복문이 원활하게 실행되지 않기 때문에
//	//a가 더 크게 적힐 경우 b와 값을 변경해서 사이 범위를 재설정하기 위한 코드
//	int temp;
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//
//	//여기까지만 작성해도 정답으로는 인정
//	for (int i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
////Q3. 매개변수로 넘어온 정수가 홀수인지, 짝수인지를 출력하는 함수 OddNumber를 구현하시오.
//void OddNumber(int value)
//{
//	//if (value % 2 == 1)
//	//	printf("홀수입니다.\n");
//	//else
//	//	printf("짝수입니다.\n");
//
//	//삼항 연산으로 풀이
//	//값 = 조건 ? 조건이 참일 때 실행할 내용 : 조건이 거짓일 때 실행할 내용
//	value % 2 == 1 ? printf("홀수입니다.\n") : printf("짝수입니다.\n");
//}
//
////다 푼 학생들은 코드를 까페 자유 게시판에 올려주세요.(제가 올려달라고 할 때)
//int main()
//{
//	StartNumber(1);
//	printf("%d", SumValues(1, 10));
//	OddNumber(2);
//	return 0;
//}