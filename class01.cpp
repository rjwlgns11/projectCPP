//#include <iostream>
//using namespace std;
//
//#define MAXIM 0
//#define KANU 0
//#define NESPRESSO 500
//#define STARBUCKS 1000
//#define TWOSOMEPLACE 500
//#define SIZEUP 1000
//#define AMERICANO 4000
//#define CAFFELATTE 5500
//#define CAREMELMACCHIATO 6500
//#define CAPPUCCINO 6000
//#define FRAPPUCCINO 7000
//
//class CoffeeMachine
//{
//private:
//	string menuA;
//	string menuB;
//	string menuC;
//	string menuD;
//	string menuE;
//	int price;
//	//string selectlist[];
//public:
//	CoffeeMachine(string menuA, string menuB, string menuC, string menuD, string menuE, int price/*string selectlist[]*/);
//	CoffeeMachine();
//	void MenuList();
//	int selectmenu(int select);
//	int payment(int money);
//	
//};
//
//class CoffeeBrand : public CoffeeMachine
//{
//protected:
//	string BrandList1;
//	string BrandList2;
//	string BrandList3;
//	string BrandList4;
//	string BrandList5;
//public:
//	CoffeeBrand(string BrandList1,string BrandList2,string BrandList3,string BrandList4,string BrandList5);
//	CoffeeBrand();
//	void BrandList();
//	int BrandChoice(int brandselect);
//	
//	
//};
//
//
//
//
//
//int main()
//{
//	
//	CoffeeBrand* machine = new CoffeeBrand;
//	
//	int selectmenu;
//	
//	
//
//	cout << "�������. AI Ŀ�Ǹӽ��Դϴ�" << endl;
//	while (true) 
//	{
//		int totalmoney = 0;
//		cout << "�޴��� �������ּ���." << endl;
//		cout << "1.��ü �޴� Ȯ�� 2. �귣�� Ȯ�� 3.�귣�� �����ϱ�, 4.Ŀ�� ���� �����ϱ�, 5.�����ϱ�, 6.�����ϱ�" << endl;
//		cin >> selectmenu;
//		switch (selectmenu)
//		{
//		case 1:
//			machine->MenuList();
//			break;
//		case 2:
//			machine->BrandList();
//			break;
//		case 3:
//			
//			cout << "Ŀ�� �귣�带 �����ϼ���. �귣�� �ٽ� Ȯ�� 6��" << endl;
//			cin >> selectmenu;
//			totalmoney+=machine->BrandChoice(selectmenu);
//			break;
//
//		case 4:
//			cout << "Ŀ�� �޴��� �����ϼ���. �޴� �ٽ� Ȯ�� 6��" << endl;
//			cin >> selectmenu;
//			totalmoney+=machine->selectmenu(selectmenu);
//			break;
//		case 5:
//			
//			totalmoney = machine->payment(totalmoney);
//			
//			break;
//		case 6:
//			cout << "�ȳ���������."<<endl;
//			exit(0);
//		}
//		
//
//
//	}
//
//
//
//
//	delete machine;
//
//
//
//	return 0;
//}
//
////Ŀ�� �޴� ����Ʈ
//CoffeeMachine::CoffeeMachine(string menuA, string menuB, string menuC, string menuD, string menuE,int price /*string selectlist[]*/)
//{
//	this->menuA = menuA;
//	this->menuB = menuB;
//	this->menuC = menuC;
//	this->menuD = menuD;
//	this->menuE = menuE;
//	this->price = price;
//	/*this->selectlist[20] = selectlist[20];*/
//}
//CoffeeMachine::CoffeeMachine()
//{
//	menuA = "�Ƹ޸�ī��";
//	menuB = "ī���";
//	menuC = "ī��� �����ƶ�";
//	menuD = "īǪġ��";
//	menuE = "����Ǫġ��";
//
//
//}
//void CoffeeMachine::MenuList()
//{
//	cout << menuA << endl;
//	cout << menuB << endl;
//	cout << menuC << endl;
//	cout << menuD << endl;
//	cout << menuE << endl;
//}
//
//
//int CoffeeMachine::selectmenu(int select)
//{
//	
//	
//		switch (select)
//		{
//
//		case 1:
//			cout << menuA << "�� �����ϼ̽��ϴ�." << endl;
//			return AMERICANO;
//
//		case 2:
//			cout << menuB << "�� �����ϼ̽��ϴ�." << endl;
//			return CAFFELATTE;
//		case 3:
//			cout << menuC << "�� �����ϼ̽��ϴ�." << endl;
//			return CAREMELMACCHIATO;
//		case 4:
//			cout << menuD << "�� �����ϼ̽��ϴ�." << endl;
//			return CAPPUCCINO;
//		case 5:
//			cout << menuE << "�� �����ϼ̽��ϴ�." << endl;
//			return FRAPPUCCINO;
//		case 6:
//			MenuList();
//			cout << "���� �޴��� ���ư��ϴ�" << endl;
//			cout << endl;
//			return 0;
//
//		default:
//			cout << "�ٽ� �������ּ���." << endl;
//			return 0;
//		}
//	
//}//Ŀ�� �޴� ����   
//
//
//
//int CoffeeMachine::payment(int totalmoney)
//{
//	int credit;
//	
//	cout << "�����ݾ� : " << totalmoney << endl;
//	cout << "�����ݾ��� �־��ּ���." << endl;
//	cin >> credit;
//	if (credit >= totalmoney)
//	{
//		cout << credit << "���� �޾ҽ��ϴ�"<<endl;
//		cout << "�ܵ��� " << credit - totalmoney << "�� �Դϴ�." << endl;
//		return credit - totalmoney;
//	}
//	else
//	{
//		cout <<  "�ܾ��� �����մϴ�." << endl;
//		return 0;
//	}
//}
//
//int CoffeeBrand::BrandChoice(int brandselect)
//{
//	
//	
//		switch (brandselect)
//		{
//		case 1:
//			cout << "�ƽ��� �����ϼ̽��ϴ�." << endl;
//			return MAXIM;
//		case 2:
//			cout << "ī���� �����ϼ̽��ϴ�." << endl;
//			return KANU;
//		case 3:
//			cout << "�׽������Ҹ� �����ϼ̽��ϴ�. +1000" << endl;
//			return NESPRESSO;
//		case 4:
//			cout << "��Ÿ������ �����ϼ̽��ϴ�. +1000" << endl;
//			return STARBUCKS;
//		case 5:
//			cout << "�����÷��̽��� �����ϼ̽��ϴ�. +1000" << endl;
//			return TWOSOMEPLACE;
//		case 6:
//			BrandList();
//			cout << "���� �޴��� ���ư��ϴ�" << endl;
//			cout << endl;
//			return 0;
//		default:
//			cout << "���� �޴��� ���ư��ϴ�" << endl;
//			cout << endl;
//			return 0;
//		}
//	
//}
//
//CoffeeBrand::CoffeeBrand(string BrandList1, string BrandList2, string BrandList3, string BrandList4, string BrandList5)
//{
//	this->BrandList1 = BrandList1;
//	this->BrandList2 = BrandList2;
//	this->BrandList3 = BrandList3;
//	this->BrandList4 = BrandList4;
//	this->BrandList5 = BrandList5;
//}
//
//CoffeeBrand::CoffeeBrand()
//{
//	BrandList1 = "�ƽ�";
//	BrandList2 = "ī��";
//	BrandList3 = "�׽�������";
//	BrandList4 = "��Ÿ����";
//	BrandList5 = "�����÷��̽�";
//		
//}
//
//void CoffeeBrand::BrandList()
//{
//	cout << BrandList1 << endl;
//	cout << BrandList2 << endl;
//	cout << BrandList3 << endl;
//	cout << BrandList4 << endl;
//	cout << BrandList5 << endl;
//}
