#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "areaarith.h"
#include "roundarith.h"

int main(void)
{
	printf("�ﰢ�� ���� (�ظ� 4,���� 2):%g \n", trianglearea(4, 2));
	printf("�� ���� (������ 3): %g \n", circlearea(3));
	printf("���簢�� �ѷ� (�ظ�2.5 ���� 5.2): %g \n",rectangleround  (2.5, 5.2));
	printf("���簢�� �ѷ� (���� ���� 3):%g \n", squareround(3));
	return 0;
}