#include <iostream>
using namespace std;

enum Menu{KimchiRamyeon,Sin,Anseong};//�������� ������ �̸��� ������ ������ ���� �̸��� �����������.
enum Sidemenulist{Rice,Danmuji,Kimchi};//d

class Ramen
{
private:
	string Ramyeon;
	string Sidemenu;
	//int c, d;//���� ���� �Է��� �ް� �ʹٸ� ������ ������ �ƴ� �Ϲ� ������ ���� �̸��� �޴°� ����
	Menu menu;
	Sidemenulist side;//Ŭ������ ������ ���� ������� �Լ� �Ű�����(�ٸ��̸�)�� ��������� �̻��� ������
	//�Ʒ����� Ȯ���Ҽ� �ֵ� �ٸ� �̸��� ����� ������ �߻��Ѵ�.
	//�����ϸ� Ŭ������ ������ �̸� �״�� ���󰡴°ɷ� ����.
	

public:

	Ramen(string Ramyeon,string Sidemenu,Menu menu, Sidemenulist side);//�Լ� �̸��� ���� �ؾ��ϳ�? ������ �Լ�
	void Orter();


	
};

int main()
{
	string a, b;
	int c, d;
	cout << "�԰� ���� �޴��� �ۼ��ؼ� �����Ұ�. ���� �޴� ���̵� �޴���" << endl;
	cin >> a >> b;
	cin >> c >> d;
	/*Ramen nyam(a,b,c,d);*///�������� 2���� �߰��Ͽ� �����Ϸ� �ߴµ� Ŭ���� �ȿ� �������� �ʴ� �༮���̶� ���������� 
    //Ŭ���� ���� ȣȯ�� ���� �ʴ� ���� Ȯ��
	//���� ���� �Է� �������� �ʹ��� �翬�ϰԵ� Ŭ���� ���������� �Է��ؾ� �Ѵ�.//���ž� �����̾�?
	//Ŭ���� ���������� �����ؼ� ���� �������� ������ü�� �Ұ� cin�� ������ �ȵȴ�.
	//���� �������� �ƴ� ���� ������ �ǰ���?
	Ramen nyam(a,b, Sin, Kimchi);//nyam���� ���� ȣ�Ⱑ���Ѱ��� ������ ����Լ��� ������ ���� �Լ��ۿ� ����.

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
string Ortermenu(Menu menu)//Ŭ������ ������ �̸� �״�� �������
{
	switch(menu)
	{
	case KimchiRamyeon :
		return "��ġ���";
	case Sin:
		return "�Ŷ��";
	case Anseong:
		return "�ȼ�����";
	default:
		return "���������";

	}
}
string Orterside(Sidemenulist side)//Ŭ������ ������ �̸� �״�� �������
{
	switch (side)
	{
	case Rice:
		return "�����";
	case Danmuji:
		return "�ܹ���";
	case Kimchi:
		return "��ġ";
	default:
		return "���������";
	}
}
void Ramen::Orter()
{
	cout << "���� �޴� : " <<Ramyeon<< endl;
	cout << "���̵� �޴� : " << Sidemenu << endl;
	//cout << menu << endl;//������ �����̱� ������ �������� ����ϰ� �ȴ�.
	//cout << Side << endl;�� ������ �ذ��ϱ����� ����ġ���� �����Ұ��̴�.
	cout << Ortermenu(menu)<<endl;//�Ű����� �̸����� �����ϰ� �����ع�����
	//cout << Orterside(Side);//Ŭ�������� ����� ���� ����� S�� �빮�ڷ� �����ҽ� ������ �߻��Ѵ�.
	cout << Orterside(side)<<endl;//�����ϸ� �����ϰ� ����


}
