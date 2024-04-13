#include <iostream>
using namespace std;


class Book
{
	string bookname;
	int checkpoint;
	int page;
public:
	Book(string bookname, int checkpoint, int page);
	Book() : bookname("A"), checkpoint(0), page(500) {};
	void pagecheck();
	Book operator+(Book& other)
	{
		checkpoint += other.checkpoint;
		return other;
	}
	void pagecheckpoint(Book& book);

};

int main()
{
	Book book;
	int select;

	while (true)
	{
		cout << "기능을 선택하세요" << endl;
		cout << "1. 읽은 페이지 입력 , 2. 현재 페이지 확인 , 3.종료" << endl;
		cin >> select;
		switch (select)
		{
		case 1 :
			book.pagecheckpoint(book);
			
			break;
		case 2 : 
			book.pagecheck();
			break;
		case 3:
			exit(0);
		}

		
	}


	return 0;

	

}





Book::Book(string bookname, int checkpoint, int page)
{
	this->bookname = bookname;
	this->checkpoint = checkpoint;
	this->page = page;
}

void Book::pagecheck()
{
	cout << "현재까지 읽은 페이지 수 : " << checkpoint << endl;
}

void Book::pagecheckpoint(Book &book)
{
	
	
	Book temp;

	
	cout << "읽은 페이지를 입력하세요" << endl;
	cin >> temp.checkpoint; 
	
		
		
	if (book.page < book.checkpoint+ temp.checkpoint)
	{
		cout << "책의 총 페이지를 초과할수 없습니다!" << endl;
		
	}
	else if (book.page > book.checkpoint)
	{
		book.checkpoint += temp.checkpoint;
		cout << "현재 읽은 총 페이지수 : " << book.checkpoint << endl;
		

	}
	else
	{
		cout << "500페이지를 모두 읽었습니다." << endl;
		
	}
}


