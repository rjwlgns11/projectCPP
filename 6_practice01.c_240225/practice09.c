//#include "Header.h"
//#include "Random.h"
////����̸� ������� ���ε� �Ұ�
//
//int main()
//{
//	srand(time(NULL));//���� �ð��� üũ���ִ� �ڵ�
//	////stdlib.h�� ����� �ϳ� standard liblery.h
//	////srand() �ȿ� ���� ������ �� ���� �ش��ϴ� 
//	////seed������ ���õ� ������� ������ �ȴ�.
//
//	////seed�� ���� �˰����� �����ϱ� ���� ����ϴ� ���� �ǹ��Ѵ�.
//
//	////time.h�� time�� ()�ȿ� ���� ������ �ð��� ó���ϴ� �Լ�
//	////NULL�� ����� ���� �ð��� �� ������ ó���Ѵ�
//	////(1970�� 1�� 1�� ���غ��� ��������� �ð��� �ʷ� ��ȯ�� ��) 
//
//	//int rand_number = rand() % 40;// 0~39
//	//printf("%d\n", rand_number);
//
//
//	int rand_number = rand() % 100;// 0~99
//	int num;
//	
//
//	//while (rand_number)//
//	//{
//	//	scanf("%d", &num);//�Է��� ���⼭ �޾ƾ���.
//	//	if (rand_number > num) {
//	//		printf("UP\n");
//	//		
//	//	}
//	//	else if (rand_number < num) {
//	//		printf("DOWN\n");
//	//		
//	//	}
//	//	else {
//
//	//		printf("�� ���� �����մϴ�\n");
//	//		break;
//	//	}
//	//	
//	//}
//	do
//	{
//		scanf("%d", &num);//�Է��� ���⼭ �޾ƾ���.
//		if (rand_number > num) {
//			printf("UP\n");
//
//		}
//		else if (rand_number < num) {
//			printf("DOWN\n");
//
//		}
//		else {
//
//			printf("�� ���� �����մϴ�\n");
//			break;
//		}
//
//	} while (rand_number);
//
//
//	do {
//		scanf("%d", &num);//�Է��� ���⼭ �޾ƾ���.
//		if (rand_number > num) {
//			printf("UP\n");
//
//		}
//		else if (rand_number < num)
//		{
//			printf("DOWN\n");
//		}
//	} while (rand_number != num);
//	printf("����!");
//
//	return 0;
//}