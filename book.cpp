//#include <iostream>
//using namespace std;
//
//class Book
//{
//	string name;
//	int checkpoint;
//	int page;
//public:
//	
//	Book operator+(int value)
//	{
//		if (checkpoint + value>page)
//		{
//			cout << "�� ���������� �ʰ��Ҽ� �����ϴ�!" << endl;
//			return *this;//�ڱ� �ڽ��� ��ȯ�Ѵ�
//		}
//		 
//		checkpoint += value;
//		
//		return *this;
//			
//		
//	}
//	Book(string name):name(name)
//	{
//		checkpoint = 0;
//		page = 500;
//
//	}
//	void info()
//	{
//		cout << "���� ���� ������ �� : " << checkpoint << endl;
//	}
//};
//
//int main()
//{
//	Book book("A");
//	int pagecheckpoint;
//	while (true)
//	{
//		cout << "���� ���������� �Է��ϼ���";
//		cin >> pagecheckpoint;
//
//		
//		book = book + pagecheckpoint;
//		book.info();
//	}
//
//	
//	
//	return 0;
//
//}
//
//
