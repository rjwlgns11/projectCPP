int sequentialSearch(int ar[], int len, int target)
{
	int i = 0;

	for (i; i < len; i++)
	{

		if (target == ar[i])
			return i;
	}
	return -1;
}

