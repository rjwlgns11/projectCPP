//#include "Header.h"
//
////�б⹮ switch
//
////switch (������)
////{
////case �� :
////	������ ��ɹ�;
////	break;
////case ��2 :
////	....
////default :
////	���� �ۼ��� case�� �ش����� �ʴ� ��� ��Ȳ�� ó���� ��ɹ�
////}
//
////switch���� if���� ����� ������ ������ �ֽ��ϴ�.
////if���� �ٸ��� �� {} ������ ��� ��츦 üũ�ϰ� �־� �������� �� �����ϴ�.
////�� if��ó�� ������ ������ ǥ���ϱ�� ��ƽ��ϴ�.(�ַ� ������ ��� ���)
//
////���� ���α׷��� �о߿��� ���� ���Ǵ� ���
////�ܼ� Ű���� �Է� �۾� , Ű����ũ �޴� ���� ��� ����
//
//
//#include <windows.h> //�����쿡�� �����ϴ� ��ɵ��� ����� �� �ֽ��ϴ�.
//int main()
//{
//	
//	//�޴� ����
//	int select;
//	printf("1. START 2. OPTION 3. EXIT\n");
//	scanf("%d", &select);
//	
//	//����ġ�� �ۼ�
//	switch (select)
//	{
//	case 1 :
//		//�ܼ� �ؽ�Ʈ ���� �����ϴ� �ڵ�		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //������
//		printf("START PROGRAM\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //���
//		break; //break�� �ۼ����� ���� ��� ���� case�� �۾��� �����ϱ� �˴ϴ�.
//	case 2:
//		//�ܼ� �ؽ�Ʈ ���� �����ϴ� �ڵ�		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); //û�ϻ�
//		printf("OPTION SELECT\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //���
//		break; //break�� �ۼ����� ���� ��� ���� case�� �۾��� �����ϱ� �˴ϴ�.
//	case 3:
//		//�ܼ� �ؽ�Ʈ ���� �����ϴ� �ڵ�		
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); //�����
//		printf("PROGRAM EXIT\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //���
//		exit(0); //���α׷��� �����մϴ�.
//		break; //break�� �ۼ����� ���� ��� ���� case�� �۾��� �����ϱ� �˴ϴ�.
//	default :
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //���
//		printf("���� ����Դϴ�.\n");
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //���
//	}
//
//
//	return 0;
//}