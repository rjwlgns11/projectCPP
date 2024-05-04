//#include "Header.h"
//
////C����� �迭 ���� ���
///// <summary>
///// ó������ ������ ���� ���ϸ鼭 �ϳ��ϳ� �ٲٴ� ���� ���
///// </summary>
///// <param name="arr">������ ������ �迭(������)</param>
///// <param name="count">�迭�� ����(����� ����)</param>
//void bubble_sort(int arr[], int count)
//{
//	int temp; //�� ��ȯ��
//
//	for (int i = 0; i < count; i++) //����� ������ŭ �ݺ��� �����մϴ�.
//	{
//		for (int j = 0; j < count - 1; j++) //����� ���� -1���� �ݺ��մϴ�.
//		{
//			if (arr[j] > arr[j + 1]) //������ ���� ���� ���� ���մϴ�.
//			{
//				//ũ�� ��ȯ
//				temp = arr[j]; //������ �� ����
//				arr[j] = arr[j + 1]; //���� �� �ʱ�ȭ
//				arr[j + 1] = temp; //���� ���� ���� �� ����
//			}
//		}
//	}
//}
///// <summary>
///// �迭�� ����ϴ� ���
///// </summary>
///// <param name="arr">����� ������ �迭</param>
///// <param name="count">�迭 �������� ����, ����� ����, �迭�� ����</param>
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
///// ���� ���ĺ��ٴ� �� ���� ������ ���� ���� ���, �迭�� �տ������� ���������� ������ ����˴ϴ�.
///// </summary>
///// <param name="arr">�迭</param>
///// <param name="count">�迭�� ����</param>
//void selection_sort(int arr[], int count)
//{
//	int min, temp; //�ּ� ���� ��ȯ ���� �غ��մϴ�.
//
//	//���� ����� �迭�� ���������� �ݺ��� �ʿ䰡 �����ϴ�.
//	for (int i = 0; i < count - 1; i++)
//	{
//		min = i; //���� ���� �迭 �ȿ� �ִ� ���� ��ġ�� �����ϴ� �����Դϴ�.
//
//		for (int j = i; j < count; j++)
//		{
//			//min���� �� ���� ���� �߰ߵǸ�
//			if (arr[j] < arr[min])
//			{
//				//�ش� ��ġ�� ���� ���� ���� ��ġ�� �����մϴ�.
//				min = j;
//			}
//		}
//		//���� �ݺ� �۾��� ���� �� i�� min�� ���� �ٸ� ���(�ּҰ��� ��ġ�� �����Ǿ��� ���)
//		if (i != min)
//		{
//			//���� ��ȯ�մϴ�.
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