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
		cout << "����� �����ϼ���" << endl;
		cout << "1. ���� ������ �Է� , 2. ���� ������ Ȯ�� , 3.����" << endl;
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
	cout << "������� ���� ������ �� : " << checkpoint << endl;
}

void Book::pagecheckpoint(Book &book)
{
	
	
	Book temp;

	
	cout << "���� �������� �Է��ϼ���" << endl;
	cin >> temp.checkpoint; 
	
		
		
	if (book.page < book.checkpoint+ temp.checkpoint)
	{
		cout << "å�� �� �������� �ʰ��Ҽ� �����ϴ�!" << endl;
		
	}
	else if (book.page > book.checkpoint)
	{
		book.checkpoint += temp.checkpoint;
		cout << "���� ���� �� �������� : " << book.checkpoint << endl;
		

	}
	else
	{
		cout << "500�������� ��� �о����ϴ�." << endl;
		
	}
}


