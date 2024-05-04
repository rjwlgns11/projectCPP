//#include "Header.h"
//
//
//int main()
//
//{
//	int arrays[] = {1,2,3,4,5,6,7,8,9,10};
//	//배열을 만들때 {}의 형태로 만들수도 있다.
//	int length = sizeof(arrays) / sizeof(int);
// ////배열의 길이 배열 전체의 크기 /데이터 하나의 크기
//	////현재 배열 arr은 int 타입 값이 10개 있다.
//	////따라서 int 타입의 데이터 크기는 4이다.
//
//	for (int i = 0; i < length; i++)
//	{
//
//		printf("%d ",arrays[i]);
//	}
//	int total = 0;
//    
//	for (int i = 0; i <= length-1; i++)
//	{
//		printf("%d ", arrays[length-i-1]);//10 - i - 1
//	}
//
//	//정렬 알고리즘
//	//1부터 10까지의 나열된 수를 역으로 뒤집는다
//	//total <<<< arrays[0] total =0
//	//arrays[0]<<<<arrays[length-1]
//	//arrays[length-1]<<<<total
//
//	for(int i=0; i <= length/2; i++)//절반만 계산하면 된다 만약 홀수일시 -1 해주면된다
//	{
//		total = arrays[i];//total123456789
//		arrays[i] = arrays[length-i-1];
//		arrays[length-i-1] = total;//987654321
//		
//	}
//		
//	for (int i = 0; i <= 9; i++)
//	{
//
//		printf("%d ", arrays[i]);
//
//	}//수정요망
//
//	return 0;
//}