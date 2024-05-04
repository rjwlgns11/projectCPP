//#include "Header.h"
//
////구조체(struct)
////사용자 정의 타입
////구조체 안에 여러 가지 변수를 선언해 구조체 내부의 변수(멤버 변수)
////로 만들어 편하게 사용하는 용도로 만듭니다.
//#include <stdlib.h>
//#include <string.h>
////구조체 사용 목적
////1. 프로그램에서 빈번하게 사용되는 변수의 이름을 재활용하는 것이 가능합니다.
////2. 특정 구조체의 특정 멤버 변수라는 특징으로, 프로그램 내에서 특정 데이터에 대한 표현을 더 명확하게 할 수 있습니다.
//
////프로그램에서 사용하는 여러 가지 형태의 데이터를 묶어서 구조화하는 용도로 사용되며,
////함수를 사용할 때도 해당 구조체의 데이터를 넘겨주는 것으로 간단히 사용이 가능합니다.
//
////구조체 배열
////struct 구조체명 변수명[배열의 길이];
//
////구조체 선언
////struct 구조체명 변수명;
//
////구조체 만드는 방법
////struct 구조체명
////{
////	구조체 내부에서 사용될 변수(멤버 변수);
////};
//
////구조체 생성 및 초기화
////struct 구조체명 변수명 = {멤버 변수에 있는 데이터 순서대로 값 작성};
//
//struct Student
//{
//	int  sid;
//	char sname[10];
//	int  sage;
//};
//
////매개변수가 일반 구조체일 경우
//void printStruct(struct Student s)
//{
//	printf("학번 : %d 이름 : %s  나이 : %d \n", s.sid, s.sname, s.sage);
//}
//
////매개변수가 구조체 포인터인 경우
//void printStructPointer(struct Student* s)
//{
//	printf("학번 : %d 이름 : %s  나이 : %d \n", s->sid, s->sname, s->sage);
//	// -> (화살표 연산자 : arrow pointer)는 구조체가 가리키고 있는 값이 저 값임을 직관적으로 표현해줍니다.
//}
//
//int main()
//{
//	struct Student s1; //구조체 Struct 변수 s1 선언
//	s1.sid = 1;
//	//s1.sname = "홍길동"; //문자열이 선언되고 나서는 ""의 형태로  초기화할 수 없습니다.
//	strcpy(s1.sname, "홍길동");
//	//스트링 카피(strcpy)는 첫번째로는 변경하고 싶은 문자열, 두번째에는 변경할 값을 작성합니다.
//	//이럴 경우 해당 문자열은 변경할 값의 값을 복사하게 됩니다.(문자열 변경)
//	s1.sage = 17;
//	printf("학번 : %d 이름 : %s  나이 : %d \n", s1.sid, s1.sname, s1.sage);
//	struct Student s2; 
//	s2.sid = 2;
//	strcpy(s2.sname, "김재하");
//	s2.sage = 18;
//	printf("학번 : %d 이름 : %s  나이 : %d \n", s2.sid, s2.sname, s2.sage);
//	struct Student s3 = {3,"이한음", 19}; //구조체 생성과 초기화
//	printf("학번 : %d 이름 : %s  나이 : %d \n", s3.sid, s3.sname, s3.sage);
//	struct Student s4 = s3; //구조체 복사
//	printf("(복사)학번 : %d 이름 : %s  나이 : %d \n", s4.sid, s4.sname, s4.sage);
//
//	struct Student* s5 = NULL; //구조체 포인터 선언
//	//NULL 포인터 : 포인터는 선언만 해두면, 어느 값을 가리킬지 모르기 때문에
//	//현재 가리키는 값이 없음을 명시하는 포인터
//
//	s5 = &s4; //주소 값 전달
//	
//	//값 수정
//	s5->sid = 5;
//	s5->sage = 17;
//	strcpy(s5->sname, "B");
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s5->sid, s5->sname, s5->sage);
//
//
//	//구조체 배열 사용
//	struct Student S_Array[5] =
//	{
//		{1,"A",17}
//		,
//		{2,"B", 20}
//		,
//		{3, "C", 25}
//		,
//		{4, "D", 26}
//		,
//		{5, "E", 22}
//	};
//
//	//인덱스를 이용한 접근
//	S_Array[0].sid = 1;
//
//
//
//
//
//
//	return 0;
//}