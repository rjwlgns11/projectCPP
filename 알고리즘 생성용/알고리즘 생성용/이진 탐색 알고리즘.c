int binarysearch(int ar[], int len, int target)
{
	int first = 0;//����
	int last = len - 1;//������ �ε���
	int mid;//�߰� �ε���
	

	while (first <= last)//������ ���������� Ŀ����� ����
	{
		mid = (first + last) / 2;

		if (target == ar[mid])//���� Ÿ���� �迭�� �߰����� �����Ѱ��
			return mid;//�߰� �ε����� ��ȯ
		else//�ƴѰ��
		{
			if (target < ar[mid])//Ÿ�ٰ��� �迭 �߰��ε��� ������ �������
				last = mid - 1;//������ �ε��� ���� �߰� �ε����� -1 �� ó���� ��� 3
				
			else//Ÿ�ٰ��� �迭 �߰� �ε��� ������ Ŭ���
				first = mid + 1;//ù �ε������� �߰� �ε��� �� +1 ó���ΰ�� 5
		}
		
	}
	return -1;
}