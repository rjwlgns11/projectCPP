//#include "Header.h"
//
////���α׷� ������ ����� �� �ִ� ������ ����
//
//int a;//���� ����(global variable)
////���α׷� ��ü���� ����� ������ ������ �ǹ��մϴ�.
////���α׷��� ����� �� �����˴ϴ�.
//
//static int b; //���� ����(static variable)
////����� �� ���ķκ��� ���α׷� ���� �������� �����˴ϴ�.
//void StaticExample01()
//{
//	b += 5;
//}
//void StaticExample02()
//{
//	static int d = 0;
//	d += 5;
//	printf("staticExample02 %d\n", d);
//}
//void GlobalExample01()
//{
//	a += 5;
//}
//void LocalExample01()
//{
//	int c = 0; 
//	//���� ����(Local variable)
//	//�Լ� ���ο��� ��������� �� ������ �ش� ������ ��� ��� �����Ϳ��� �����Ǵ� Ư¡�� ������ �ֽ��ϴ�.
//	c += 5;
//	printf("LocalExample = %d\n", c);
//}
//void LocalExample02()
//{
//	int c = 0;
//	c += 5;
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//		LocalExample01();
//
//	for(int i = 0 ; i <10; i++)
//		StaticExample02();
//
//	GlobalExample01();
//	printf("global = %d\n", a);
//	StaticExample01();
//	printf("static = %d\n", b);
//	LocalExample01();
//	int c = 5; //main �ȿ����� �����մϴ�. main�� ����Ǹ� �����˴ϴ�.
//	LocalExample02(); //���⼭ ���� c�� ���� �ִ� c�� �ٸ� c
//	printf("Local = %d\n", c);
//
//	return 0;
//}
