//#include "Header.h"
//#include <stdlib.h>
//#include <time.h>
////�����ϰ� ������ ���� ����
////���� : ������ ���� ��Ȯ�� ���� 21�� ���
////������ �� 
////[�¸� ���� : ī���� ���� 21�� �Ǵ� 21�� ���� ������ ���� ���� ����� �̱�� ����]
////== �⺻ ��Ģ ==
////������ ù��° ī�带 ������ ��� ī��� ���� ���°� �˴ϴ�.
////������ �����ϸ� ���� ��� �÷��̾�� �� 2���� ī�带 �޽��ϴ�.
////�÷��̾��� ��쿡�� ��� ī�带 �����մϴ�.
////�÷��̾��� ó�� 2���� �а� '����'�� ��� ���� �ݾ��� 2�� �ް� �˴ϴ�.
////������ ó�� 2���� �а� '����'�� ��� ���� �ݾ��� 2�踦 �Ұ� �˴ϴ�.
////������ �÷��̾ ��� ������ ��쿡�� ���º� ó���˴ϴ�.
//
////������ �÷��̾��� ���� �÷���
////�÷��̾�� ī�带 �� �̰ų�(Hit) �Ǵ� ���� �� �ֽ��ϴ�(Stand).
//
////������ �÷��̾ ī�带 ���� �� ī�� �߰� ���θ� �����մϴ�.
////���� ������ �а� 17 �̻��� ��쿡�� Stand ����
////���� ������ �а� 17 �̸��� ��쿡�� Hit ����
//
////[�ߺ�] : �а� 21 �ʰ��� ��� 0������ ó���մϴ�.
////������ ���� �ݾ��� 0�� ��� ���̻� ������ ������ �� �����ϴ�.
////����� ������ ��, J, Q , K�� ���� 10���� ����մϴ�.
////A�� ���� 1 �Ǵ� 11�� �� �� �ֽ��ϴ�.
//
//// ��ũ�� ���� (�ڵ� ������ ����� �̸�)
//#define BLACKJACK 21
//#define A1 1
//#define A2 11
//#define J 10
//#define Q 10
//#define K 10
//#define HIT 1
//#define STAND 2
//#define WIN 0
//#define LOSE 1
//#define DRAW 2
//
//
////���� ����(���α׷� ��ü���� ���)
//int player_money = 10000;
//int record[] = { 0,0,0 };
//int deck[] = { A1,2,3,4,5,6,7,8,9,10,J,Q,K };
//int dealer_hand[14];
//int player_hand[14];
//int dealer_count = 0;
//int player_count = 0;
//
//
//void deal(int money);
//void check(int dealer, int player);
//void printCard();
//
//int main()
//{
//	int select;
//
//	srand(time(NULL));
//
//	while (1)
//	{
//		printf("����������������������������\n");
//		printf("�� BLACK JACK ��\n");
//		printf("�� 1. PLAY    ��\n");
//		printf("�� 2. COUNT   ��\n");
//		printf("�� 3. EXIT    ��\n");
//		printf("����������������������������\n");
//		printf("��   ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("�÷��̾�� ������ �����մϴ�.");
//			int money;
//			scanf("%d", &money);
//			deal(money);
//			printf("ù �� 2���� �����մϴ�.\n");
//			int random = rand() % 14;
//			dealer_hand[0] = deck[0];
//			random = rand() % 14;
//			dealer_hand[1] = deck[random];
//			random = rand() % 14;
//			player_hand[0] = deck[random];
//			random = rand() % 14;
//			player_hand[1] = deck[random];
//			printCard();
//			//�÷��� ����
//			//1. �÷��̾��� ���� �ݾ� �䱸
//			//2. ȭ�鿡�� �÷��̾�� ������ ī�尡 ��µ˴ϴ�.
//			//����) [��    ��] : CARD 1 : 8   CARD2 : ???
//			//      [�÷��̾�] : CARD 1 : 3   CARD2 : 10
//			//3. �÷��̾�� ����� �����մϴ�.(���⶧����)
//			//1. HIT  2. STAND  >> 1
//			//ī�带 �ٽ� ���� ��쿡�� ���� �ݾ� �䱸
//			//4. ������ ����� �����մϴ�.
//			//���� STAND
//			//      [��    ��] : CARD 1 : 8   CARD2 : ???
//			//      [�÷��̾�] : CARD 1 : 3   CARD2 : 10  CARD 3 : A
//			//1. HIT  2. STAND  >> 2
//			//5. ��� â ���
//			//���� ī�尡 A�� ��� �ȳ�â ���ڽ��ϴ�.
//			//1. 1�� 2. 11��  >> 1
//			//���� : 18
//			//�÷��̾� :  14
//			//�й� (���� �ݾ��� �����˴ϴ�.)
//			break;
//		case 2:
//			//���� �÷��̾��� ���� �ݾ�
//			//�÷��̾��� ���� (��� � ����) �·� ...%
//			break;
//		case 3:
//			printf("������ �����մϴ�.\n");
//			exit(0);
//		}
//	}
//	return 0;
//}
//
//void deal(int money)
//{
//	if (player_money >= money)
//	{
//		player_money -= money;
//		printf("�÷��̾�� %d���� �����߽��ϴ�. [�÷��̾��� �ܾ� : %d��]\n", money, player_money);
//	}
//	else
//	{
//		printf("�ܾ��� �����մϴ�. �ٽ� �������ּ���");
//		int new_value;
//		scanf("%d", &new_value);
//		deal(new_value);
//	}
//}
//
//void check(int dealer, int player)
//{
//	if (dealer == BLACKJACK && player == BLACKJACK)
//	{
//		printf("DRAW!");
//		record[DRAW] += 1;
//	}
//}
//
//void printCard()
//{
//	printf("\n");
//	for (int i = 0; i < 14; i++)
//		printf("%d ", dealer_hand[i]);
//	printf("\n");
//	for (int i = 0; i < 14; i++)
//		printf("%d ", player_hand[i]);
//	printf("\n");
//}
//
//void DrawCard()
//{
//
//}