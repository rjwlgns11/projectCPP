//#include "Header.h"
//
////백준 알고리즘 10818번 문제
//
//
//int main()
//{
//	//숫자 입력
//	int N;
//	scanf("%d", &N);
//
//	//배열 활용(입력한 수를 보관하기 위한 용도)
//	//Visual Studio가 아니었다면 5 대신 N 작성
//	int Arrays[5];
//	//scanf를 통해 입력하는 용도
//	int value;
//	//입력한 숫자만큼 배열에 값을 추가합니다.
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &value);
//		Arrays[i] = value;
//	}
//	int min = Arrays[0]; //최소 값
//	int max = Arrays[0]; //최대 값	
//	//배열 전체를 반복해서
//	for (int i = 0; i < N; i++)
//	{
//		//가장 작은 값 추출
//		if (min > Arrays[i])
//		{
//			min = Arrays[i];
//		}
//
//		//가장 큰 값 추출 
//		if (max < Arrays[i])
//		{
//			max = Arrays[i];
//		}
//	}
//	printf("%d %d", min, max);
//
//	return 0;
//}