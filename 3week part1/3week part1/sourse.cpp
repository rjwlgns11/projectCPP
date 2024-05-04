//#include <iostream>
//using namespace std;
//
////클래스 사용 방법 
//
////class 클래스명 <- 클래스(or 구조체)의 이름을 작성한다.
////{
//
////public:  <-외부에 공개를 진행할 정보들을 작성하는 영역에 대한 표현(접근제한 지시자)
//// //생성자명(); 생성자는 클래스의 이름과 동일한 함수를 의미한다.
////            따로 타입을 작성하지 않는다.
////	        이 함수는 클래스를 생성했을 경우 자동으로 호출된다.
////	        이 값을 수정하는 것으로 객체 생성시의 작업을 표현할 수 있다.
////	필드명; <-클래스 내부에서 설계된 변수(멤버 변수)를 지칭하는 용어
////	필드는 객체 지향 프로그래밍에서 객체에 대한 정보를 표현하는 용도로 사용됨
////	메소드명(); <-클래스 내부에서 설계된 함수(멤버 함수)를 지칭하는 용어
////	메소드는 객체지향 프로그래밍에서 객체에 대한 동작, 기능을 표현하는 용도로 사용됨
////private: <- 외부에 공개하지 않을 정보들을 작성하는 영역에 대한 표현(접근제한 지시자)
////	...
////
////};
//
////열거형 enum : 상수를 단어로 표현할 수 있는 데이터
////프로그램에서 같은 유형의 정보를 표현하고자 할때 사용하며
////enum자체는 따로 뜻을 가지고 있지는 않다.(분리와 종류 식별이 목적)
//enum Genre { Balad, Trot, Dance, Rap, Rock, Indi };//엄연히 정수형이기때문에 숫자로 표현됨 0부터 시작.
//enum Category { Kpop, Jpop, Pop };//눈치껏 적당히 해석
//
//class Song
//{
//private://공개하지 않을 정보
//	string title, artist;//string은 기본 자료형이 아니다!
//	Genre genre;
//	Category category;
//public:
//	Song(string title, string artist, Genre genre, Category category);//생성자
//	void SongInfo();
//};
//
//int main()
//{
//	Song s("밤양갱", "BIBI", Indi, Kpop);//생성자를 수정하면 클래스 생성시 넣어줄 값을 전달해서 작업하기에
//	//추가로 값을 수정할 필요가 없어 편리하게 사용 가능하다.
//	
//	s.SongInfo();
//	cout << "입력할 곡명 아티스트 장르 카테고리를 순서에 맞게 입력" << endl;
//	
//	return 0;
//}
////클래스에서 만들어진 함수라고 명시되어있어 코드를 분석하기 쉽다.
////생성자 오버로딩
//Song::Song(string title, string artist, Genre genre, Category category)//::은 "어디에 있는"것인지 명시해주는 
//{
//	//생성자의 역할 : 클래스 생성시에 진행할 작업(초기화)를 담당하는 함수
//	//클래스에서 생성시 매개변수의 값을 클래스의 필드 값으로 설정하는기능
//	this->title = title;
//	//this -> (디스 포인터) 클래스 자신이 가지고 있는 값임을 명시하는 기능
//	//매개변수로 전달받은 값이 클래의 필드값과 이름이 같을경우 구분을 위해 사용한다.
//	this->artist = artist;
//	this->genre = genre;
//	this->category = category;
//
//}
//
//string Songgenre(int genre)//열거형에서 가져온 자료 장르(엄연히 정수형으로 들어감)
//{
//	switch (genre)//정수형이기 때문에 스위치문이 성립
//	{
//	case Balad://0
//		return  "발라드";
//		
//	case Trot://1
//		return  "트로트";
//		
//	case Dance://2
//		return "댄스";
//		
//	case Rap:
//		return "랩";
//		
//	case Rock:
//		return "락";
//		
//	case 5://정수를 대입해도 되긴한다.
//		return "인디";
//	
//	default:
//
//		break;
//	}
//}
//
//string SongCategory(int category)
//{
//	switch (category)
//	{
//	case Kpop:
//		return "Kpop";
//
//	case Jpop:
//		return "Jpop";
//	case Pop:
//		return "Pop";
//	default:
//		break;
//	}
//
//}
//
////이 노래가 어떤 정보를 가지고있는지 출력하는 기능
//void Song::SongInfo()
//{
//	
//	cout << "=========================" << endl;
//	cout << "제목 : " << title << endl;
//	cout << "아티스트 : " << artist << endl;
//	
//
//	cout << "장르 : " << Songgenre(genre) << endl;
//
//	
//	cout << "카테고리 : " << SongCategory(category) << endl;
//	cout << "=========================" << endl;
//	
//
//
//}