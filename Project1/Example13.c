//#include "Header.h"
//
////C언어의 배열 정렬 기법
///// <summary>
///// 처음부터 끝까지 값을 비교하면서 하나하나 바꾸는 정렬 방법
///// </summary>
///// <param name="arr">정렬을 진행할 배열(정수형)</param>
///// <param name="count">배열의 길이(요소의 개수)</param>
//void bubble_sort(int arr[], int count)
//{
//	int temp; //값 교환용
//
//	for (int i = 0; i < count; i++) //요소의 개수만큼 반복을 진행합니다.
//	{
//		for (int j = 0; j < count - 1; j++) //요소의 개수 -1까지 반복합니다.
//		{
//			if (arr[j] > arr[j + 1]) //현재의 값과 다음 값을 비교합니다.
//			{
//				//크면 교환
//				temp = arr[j]; //이전의 값 저장
//				arr[j] = arr[j + 1]; //다음 값 초기화
//				arr[j + 1] = temp; //다음 값에 저장 값 전달
//			}
//		}
//	}
//}
///// <summary>
///// 배열을 출력하는 기능
///// </summary>
///// <param name="arr">출력을 진행할 배열</param>
///// <param name="count">배열 데이터의 개수, 요소의 개수, 배열의 길이</param>
//void Array_Print(int arr[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
///// <summary>
///// 버블 정렬보다는 더 좋은 성능을 가진 정렬 방식, 배열의 앞에서부터 순차적으로 정렬이 진행됩니다.
///// </summary>
///// <param name="arr">배열</param>
///// <param name="count">배열의 길이</param>
//void selection_sort(int arr[], int count)
//{
//	int min, temp; //최소 값과 교환 값을 준비합니다.
//
//	//비교할 대상은 배열의 마지막까지 반복할 필요가 없습니다.
//	for (int i = 0; i < count - 1; i++)
//	{
//		min = i; //가장 작은 배열 안에 있는 값의 위치를 저장하는 변수입니다.
//
//		for (int j = i; j < count; j++)
//		{
//			//min보다 더 작은 값이 발견되면
//			if (arr[j] < arr[min])
//			{
//				//해당 위치를 가장 작은 값의 위치로 설정합니다.
//				min = j;
//			}
//		}
//		//위의 반복 작업이 끝난 후 i가 min과 값이 다를 경우(최소값의 위치가 변동되었을 경우)
//		if (i != min)
//		{
//			//값을 교환합니다.
//			temp = arr[i]; 
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//	}
//
//
//
//}
//
//int main()
//{
//	int numbers[] = { 8,4,2,6,3,7,5,10,1,9 };
//	int length = sizeof(numbers) / sizeof(int);
//
//	Array_Print(numbers, length);
//	//bubble_sort(numbers, length);
//	selection_sort(numbers, length);
//	Array_Print(numbers, length);
//
//	return 0;
//}