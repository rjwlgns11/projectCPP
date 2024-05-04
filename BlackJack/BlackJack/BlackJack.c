#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"

int Wincount = 0;
int Losecount = 0;
int Drowcount = 0;
int playcount = 0;
int playmoney;
//간단히 만들어보는 블랙잭 게임 
// 블랙잭 : 21
// 게임의 룰 
// 승리조건: 카드의 합이 21점 또는 21점에 근접한값을 가진사람이 이기는 게임
// 기본 규칙
// 딜러의 첫번째 카드를 제외한 모든 카드는 공개 상태가 된다
// 게임을 시작하면 플레이어는 각 2장의 카드를 받는다.(딜러 포함)
//플레이어의 경우에는 모든 카드를 공개한다
//플레이어의 처음패가 '블랙잭'일경우 배팅금액의 2배 받게 된다
/*딜러의 처음 2장의 패가 블랙잭 일경우 배팅금액의 2배를 잃게된다
* 딜러와 플레이어가 모두 블랙잭일경우 무승부 처리
*/

//딜러와 플레이어의 게임 플레이
//플레이어는 카드를 더 뽑거나 멈출수있다 (drow(hit), stand)

//딜러는 플레이어가 카드를 뽑은후 카드 추가 여부를 결정한다
//현재 본인의 패가 17이상인경우 stand 진행
//현재 본인의 패가 17미만일경우 hit 진행

//[펌블]: 패가 21초과일경우 0점으로 처리합니다 (패배)
//판돈이 0원인경우 강제 패배된다.
//계산을 진행할때 j,q,k의 경우는 10으로 계산한다
//a의 경우는 1또는 11을 고를수있다


#define blackjack 21
#define A1 1
#define A2 11
#define J 10
#define Q 10
#define K 10
#define WIN 0//무슨의도로 0으로 선언했을까?
#define LOSE 1
#define DROW 2
#define HIT 1
#define STAND 2
#define BLACKJACK 21
#define FUMBLE 22

