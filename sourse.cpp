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
//	cout << "2진법으로 변환할 정수를 입력하세요" << endl;
//	cin >> a;
//	binary(a);
//	cout << endl;
//
//	cout << "콜라츠 추측을 확인할 정수를 입력하세요" << endl;
//	cin >> a;
//	CollatzConjecture(a);
//	cout << "변경할 두개의 정수 입력" << endl;
//	cin >> a >> b;
//	cout << "swap함수 이전 a와 b의 값 : " << a << " " << b << endl;
//	swap(a, b);
//	cout << "swap함수 이후 a와 b의 값 : " << a << " " << b << endl;
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
//	if (num % 2 == 0)//짝수인경우
//	{
//		cout << num << endl;
//		CollatzConjecture(num / 2);
//
//		
//	}
//	else if (num == 1)//반복하다 1이 남은 경우
//	{
//		cout << num << endl;
//		
//	}
//	else//홀수인경우
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
