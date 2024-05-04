int binarysearch(int ar[], int len, int target)
{
	int first = 0;//시작
	int last = len - 1;//마지막 인덱스
	int mid;//중간 인덱스
	

	while (first <= last)//시작이 마지막보다 커질경우 종료
	{
		mid = (first + last) / 2;

		if (target == ar[mid])//만약 타겟이 배열의 중간값과 동일한경우
			return mid;//중간 인덱스값 반환
		else//아닌경우
		{
			if (target < ar[mid])//타겟값이 배열 중간인덱스 값보다 작은경우
				last = mid - 1;//마지막 인덱스 값은 중간 인덱스값 -1 임 처음인 경우 3
				
			else//타겟값이 배열 중간 인덱스 값보다 클경우
				first = mid + 1;//첫 인덱스값은 중간 인덱스 값 +1 처음인경우 5
		}
		
	}
	return -1;
}