void bubblesorting(int ar[], int len)
{
	int i=0,j,bubble,a=0;
	for (i; i < len; i++)
	{
		
		for (j = 0; j < len; j++)
		{
			a = ar[i];
			if (a < ar[j])//a�� ar[j]���� ũ��
			{
				bubble = ar[j];
				ar[i] = bubble;
				ar[j] = a;
			}
		}
		
	}
	
}