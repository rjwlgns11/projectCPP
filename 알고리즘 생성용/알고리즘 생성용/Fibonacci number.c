#include <stdio.h>
int Fibonaccinumber(int n)
{
	printf("call fibo :%d \n", n);
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibonaccinumber(n - 1) + Fibonaccinumber(n - 2);
		

}