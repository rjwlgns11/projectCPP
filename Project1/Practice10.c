//#include "Header.h"
//#include <Windows.h>
//
////void �Լ� ����� + �Ű� ���� �ۼ�
////�Ű� ������ �Լ��� ȣ���� �� �־��� ���� ���� ǥ��
//void textColor(int color_number)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
//}
//
//
////void �Լ� �����
////void�� �� ������ Ÿ���� �ǹ��մϴ�.
////��븸 �ϰ� ������ �뵵�Դϴ�.
//void Title()
//{
//	textColor(10); //���
//	printf("CAFE");
//	textColor(9); // �Ķ��� 
//	printf("PROGRAM");
//	textColor(15); //���
//	printf("1. ���� ����\n");
//	printf("2. ���α׷� ����\n");
//}
////������ ���°� �ִ� �Լ� �����
////return�� �ۼ��� ������� �����ϴ� �뵵�Դϴ�.
//int Input()
//{
//	int data;
//	scanf("%d", &data);
//	return data;
//}
//
//
//
//
//int main()
//{
//	system("title MyKiosk");
//	system("mode con cols=60 lines=30"); //cols (����) line(����) ũ�� ����
//
//	//���� �ݺ� �ڵ�
//	while (1)
//	{
//		Title(); //�Լ� ȣ��
//		//int select = Input();
//		switch (Input())
//		{
//		case 1 :
//			printf("1. Ŀ�� 2. ���̵� 3. ������ �ֽ�\n"); break;
//		case 2 :
//			printf("���α׷��� �����ϰڽ��ϴ�.\n");
//			exit(0);
//		}
//	
//	}
//
//
//
//	return 0;
//}