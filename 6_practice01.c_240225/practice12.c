//#include "Header.h"
//
//
//int main()
//
//{
//	int arrays[] = {1,2,3,4,5,6,7,8,9,10};
//	//�迭�� ���鶧 {}�� ���·� ������� �ִ�.
//	int length = sizeof(arrays) / sizeof(int);
// ////�迭�� ���� �迭 ��ü�� ũ�� /������ �ϳ��� ũ��
//	////���� �迭 arr�� int Ÿ�� ���� 10�� �ִ�.
//	////���� int Ÿ���� ������ ũ��� 4�̴�.
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
//	//���� �˰���
//	//1���� 10������ ������ ���� ������ �����´�
//	//total <<<< arrays[0] total =0
//	//arrays[0]<<<<arrays[length-1]
//	//arrays[length-1]<<<<total
//
//	for(int i=0; i <= length/2; i++)//���ݸ� ����ϸ� �ȴ� ���� Ȧ���Ͻ� -1 ���ָ�ȴ�
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
//	}//�������
//
//	return 0;
//}