int playgame(int playmoney, int card[]);
void Aceselect(int playercard[], int playercardtrade,int playertotal);
void dAceselect(int dealercard[], int dealercardtrade,int dealertotal);
void cardlist(int playercard[], int dealercard[], int playercardtrade);
int shobu(int playertotal, int dealertotal);
int WinningPercentage(int Wincount, int Losecount, int Drowcount,int playcount);
 /*setvoidColor(int color, int bgcolor);*/

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

    system("color 6");
    system("mode con:cols=60 lines=30");
    SetConsoleTitle(TEXT("BlackJack"));

    //void setColor(color, bgcolor);

    int select;
    int card[] = { A1,2,3,4,5,6,7,8,9,10,J,Q,K };
    
    
    

    srand(time(NULL));

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("┌────────────┐\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf("│ BLACK JACK │\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("│ 1. PLAY    │\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf("│ 2. COUNT   │\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf("│ 3. EXIT    │\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("└────────────┘\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("☞   "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    
    scanf("%d", &select);

    switch (select)
    {

    case 1:

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("게임을 시작합니다\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        printf("본인의 실탄을 장전하세요\n");
        scanf("%d", &playmoney);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        playgame(playmoney, card);
        
        
        break;

    case 2:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("전적을 불러옵니다.\n"); 
        WinningPercentage(Wincount, Losecount, Drowcount,playcount);

        break;

    case 3:
        printf("게임을 종료합니다 \n");
        exit(0);
    }

    return 0;
}

int playgame(int playmoney, int card[])
{
    

        while (playmoney > 0) {


            int beting;
            int playercard[13] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
            int dealercard[13] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
            int playertotal = 0, dealertotal = 0;
            int playerstate = 0, dealerstate = 0;
            int playercardtrade = 0, dealercardtrade = 0;
            int selectmenu = 0;
            int shobucheck = 0;
            int HITorSTAND = 0;
            int totalbeting = 0;
            

            playcount++;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            printf("%d번째 게임을 시작합니다\n\n", playcount);
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("시작 전 베팅하십시오.\n");
            if (playmoney <= 0)
            {
                printf("판돈이 부족하여 더 이상 베팅 할 수 없습니다\n\n");
                break;
            }
            else
            {
                scanf("%d", &beting);
                playmoney -= beting;
                totalbeting += beting;
            }
            
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("플레이어의 베팅액 %d\n\n", beting);
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

            printf("플레이어의 현재 판돈 %d\n\n", playmoney);

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
           
            system("pause");
            system("cls");

            cardlist(playercard, dealercard, playercardtrade);
            
            for (int i = 0; i < 2; i++)
            {
                playercard[i] = card[rand(time(NULL)) % 12];
                dealercard[i] = card[rand(time(NULL)) % 12];
                playertotal += playercard[i];
                dealertotal += dealercard[i];
                playercardtrade++;
                dealercardtrade++;
            }
           
            printf("플레이어의 ");
            for (int i = 0; i < playercardtrade; i++)
            {
                printf("%d번째 카드 : %d ",i+1, playercard[i]);
            }
            printf("\n");

            printf("딜러의 1번째 카드 : %d\n\n", dealercard[0]);

            Aceselect(playercard, playercardtrade, playertotal);
            dAceselect(dealercard, dealercardtrade, dealertotal);

            if (dealertotal >= 17)
            {
                printf("딜러의 카드값이 17을 초과하여 자동으로 STAND상태가 됩니다\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                dealerstate = STAND;
            }
            else
            {
                dealerstate = HIT;
            }
          
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

            printf("플레이어 판돈 %d\n\n", playmoney);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);


            while (selectmenu!=3)
            {
                
                playertotal = 0;

                for (int i = 0; i < playercardtrade; i++)
                {
                    playertotal += playercard[i];
                }

                dealertotal = 0;

                for (int i = 0; i < dealercardtrade; i++)
                {

                    dealertotal += dealercard[i];
                }

                
                if (playertotal == BLACKJACK && dealertotal == BLACKJACK)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                    
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n",i+1,playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n", i + 1, dealercard[i]);
                    }

                    printf("플레이어와 딜러가 블랙잭입니다. 무승부 처리 됩니다.\n");
                    playmoney += totalbeting;
                    printf("플레이어의 판돈 : %d\n\n", playmoney);
                    Drowcount++;
                    break;
                }
                else if (dealertotal == BLACKJACK)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);


                    printf("딜러가 블랙잭입니다.딜러가 승리하였습니다.\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n",  i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n",i + 1, dealercard[i]);
                    }
                    playmoney += -totalbeting*2;
                    printf("플레이어의 판돈 : %d \n\n", playmoney);
                    Losecount++;
                    break;
                }
                else if (playertotal == BLACKJACK)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                    printf("플레이어가 블랙잭입니다\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting *2;
                    printf("플레이어의 판돈 : %d\n", playmoney);
                    Wincount++;
                    break;
                }
                else if (playertotal >= FUMBLE && dealertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

                    printf("플레이어와 딜러가 21을 초과하여 무승부처리됩니다\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n",  i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting;
                    Drowcount++;
                    printf("플레이어의 판돈 : %d\n", playmoney);
                    break;
                }
                else if (playertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                    printf("플레이어가 21을 초과하여 패배처리됩니다\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += -totalbeting;
                    Losecount++;
                    printf("플레이어의 판돈 : %d\n", playmoney);
                    break;

                }
                else if (dealertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                    printf("딜러가 21을 초과하여 패배처리됩니다\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("플레이어의 %d번째 카드 : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("딜러의 %d번째 카드 : %d \n",i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting;
                    printf("플레이어의 판돈 : %d\n", playmoney);
                    Wincount++;
                    break;
                }
                

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                printf("선택하십시오\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

                printf("1. 현재 카드 상태 보기"); 

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

                printf("2. HIT or STAND ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);

                printf(" 3. 승부걸기\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                scanf("%d", &selectmenu);
                system("cls");
                switch (selectmenu)
                {
                case 1:

                    cardlist(playercard, dealercard, playercardtrade);
                    break;

                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                    printf("1. HIT ");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

                    printf("or 2. STAND\n");
                    scanf("%d", &HITorSTAND);
                    system("pause");
                    system("cls");

                    if (HITorSTAND == 1)
                    {
                        system("cls");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

                        printf("HIT 이전 베팅하십시오.\n\n");
                       
                        if (playmoney <= 0)
                        {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                            printf("판돈이 부족하여 판돈을 걸수없습니다\n\n");
                        }
                        else {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            scanf("%d", &beting);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                            printf("플레이어의 베팅액 %d\n\n", beting);

                            playmoney -= beting;
                            totalbeting += beting;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);

                            printf("플레이어의 현재 판돈 %d\n\n", playmoney);

                            playercard[playercardtrade] = card[rand(time(NULL)) % 12];
                            playertotal += playercard[playercardtrade];
                            playercardtrade++;
                        }
                    }
                    else
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

                        printf("플레이어가 STAND를 선택하셨습니다 \n");
                    }


                    if (dealerstate == HIT && dealertotal < 17)
                    {
                        dealercard[dealercardtrade] = card[rand(time(NULL)) % 12];
                        dealertotal += dealercard[dealercardtrade];
                        dealercardtrade++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                    }
                    else
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                        printf("딜러가 STAND상태 입니다\n\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                        dealerstate = STAND;
                    }

                    Aceselect(playercard, playercardtrade, playertotal);
                    dAceselect(dealercard, dealercardtrade, dealertotal);
                   
                   

                    break;


                case 3:


                  
                    playertotal = 0;

                    for (int i = 0; i < playercardtrade; i++)
                    {
                        playertotal += playercard[i];
                    }

                    dealertotal = 0;

                    for (int i = 0; i < dealercardtrade; i++)
                    {

                        dealertotal += dealercard[i];
                    }
                    while (dealerstate == HIT && dealertotal < 17) {
                        if (dealerstate == HIT && dealertotal < 17)
                        {
                            dealercard[dealercardtrade] = card[rand(time(NULL)) % 12];
                            dealertotal += dealercard[dealercardtrade];
                            dealercardtrade++;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                        }
                        else
                        {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                            printf("딜러가 STAND상태 입니다\n\n");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                            dealerstate = STAND;
                        }
                    }
                    
                    shobucheck = shobu(playertotal, dealertotal);

                    if (shobucheck == WIN)
                    {
                        
                        playmoney += totalbeting * 2;
                        Wincount++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                        for (int i = 0; i < playercardtrade; i++)
                        {
                            printf("플레이어의 %d 번째 카드 :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("딜러의 %d 번째 카드 :%d \n", i + 1, dealercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        break;
                    }
                    else if (shobucheck == LOSE)
                    {
                       
                        playmoney += -totalbeting * 2;
                        Losecount++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                        for (int i = 0; i < playercardtrade; i++)
                        {
                            printf("플레이어의 %d 번째 카드 :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("딜러의 %d 번째 카드 :%d \n", i + 1, dealercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        break;
                    }
                    else if(shobucheck == DROW)
                    {
                        
                        playmoney += totalbeting;
                       
                        Drowcount++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                        for (int i = 0; i < playercardtrade; i++)
                        {
                            printf("플레이어의 %d 번째 카드 :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("딜러의 %d 번째 카드 :%d \n", i + 1, dealercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        break;
                    }


                }


            }
            

            if (playmoney <= 0)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                printf("판돈이 ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                printf("0"); 
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                printf("원이 되어 패배했습니다!\n\n");
                system("pause");
                system("cls");
                return main();
            }
            printf("플레이어의 현재 판돈 : %d\n\n", playmoney);
          
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
            printf("메인메뉴로 돌아가시겠습니까?\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            printf("1.돌아가기 ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            printf("2.계속하기\n\n");
          
            scanf("%d", &selectmenu);
            system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            if (selectmenu == 1)//메인 메뉴로 돌아가고싶은디?
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                printf("아무키를 누르면 메인 메뉴로 돌아갑니다\n\n");
                system("pause");
                system("cls");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                return main();
            }
        }

        return main();
    
}

void Aceselect(int playercard[],  int playercardtrade,int playertotal)
{
    int Aceselect = 0;
    int total = 0;

    for (int i = 0; i < playercardtrade; i++)
    {
        if (playercard[i] == A1 || playercard[i] == A2)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

            printf("플레이어에게 에이스가 있습니다\n\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            printf("어떻게 활용하시겠습니까?\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

            printf("1. 1로 활용 , ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

            printf(" 2. 11로 활용\n");
            scanf("%d", &Aceselect);
            system("pause");
            system("cls");
            switch (Aceselect)
            {
            case 1:
            {
                playercard[i] = A1;
                for (int a = 0; a < playercardtrade; a++)
                {
                    playertotal += playercard[a];
                }
                break;

            }
            case 2:
            {
                playercard[i] = A2;
                for (int a = 0; a < playercardtrade; a++)
                {
                    playertotal += playercard[a];
                }
                break;

            }

            default:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                printf("다시 입력하세요\n");
                continue;
            }


        }
        

    }

      

}

void dAceselect(int dealercard[], int dealercardtrade,int dealertotal)
{
   

    for (int i = 0; i < dealercardtrade; i++)
    {

        if (dealercard[i] == A1 && dealertotal < A2)
        {
            
            dealercard[i] = A2;
            continue;
           
        }
       
        else if (dealercard[i] == A1 && dealertotal + A2 < FUMBLE)
        {

            dealercard[i] = A2;
            continue;
        
        }
        else if (dealercard[i] == A2 && dealertotal >= FUMBLE)
        {

            dealercard[i] = A1;
            continue;

        }

        
    }
}



void cardlist(int playercard[], int dealercard[], int playercardtrade)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    printf("플레이어의 ");
    for (int i = 0; i < playercardtrade; i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("%d번째 카드: %d\n", i + 1, playercard[i]);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);


   printf("딜러의 %d번째 카드: %d\n", 1, dealercard[0]);
    
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int shobu(int playertotal, int dealertotal)
{
    if (playertotal == dealertotal)
    {
        
        printf("무승부입니다\n");
      
        return DROW;
    }
    else if (playertotal > dealertotal)
    {
        printf("플레이어의 승리입니다.\n\n");
       
        return WIN;

    }
    else
    {
        printf("딜러의 승리입니다.\n\n");
     
        return LOSE;
    }
    
}


int WinningPercentage(int Wincount, int Losecount, int Drowcount, int playcount)
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf("플레이 카운트 : %d\n\n", playcount);
    printf("승: %d ", Wincount);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

    printf("무: %d ", Drowcount);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

    printf("패 : %d\n\n", Losecount);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("승률 : %.3f% \n\n", (float)100 * Wincount / playcount);
    printf("메인 메뉴로 돌아갑니다\n");


    system("pause");
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    return main();

}

//void setColor(int color, int bgcolor)
//{
//    color &= 0xf;
//    bgcolor &= 0xf;
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
//        (bgcolor << 4) | color);
//}