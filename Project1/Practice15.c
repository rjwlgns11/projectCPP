//#include "Header.h"
//
////���� �˰��� 10818�� ����
//
//
//int main()
//{
//	//���� �Է�
//	int N;
//	scanf("%d", &N);
//
//	//�迭 Ȱ��(�Է��� ���� �����ϱ� ���� �뵵)
//	//Visual Studio�� �ƴϾ��ٸ� 5 ��� N �ۼ�
//	int Arrays[5];
//	//scanf�� ���� �Է��ϴ� �뵵
//	int value;
//	//�Է��� ���ڸ�ŭ �迭�� ���� �߰��մϴ�.
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &value);
//		Arrays[i] = value;
//	}
//	int min = Arrays[0]; //�ּ� ��
//	int max = Arrays[0]; //�ִ� ��	
//	//�迭 ��ü�� �ݺ��ؼ�
//	for (int i = 0; i < N; i++)
//	{
//		//���� ���� �� ����
//		if (min > Arrays[i])
//		{
//			min = Arrays[i];
//		}
//
//		//���� ū �� ���� 
//		if (max < Arrays[i])
//		{
//			max = Arrays[i];
//		}
//	}
//	printf("%d %d", min, max);
//
//	return 0;
//}