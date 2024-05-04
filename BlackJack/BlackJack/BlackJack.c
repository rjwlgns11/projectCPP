#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"

int Wincount = 0;
int Losecount = 0;
int Drowcount = 0;
int playcount = 0;
int playmoney;
//������ ������ ���� ���� 
// ���� : 21
// ������ �� 
// �¸�����: ī���� ���� 21�� �Ǵ� 21���� �����Ѱ��� ��������� �̱�� ����
// �⺻ ��Ģ
// ������ ù��° ī�带 ������ ��� ī��� ���� ���°� �ȴ�
// ������ �����ϸ� �÷��̾�� �� 2���� ī�带 �޴´�.(���� ����)
//�÷��̾��� ��쿡�� ��� ī�带 �����Ѵ�
//�÷��̾��� ó���а� '����'�ϰ�� ���ñݾ��� 2�� �ް� �ȴ�
/*������ ó�� 2���� �а� ���� �ϰ�� ���ñݾ��� 2�踦 �ҰԵȴ�
* ������ �÷��̾ ��� �����ϰ�� ���º� ó��
*/

//������ �÷��̾��� ���� �÷���
//�÷��̾�� ī�带 �� �̰ų� ������ִ� (drow(hit), stand)

//������ �÷��̾ ī�带 ������ ī�� �߰� ���θ� �����Ѵ�
//���� ������ �а� 17�̻��ΰ�� stand ����
//���� ������ �а� 17�̸��ϰ�� hit ����

//[�ߺ�]: �а� 21�ʰ��ϰ�� 0������ ó���մϴ� (�й�)
//�ǵ��� 0���ΰ�� ���� �й�ȴ�.
//����� �����Ҷ� j,q,k�� ���� 10���� ����Ѵ�
//a�� ���� 1�Ǵ� 11�� �����ִ�


