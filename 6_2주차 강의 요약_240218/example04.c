//#include <stdio.h>
//
////������ (operator)
////�����Ҷ� ����ϴ� ��ȣ 
//
////:L-R value(�¿� ����?)
//
////int a = 5;
////L value :a(������� �ʰ� �����ִ� ����)
////R value : 5;(���� ������ ������� �ӽú���) (�׳� ��)
//
//
//
//
//
//int main()
//{
//	int a = 5;
//	int b = 7;
//
//	//��� ���� (arithmatic)
//	//�⺻���� ��Ģ���� �۾��� ���Ǵ� ������ (+-/%*)
//	//+,-,*,/,%
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%dx%d=%d\n", a, b, a * b);//��
//	printf("%d/%d=%d\n", a, b, a / b);
//	printf("%d%%%d=%d\n", a, b, a % b);//������
//
//
//
//
//    //��������;
//	//����ڴ� 27600���� ������ �ִ�
//	//����ڴ� �Ʒ��� ���ǥ�� ���� ���� �������� ȯ���Ϸ��Ѵ�
//	//a: 10000 b: 5000 c: 1000 d:500 e: 100
//	
//	int user_money = 27600;
//	int A, B, C, D, E;//���� �ʱ�ȭ���� ���� ����
//
//	A = user_money / 10000;//A = 2 (���ϻ���)
//	printf("A:%d\n", A);
//    printf("�ݾ� :%d \n", user_money);
//	user_money = user_money % 10000;
//
//	B = user_money / 5000;
//	printf("b:%d\n",B);
//	user_money = user_money % 5000;
//	printf("�ݾ� :%d \n", user_money);
//
//
//	C = user_money / 1000;
//	printf("C:%d\n", C);
//	user_money = user_money % 1000;
//	printf("�ݾ� :%d \n", user_money);
//
//	D = user_money / 500;
//	printf("D:%d\n", D);
//	user_money = user_money % 500;
//	printf("�ݾ� :%d \n", user_money);
//
//	E = user_money / 100;
//	printf("E:%d\n", E);
//	user_money = user_money % 100;
//	printf("�ݾ� :%d \n", user_money);
//
//
//
//	return 0;
//}