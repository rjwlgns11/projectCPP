//#include "Header.h"
//
////프로그램 내에서 사용할 수 있는 변수의 종류
//
//int a;//전역 변수(global variable)
////프로그램 전체에서 사용이 가능한 변수를 의미합니다.
////프로그램이 종료될 때 삭제됩니다.
//
//static int b; //정적 변수(static variable)
////만들고 난 이후로부터 프로그램 종료 전까지는 유지됩니다.
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
//	//지역 변수(Local variable)
//	//함수 내부에서 만들어지는 이 변수는 해당 영역을 벗어날 경우 데이터에서 삭제되는 특징을 가지고 있습니다.
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
//	int c = 5; //main 안에서만 존재합니다. main이 종료되면 삭제됩니다.
//	LocalExample02(); //여기서 만든 c는 위에 있는 c와 다른 c
//	printf("Local = %d\n", c);
//
//	return 0;
//}