#define blackjack 21
#define A1 1
#define A2 11
#define J 10
#define Q 10
#define K 10
#define WIN 0//�����ǵ��� 0���� ����������?
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
    printf("����������������������������\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf("�� BLACK JACK ��\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("�� 1. PLAY    ��\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf("�� 2. COUNT   ��\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf("�� 3. EXIT    ��\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("����������������������������\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("��   "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    
    scanf("%d", &select);

    switch (select)
    {

    case 1:

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("������ �����մϴ�\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        printf("������ ��ź�� �����ϼ���\n");
        scanf("%d", &playmoney);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        playgame(playmoney, card);
        
        
        break;

    case 2:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("������ �ҷ��ɴϴ�.\n"); 
        WinningPercentage(Wincount, Losecount, Drowcount,playcount);

        break;

    case 3:
        printf("������ �����մϴ� \n");
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
            printf("%d��° ������ �����մϴ�\n\n", playcount);
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("���� �� �����Ͻʽÿ�.\n");
            if (playmoney <= 0)
            {
                printf("�ǵ��� �����Ͽ� �� �̻� ���� �� �� �����ϴ�\n\n");
                break;
            }
            else
            {
                scanf("%d", &beting);
                playmoney -= beting;
                totalbeting += beting;
            }
            
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("�÷��̾��� ���þ� %d\n\n", beting);
           
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

            printf("�÷��̾��� ���� �ǵ� %d\n\n", playmoney);

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
           
            printf("�÷��̾��� ");
            for (int i = 0; i < playercardtrade; i++)
            {
                printf("%d��° ī�� : %d ",i+1, playercard[i]);
            }
            printf("\n");

            printf("������ 1��° ī�� : %d\n\n", dealercard[0]);

            Aceselect(playercard, playercardtrade, playertotal);
            dAceselect(dealercard, dealercardtrade, dealertotal);

            if (dealertotal >= 17)
            {
                printf("������ ī�尪�� 17�� �ʰ��Ͽ� �ڵ����� STAND���°� �˴ϴ�\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                dealerstate = STAND;
            }
            else
            {
                dealerstate = HIT;
            }
          
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            
            
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

            printf("�÷��̾� �ǵ� %d\n\n", playmoney);
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
                        printf("�÷��̾��� %d��° ī�� : %d \n",i+1,playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n", i + 1, dealercard[i]);
                    }

                    printf("�÷��̾�� ������ �����Դϴ�. ���º� ó�� �˴ϴ�.\n");
                    playmoney += totalbeting;
                    printf("�÷��̾��� �ǵ� : %d\n\n", playmoney);
                    Drowcount++;
                    break;
                }
                else if (dealertotal == BLACKJACK)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);


                    printf("������ �����Դϴ�.������ �¸��Ͽ����ϴ�.\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("�÷��̾��� %d��° ī�� : %d \n",  i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n",i + 1, dealercard[i]);
                    }
                    playmoney += -totalbeting*2;
                    printf("�÷��̾��� �ǵ� : %d \n\n", playmoney);
                    Losecount++;
                    break;
                }
                else if (playertotal == BLACKJACK)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                    printf("�÷��̾ �����Դϴ�\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("�÷��̾��� %d��° ī�� : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting *2;
                    printf("�÷��̾��� �ǵ� : %d\n", playmoney);
                    Wincount++;
                    break;
                }
                else if (playertotal >= FUMBLE && dealertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

                    printf("�÷��̾�� ������ 21�� �ʰ��Ͽ� ���º�ó���˴ϴ�\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("�÷��̾��� %d��° ī�� : %d \n",  i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting;
                    Drowcount++;
                    printf("�÷��̾��� �ǵ� : %d\n", playmoney);
                    break;
                }
                else if (playertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                    printf("�÷��̾ 21�� �ʰ��Ͽ� �й�ó���˴ϴ�\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("�÷��̾��� %d��° ī�� : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n", i + 1, dealercard[i]);
                    }
                    playmoney += -totalbeting;
                    Losecount++;
                    printf("�÷��̾��� �ǵ� : %d\n", playmoney);
                    break;

                }
                else if (dealertotal >= FUMBLE)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                    printf("������ 21�� �ʰ��Ͽ� �й�ó���˴ϴ�\n");
                    for (int i = 0; i < playercardtrade; i++)
                    {
                        printf("�÷��̾��� %d��° ī�� : %d \n", i + 1, playercard[i]);
                    }
                    for (int i = 0; i < dealercardtrade; i++)
                    {
                        printf("������ %d��° ī�� : %d \n",i + 1, dealercard[i]);
                    }
                    playmoney += totalbeting;
                    printf("�÷��̾��� �ǵ� : %d\n", playmoney);
                    Wincount++;
                    break;
                }
                

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                printf("�����Ͻʽÿ�\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

                printf("1. ���� ī�� ���� ����"); 

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

                printf("2. HIT or STAND ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);

                printf(" 3. �ºΰɱ�\n\n");
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

                        printf("HIT ���� �����Ͻʽÿ�.\n\n");
                       
                        if (playmoney <= 0)
                        {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                            printf("�ǵ��� �����Ͽ� �ǵ��� �ɼ������ϴ�\n\n");
                        }
                        else {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            scanf("%d", &beting);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

                            printf("�÷��̾��� ���þ� %d\n\n", beting);

                            playmoney -= beting;
                            totalbeting += beting;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);

                            printf("�÷��̾��� ���� �ǵ� %d\n\n", playmoney);

                            playercard[playercardtrade] = card[rand(time(NULL)) % 12];
                            playertotal += playercard[playercardtrade];
                            playercardtrade++;
                        }
                    }
                    else
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

                        printf("�÷��̾ STAND�� �����ϼ̽��ϴ� \n");
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

                        printf("������ STAND���� �Դϴ�\n\n");
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

                            printf("������ STAND���� �Դϴ�\n\n");
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
                            printf("�÷��̾��� %d ��° ī�� :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("������ %d ��° ī�� :%d \n", i + 1, dealercard[i]);
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
                            printf("�÷��̾��� %d ��° ī�� :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("������ %d ��° ī�� :%d \n", i + 1, dealercard[i]);
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
                            printf("�÷��̾��� %d ��° ī�� :%d \n", i + 1, playercard[i]);
                        }
                        printf("\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                        for (int i = 0; i < dealercardtrade; i++)
                        {
                            printf("������ %d ��° ī�� :%d \n", i + 1, dealercard[i]);
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
                printf("�ǵ��� ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                printf("0"); 
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                printf("���� �Ǿ� �й��߽��ϴ�!\n\n");
                system("pause");
                system("cls");
                return main();
            }
            printf("�÷��̾��� ���� �ǵ� : %d\n\n", playmoney);
          
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
            printf("���θ޴��� ���ư��ðڽ��ϱ�?\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            printf("1.���ư��� ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            printf("2.����ϱ�\n\n");
          
            scanf("%d", &selectmenu);
            system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            if (selectmenu == 1)//���� �޴��� ���ư��������?
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                printf("�ƹ�Ű�� ������ ���� �޴��� ���ư��ϴ�\n\n");
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

            printf("�÷��̾�� ���̽��� �ֽ��ϴ�\n\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            printf("��� Ȱ���Ͻðڽ��ϱ�?\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

            printf("1. 1�� Ȱ�� , ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

            printf(" 2. 11�� Ȱ��\n");
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

                printf("�ٽ� �Է��ϼ���\n");
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
    printf("�÷��̾��� ");
    for (int i = 0; i < playercardtrade; i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("%d��° ī��: %d\n", i + 1, playercard[i]);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);


   printf("������ %d��° ī��: %d\n", 1, dealercard[0]);
    
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int shobu(int playertotal, int dealertotal)
{
    if (playertotal == dealertotal)
    {
        
        printf("���º��Դϴ�\n");
      
        return DROW;
    }
    else if (playertotal > dealertotal)
    {
        printf("�÷��̾��� �¸��Դϴ�.\n\n");
       
        return WIN;

    }
    else
    {
        printf("������ �¸��Դϴ�.\n\n");
     
        return LOSE;
    }
    
}


int WinningPercentage(int Wincount, int Losecount, int Drowcount, int playcount)
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf("�÷��� ī��Ʈ : %d\n\n", playcount);
    printf("��: %d ", Wincount);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

    printf("��: %d ", Drowcount);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

    printf("�� : %d\n\n", Losecount);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("�·� : %.3f% \n\n", (float)100 * Wincount / playcount);
    printf("���� �޴��� ���ư��ϴ�\n");


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