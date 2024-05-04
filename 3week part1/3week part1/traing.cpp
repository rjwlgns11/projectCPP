#include <iostream>
using namespace std;

enum Menu{KimchiRamyeon,Sin,Anseong};//열거형에 나열한 이름도 엄연한 변수라 같은 이름은 사용하지말자.
enum Sidemenulist{Rice,Danmuji,Kimchi};//d

class Ramen
{
private:
	string Ramyeon;
	string Sidemenu;
	//int c, d;//만약 값의 입력을 받고 싶다면 열거형 변수가 아닌 일반 정수형 변수 이름을 받는게 낫다
	Menu menu;
	Sidemenulist side;//클래스에 선언한 변수 멤버들은 함수 매개변수(다른이름)로 집어넣을땐 이상이 없지만
	//아래에서 확인할수 있듯 다른 이름을 선언시 오류가 발생한다.
	//웬만하면 클래스에 설정한 이름 그대로 따라가는걸로 하자.
	

public:

	Ramen(string Ramyeon,string Sidemenu,Menu menu, Sidemenulist side);//함수 이름을 같게 해야하나? 생성자 함수
	void Orter();


	
};

int main()
{
	string a, b;
	int c, d;
	cout << "먹고 싶은 메뉴를 작성해서 삽입할것. 메인 메뉴 사이드 메뉴순" << endl;
	cin >> a >> b;
	cin >> c >> d;
	/*Ramen nyam(a,b,c,d);*///지역변수 2개를 추가하여 대입하려 했는데 클래스 안에 존재하지 않는 녀석들이라 지역변수와 
    //클래스 간에 호환이 되지 않는 현상 확인
	//만약 값을 입력 받으려면 너무나 당연하게도 클래스 지역변수에 입력해야 한다.//지신아 병훈이야?
	//클래스 지역변수에 접근해서 값을 넣으려는 행위자체가 불가 cin이 성립이 안된다.
	//만약 열거형이 아닌 값을 넣으면 되겠지?
	Ramen nyam(a,b, Sin, Kimchi);//nyam에서 현재 호출가능한것은 생성자 라멘함수를 제외한 오더 함수밖에 없다.

	nyam.Orter();


	return 0;
}

Ramen::Ramen(string Ramyeon, string Sidemenu, Menu menu, Sidemenulist side)//
{
	this->Ramyeon = Ramyeon;
	this->Sidemenu = Sidemenu;
	this->menu = menu;
	this->side = side;
}
string Ortermenu(Menu menu)//클래스에 설정한 이름 그대로 끌어오기
{
	switch(menu)
	{
	case KimchiRamyeon :
		return "김치라면";
	case Sin:
		return "신라면";
	case Anseong:
		return "안성탕면";
	default:
		return "하지마루요";

	}
}
string Orterside(Sidemenulist side)//클래스에 설정한 이름 그대로 끌어오기
{
	switch (side)
	{
	case Rice:
		return "공기밥";
	case Danmuji:
		return "단무지";
	case Kimchi:
		return "김치";
	default:
		return "하지마루요";
	}
}
void Ramen::Orter()
{
	cout << "메인 메뉴 : " <<Ramyeon<< endl;
	cout << "사이드 메뉴 : " << Sidemenu << endl;
	//cout << menu << endl;//열거형 정수이기 때문에 정수형을 출력하게 된다.
	//cout << Side << endl;이 문제를 해결하기위해 스위치문을 삽입할것이다.
	cout << Ortermenu(menu)<<endl;//매개변수 이름까지 동일하게 설정해버리자
	//cout << Orterside(Side);//클래스에서 끌어온 변수 멤버라 S를 대문자로 설정할시 문제가 발생한다.
	cout << Orterside(side)<<endl;//웬만하면 동일하게 설정


}
