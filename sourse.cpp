//#include <iostream>
//using namespace std;
//
//void binary(int num);
//void CollatzConjecture(int num);
//void swap(int& a, int& b);
//
//
//int main()
//{
//	int a,b;
//	cout << "2�������� ��ȯ�� ������ �Է��ϼ���" << endl;
//	cin >> a;
//	binary(a);
//	cout << endl;
//
//	cout << "�ݶ��� ������ Ȯ���� ������ �Է��ϼ���" << endl;
//	cin >> a;
//	CollatzConjecture(a);
//	cout << "������ �ΰ��� ���� �Է�" << endl;
//	cin >> a >> b;
//	cout << "swap�Լ� ���� a�� b�� �� : " << a << " " << b << endl;
//	swap(a, b);
//	cout << "swap�Լ� ���� a�� b�� �� : " << a << " " << b << endl;
//	return 0;
//}
//
//void binary(int num)
//{
//	bool check = num == 0 || num == 1;
//
//	if (check)
//	{
//		cout << num;
//	}
//	else
//	{
//	    binary(num / 2);
//		cout << num%2;
//	}
//
//}
//
//void CollatzConjecture(int num)
//{
//
//	if (num % 2 == 0)//¦���ΰ��
//	{
//		cout << num << endl;
//		CollatzConjecture(num / 2);
//
//		
//	}
//	else if (num == 1)//�ݺ��ϴ� 1�� ���� ���
//	{
//		cout << num << endl;
//		
//	}
//	else//Ȧ���ΰ��
//	{
//		cout << num << endl;
//		CollatzConjecture(num * 3 + 1);
//	}
//}
//
//void swap(int& a, int& b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b=temp;
//}
