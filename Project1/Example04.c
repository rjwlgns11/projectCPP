//#include <stdio.h>
//
////������(operator)
////������ �� ����ϴ� ��ȣ
//
//// l-r value
//// int a = 5;
//// l-value : a (������� �ʰ� �����ִ� ����)
//// r-value : 5 (���� ���� �� ������� �ӽ� ����) (�׳� ��)
//
//int main()
//{
//	int a = 5; //������ ���� a�� 5�� ���� �ʱ�ȭ�մϴ�.
//	int b = 7;
//
//	//��� ����(arithmetic)
//	//�⺻���� ��Ģ���� �۾��� ���Ǵ� ������
//	// + , - , *(���ϱ�), / , %(������ ��)
//	printf("%d + %d = %d\n",a,b,a+b);
//	printf("%d - %d = %d\n",a,b,a-b);
//	printf("%d * %d = %d\n",a,b,a*b);
//	printf("%d / %d = %d\n",a,b,a/b);
//	printf("%d %% %d = %d\n",a,b,a%b);
//
//	//���� ����
//	//����ڴ� 27600���� ������ �ֽ��ϴ�.
//	//����ڴ� �Ʒ��� ���ǥ�� ���� ���� �������� ȯ���Ϸ��մϴ�.
//	//A : 10000�� B : 5000�� C : 1000�� D : 500�� E : 100��
//
//	int user_money = 27600;
//	int A, B, C, D, E;
//
//	printf("�ݾ� : %d��\n", user_money);
//	A = user_money / 10000;
//	printf("A : %d\n", A);
//	user_money = user_money % 10000;
//	printf("�ݾ� : %d��\n", user_money);
//	
//	B = user_money / 5000;
//	printf("B : %d\n", B);
//	user_money = user_money % 5000;
//	printf("�ݾ� : %d��\n", user_money);
//
//	C = user_money / 1000;
//	printf("C : %d\n", C);
//	user_money = user_money % 1000;
//	printf("�ݾ� : %d��\n", user_money);
//
//	D = user_money / 500;
//	printf("D : %d\n", D);
//	user_money = user_money % 500;
//	printf("�ݾ� : %d��\n", user_money);
//
//	E = user_money / 100;
//	printf("E : %d\n", E);
//	user_money = user_money % 100;
//	printf("�ݾ� : %d��\n", user_money);
//
//	return 0;
//}