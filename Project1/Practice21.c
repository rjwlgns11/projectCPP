//#include "Header.h"
//#include <string.h>
////힌트: 구조체 배열
//
////5명의 이름과 전화번호를 저장하는 구조체 배열을 만들어
////값을 저장한 후, 이름 입력 시 전화번호를 출력하는
////프로그램을 만들고자 합니다.
//
////직접 넣어두거나 아니면 입력문을 통해서 넣어주거나는 자유
////답안은 입력문으로 드리겠습니다.
//
//	//char example[10] = "바나나";
//	//if (strcmp(example, "바나나") == 0)
//	//{
//	//	printf("SAME");
//	//}
//
//struct PhoneBook
//{
//	char name[10];
//	char phone_number[20];
//};
//
//int main()
//{
//	struct PhoneBook p[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 사람의 이름을 입력해주세요 >> ", i+1);
//		scanf("%s", p[i].name);
//		printf("%d번째 사람의 전화번호를 입력해주세요(XXX-XXXX-XXXX) >> ", i + 1);
//		scanf("%s", p[i].phone_number);
//		printf("\n");
//	}
//
//	char search_name[10];
//	printf("검색할 사람의 이름을 입력해주세요 >> ");
//	scanf("%s", search_name);
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (strcmp(p[i].name, search_name) == 0)
//		{
//			printf("이름 : %s 전화번호 %s \n", p[i].name, p[i].phone_number);
//			break;
//		}
//	}
//
//	return 0;
//}