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
//	cout << "어서오세요. AI 커피머신입니다" << endl;
//	while (true) 
//	{
//		int totalmoney = 0;
//		cout << "메뉴를 선택해주세요." << endl;
//		cout << "1.전체 메뉴 확인 2. 브랜드 확인 3.브랜드 선택하기, 4.커피 종류 선택하기, 5.결제하기, 6.종료하기" << endl;
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
//			cout << "커피 브랜드를 선택하세요. 브랜드 다시 확인 6번" << endl;
//			cin >> selectmenu;
//			totalmoney+=machine->BrandChoice(selectmenu);
//			break;
//
//		case 4:
//			cout << "커피 메뉴를 선택하세요. 메뉴 다시 확인 6번" << endl;
//			cin >> selectmenu;
//			totalmoney+=machine->selectmenu(selectmenu);
//			break;
//		case 5:
//			
//			totalmoney = machine->payment(totalmoney);
//			
//			break;
//		case 6:
//			cout << "안녕히가세요."<<endl;
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
////커피 메뉴 리스트
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
//	menuA = "아메리카노";
//	menuB = "카페라떼";
//	menuC = "카라멜 마끼아또";
//	menuD = "카푸치노";
//	menuE = "프라푸치노";
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
//			cout << menuA << "를 선택하셨습니다." << endl;
//			return AMERICANO;
//
//		case 2:
//			cout << menuB << "를 선택하셨습니다." << endl;
//			return CAFFELATTE;
//		case 3:
//			cout << menuC << "를 선택하셨습니다." << endl;
//			return CAREMELMACCHIATO;
//		case 4:
//			cout << menuD << "를 선택하셨습니다." << endl;
//			return CAPPUCCINO;
//		case 5:
//			cout << menuE << "를 선택하셨습니다." << endl;
//			return FRAPPUCCINO;
//		case 6:
//			MenuList();
//			cout << "메인 메뉴로 돌아갑니다" << endl;
//			cout << endl;
//			return 0;
//
//		default:
//			cout << "다시 선택해주세요." << endl;
//			return 0;
//		}
//	
//}//커피 메뉴 고르기   
//
//
//
//int CoffeeMachine::payment(int totalmoney)
//{
//	int credit;
//	
//	cout << "결제금액 : " << totalmoney << endl;
//	cout << "결제금액을 넣어주세요." << endl;
//	cin >> credit;
//	if (credit >= totalmoney)
//	{
//		cout << credit << "원을 받았습니다"<<endl;
//		cout << "잔돈은 " << credit - totalmoney << "원 입니다." << endl;
//		return credit - totalmoney;
//	}
//	else
//	{
//		cout <<  "잔액이 부족합니다." << endl;
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
//			cout << "맥심을 선택하셨습니다." << endl;
//			return MAXIM;
//		case 2:
//			cout << "카누를 선택하셨습니다." << endl;
//			return KANU;
//		case 3:
//			cout << "네스프레소를 선택하셨습니다. +1000" << endl;
//			return NESPRESSO;
//		case 4:
//			cout << "스타벅스를 선택하셨습니다. +1000" << endl;
//			return STARBUCKS;
//		case 5:
//			cout << "투썸플레이스를 선택하셨습니다. +1000" << endl;
//			return TWOSOMEPLACE;
//		case 6:
//			BrandList();
//			cout << "메인 메뉴로 돌아갑니다" << endl;
//			cout << endl;
//			return 0;
//		default:
//			cout << "메인 메뉴로 돌아갑니다" << endl;
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
//	BrandList1 = "맥심";
//	BrandList2 = "카누";
//	BrandList3 = "네스프레소";
//	BrandList4 = "스타벅스";
//	BrandList5 = "투썸플레이스";
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
