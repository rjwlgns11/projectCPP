#include "kioskproject.h"


int main()
{
	int mycash, change=0, Accumulatedamount=0, returnm=0;//���� ���� �ܵ� �հ踦 �ǹ���
	int mainmenulist[5]={0,0,0,0,0};
	int mainmenusizeuplist[5] = {0,0,0,0,0};
	int sidemenulist[5]={0,0,0,0,0};
	int maindish[10]={0,0,0,0,0,0};
	printf("������Ʈ ���� �� �� �ܰ� �Է��Ͽ� �ֽʽÿ�.\n");
	printf("ī�� ������ �ѵ���� ������.\n");

	scanf("%d", &mycash);//�ܾ�
	system("cls");


	chineserestaurant();//�����λ�
	

	eat();//���� ���� ����
	
	Accumulatedamount += menu(Accumulatedamount,mainmenulist, mainmenusizeuplist, maindish) + exmenu(Accumulatedamount, sidemenulist);//�޴��� �ֹ��ϰ� ������ �ݾ��� �ջ�


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	do
	{
		printf("�����Ͻñ��� �޴��� �߰� Ȥ�� ����Ͻðڽ��ϱ�?\n\n");
		printf("�޴��� �߰��Ͻ÷��� 1�� ����Ͻ÷��� 2���� �����ּ���\n");
		printf("����â���� �Ѿ�÷��� 3���� �����ּ���\n");
		
		scanf("%d", &returnm);
		system("cls");

		if (returnm == 1) {
        	Accumulatedamount += returnmenu(Accumulatedamount, mycash, sidemenulist, mainmenulist, mainmenusizeuplist, maindish);
			
			continue;
		}
		else if (returnm == 2)
		{
			Accumulatedamount -= removemenu(mainmenulist, mainmenusizeuplist, maindish);
			continue;
		}
		else if(returnm==3){
			printf("����â���� �Ѿ�ϴ�.\n");
			break;
		}
		else {
			printf("��ȿ�� ������ �ƴմϴ�\n�ɼ��� �ٽ� �����մϴ�\n");
			continue;
		}

	} while (returnm==1||returnm==2);



	selectlist(mainmenulist, mainmenusizeuplist, maindish, sidemenulist,sizeof(maindish)/sizeof(int));

	mycash=cash(mycash, Accumulatedamount);
	


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	printf("����� ��ġ�� �� �����ܾ� : %d\n\n", mycash);//��������

	

	exit(0);//�ܼ� ��Ʈ �������Լ�(?)����

	return 0;
}