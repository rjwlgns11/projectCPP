//#include "Header.h"
//
////아래에 적힌 코드를 실행할 경우
////배열의 값이 순서대로 출력됩니다.
//
////1. 배열의 출력 순서를 반대로 출력하세요.
//
////2. 실제 배열의 저장 순서를 반대로 변경합니다.
//
//
//int main()
//{
//	int Arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//배열을 만들 때 {값1,값2,값3....}의 형태로 만들 수도 있습니다.
//
//	int Length = sizeof(Arrays) / sizeof(int);
//	//배열의 길이 = 배열 전체의 크기 / 데이터 하나의 크기
//	//현재 배열 Arrays는 int 타입 값이 10개 있습니다. 따라서 크기는 40
//	//int 타입의 데이터 크기는 4입니다.
//
//	for (int i = 0; i < Length; i++)
//	{
//		printf("%d ", Arrays[i]);
//	}
//	printf("\n");
//	for (int i = Length-1; i >= 0; i--)
//	{
//		printf("%d ", Arrays[i]);
//	}
//	printf("\n");
//
//	//배열의 순서를 변경하는 코드를 설계하시오.
//
////1. 배열 전체를 조사해서 앞의 값이 다음 값보다 크면 그 값을 교환한다.
//	//int temp = 0;
//
//	//for (int i = 0; i < Length; i++)
//	//{
//	//	for (int j = 0; j < Length; j++)
//	//	{
//	//		if (Arrays[i] > Arrays[j])
//	//		{
//	//			// -- 값 교환 로직 temp --
//	//			temp = Arrays[i]; //temp에는 값을 하나 저장합니다.
//	//			Arrays[i] = Arrays[j];//저장한 값에 다른 값을 초기화합니다.
//	//			Arrays[j] = temp;//다른 값에 저장해준 temp를 저장합니다.
//	//		}
//	//	}
//	//}
////2. 배열 양 끝의 값을 서로 교환한다.(역순 정렬보단 역순으로 뒤집는 코드)
//	int temp = 0;
//
//	for (int i = 0; i < Length / 2; i++)
//	{
//		temp = Arrays[i]; //배열의 i번째 값을 temp에 저장합니다.
//		Arrays[i] = Arrays[Length - i - 1];//배열의 i번째 값은 배열의 전체 길이에 번수만큼 빼고 -1을 뺀 수치에 해당 하는 값을 저장합니다.
//		Arrays[Length - i - 1] = temp;
//	}
//
//
//
//
//	for (int i = 0; i < Length; i++)
//	{
//		printf("%d ", Arrays[i]);
//	}
//	
//
//	return 0;
//}