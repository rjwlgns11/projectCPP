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
	cout << "x축을 입력" << endl;
	cin >> a >> b;
	cout << "y축을 입력" << endl;

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
		cout << "제 1 사분면 위치" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "제 2사분면 위치" << endl;

	}
	else if (x > 0 && y < 0)
	{
		cout << "제 3사분면 위치" << endl;

	}
	else if (x < 0 && y < 0)
	{
		cout << "제 4사분면 위치" << endl;

	}
	else
	{
		cout << "0" << endl;
	}

}