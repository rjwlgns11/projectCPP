#include "kioskproject.h"


int main()
{
	int mycash, change=0, Accumulatedamount=0, returnm=0;//각각 내돈 잔돈 합계를 의미함
	int mainmenulist[5]={0,0,0,0,0};
	int mainmenusizeuplist[5] = {0,0,0,0,0};
	int sidemenulist[5]={0,0,0,0,0};
	int maindish[10]={0,0,0,0,0,0};
	printf("프로젝트 시작 전 내 잔고를 입력하여 주십시오.\n");
	printf("카드 결제시 한도라고 가정함.\n");

	scanf("%d", &mycash);//잔액
	system("cls");


	chineserestaurant();//입장인사
	

	eat();//매장 포장 선택
	
	Accumulatedamount += menu(Accumulatedamount,mainmenulist, mainmenusizeuplist, maindish) + exmenu(Accumulatedamount, sidemenulist);//메뉴를 주문하고 누적된 금액의 합산


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	do
	{
		printf("결제하시기전 메뉴를 추가 혹은 취소하시겠습니까?\n\n");
		printf("메뉴를 추가하시려면 1번 취소하시려면 2번을 눌러주세요\n");
		printf("결제창으로 넘어가시려면 3번을 눌러주세요\n");
		
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
			printf("결제창으로 넘어갑니다.\n");
			break;
		}
		else {
			printf("유효한 선택이 아닙니다\n옵션을 다시 선택합니다\n");
			continue;
		}

	} while (returnm==1||returnm==2);



	selectlist(mainmenulist, mainmenusizeuplist, maindish, sidemenulist,sizeof(maindish)/sizeof(int));

	mycash=cash(mycash, Accumulatedamount);
	


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	printf("계산을 마치고 난 최종잔액 : %d\n\n", mycash);//최종점검

	

	exit(0);//콘솔 폰트 색변경함수(?)종료

	return 0;
}