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
//			cout << "총 페이지수를 초과할수 없습니다!" << endl;
//			return *this;//자기 자신을 반환한다
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
//		cout << "현재 읽은 페이지 수 : " << checkpoint << endl;
//	}
//};
//
//int main()
//{
//	Book book("A");
//	int pagecheckpoint;
//	while (true)
//	{
//		cout << "읽은 페이지수를 입력하세요";
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
