//#include "Header.h"
//#include <windows.h>//�����쿡�� �����ϴ� ����� ����Ҽ�����
////�б⹮ switch
///*
//    
//	switch(������)//���⿡ ���� �ȵ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	case ��1 : //���⿡ ���� �ȵ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	   ������ ��ɹ� ;
//	   break;
//    case ��2 : 
//	   ������ ��ɹ� ;
//	   break;
//	default
//	   ���� �ۼ��� case�� �ش����� �ʴ� ��� ��Ȳ�� ó���� ��ɹ�
//
//
//switch���� if���� ����� ������ �������ִ�.
//if�� �ٸ��� �� {}������ ��� ��츦 üũ�ϰ� �־� �������� �� ����.
//�� if�� �ٸ��� ������ ������ ǥ���ϱ�� ��ƴ�.(�ַ� ������ ��� ���)
////���� ���α׷��� �о߿��� ���� ���Ǵ� ���
////�ܼ� Ű���� �Է� �۾�, Ű����ũ �޴����ñ�� ������ 
//*/
//
//int main()
//{
//	int select;
//	printf("1.start 2.option 3.exit\n");
//	scanf("%d", &select);
//
//	switch (select)
//	{
//	 case 1:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
//		 printf("Start Program\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 break;
//
//	 case 2:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
//		 printf("Option select\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 break;
//	 case 3:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
//		 printf("Program Exit\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 exit(0);//���α׷��� ������
//		 break;
//
//	 default:
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
//		 printf("���� ����Դϴ�.\n");
//		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//		 exit(0);
//	}
//
//
//
//	return 0;
//}