#include <iostream>
using namespace std;
class quadrant
{
private:
	int x, y;
public:
	quadrant(int x, int y);
	void quadrantInfo();

};
int main()
{
	int a, b;
	int x, y;
	cout << "x���� �Է�" << endl;
	cin >> a >> b;
	cout << "y���� �Է�" << endl;

	cin >> x >> y;
	quadrant q1(a+b,x+y);
	q1.quadrantInfo();



	return 0;
}

quadrant::quadrant(int x, int y)
{
	this->x = x;
	this->y = y;

}

void quadrant::quadrantInfo()
{
	if (x > 0 && y > 0)
	{
		cout << "�� 1 ��и� ��ġ" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "�� 2��и� ��ġ" << endl;

	}
	else if (x > 0 && y < 0)
	{
		cout << "�� 3��и� ��ġ" << endl;

	}
	else if (x < 0 && y < 0)
	{
		cout << "�� 4��и� ��ġ" << endl;

	}
	else
	{
		cout << "0" << endl;
	}

}