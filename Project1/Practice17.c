//#include "Header.h"
//#include <stdlib.h>
//#include <time.h>
////간단하게 만들어보는 블랙잭 예제
////블랙잭 : 숫자의 합이 정확히 숫자 21인 경우
////게임의 룰 
////[승리 조건 : 카드의 합이 21점 또는 21과 가장 근접한 값을 가진 사람이 이기는 게임]
////== 기본 규칙 ==
////딜러의 첫번째 카드를 제외한 모든 카드는 공개 상태가 됩니다.
////게임을 시작하면 게임 모든 플레이어는 각 2장의 카드를 받습니다.
////플레이어의 경우에는 모든 카드를 공개합니다.
////플레이어의 처음 2장의 패가 '블랙잭'일 경우 베팅 금액을 2배 받게 됩니다.
////딜러의 처음 2장의 패가 '블랙잭'일 경우 베팅 금액의 2배를 잃게 됩니다.
////딜러와 플레이어가 모두 블랙잭일 경우에는 무승부 처리됩니다.
//
////딜러와 플레이어의 게임 플레이
////플레이어는 카드를 더 뽑거나(Hit) 또는 멈출 수 있습니다(Stand).
//
////딜러는 플레이어가 카드를 뽑은 후 카드 추가 여부를 결정합니다.
////현재 본인의 패가 17 이상인 경우에는 Stand 진행
////현재 본인의 패가 17 미만일 경우에는 Hit 진행
//
////[펌블] : 패가 21 초과일 경우 0점으로 처리합니다.
////본인이 가진 금액이 0일 경우 더이상 게임을 진행할 수 없습니다.
////계산을 진행할 때, J, Q , K의 경우는 10으로 계산합니다.
////A의 경우는 1 또는 11을 고를 수 있습니다.
//
//// 매크로 지정 (코드 내에서 사용할 이름)
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
////전역 변수(프로그램 전체에서 사용)
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
//		printf("┌────────────┐\n");
//		printf("│ BLACK JACK │\n");
//		printf("│ 1. PLAY    │\n");
//		printf("│ 2. COUNT   │\n");
//		printf("│ 3. EXIT    │\n");
//		printf("└────────────┘\n");
//		printf("☞   ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("플레이어는 배팅을 진행합니다.");
//			int money;
//			scanf("%d", &money);
//			deal(money);
//			printf("첫 패 2장을 제공합니다.\n");
//			int random = rand() % 14;
//			dealer_hand[0] = deck[0];
//			random = rand() % 14;
//			dealer_hand[1] = deck[random];
//			random = rand() % 14;
//			player_hand[0] = deck[random];
//			random = rand() % 14;
//			player_hand[1] = deck[random];
//			printCard();
//			//플레이 진행
//			//1. 플레이어의 베팅 금액 요구
//			//2. 화면에는 플레이어와 딜러의 카드가 출력됩니다.
//			//예시) [딜    러] : CARD 1 : 8   CARD2 : ???
//			//      [플레이어] : CARD 1 : 3   CARD2 : 10
//			//3. 플레이어는 기능을 선택합니다.(멈출때까지)
//			//1. HIT  2. STAND  >> 1
//			//카드를 다시 받을 경우에는 베팅 금액 요구
//			//4. 딜러는 기능을 선택합니다.
//			//딜러 STAND
//			//      [딜    러] : CARD 1 : 8   CARD2 : ???
//			//      [플레이어] : CARD 1 : 3   CARD2 : 10  CARD 3 : A
//			//1. HIT  2. STAND  >> 2
//			//5. 결과 창 출력
//			//가진 카드가 A일 경우 안내창 띄우겠습니다.
//			//1. 1점 2. 11점  >> 1
//			//딜러 : 18
//			//플레이어 :  14
//			//패배 (배팅 금액은 삭제됩니다.)
//			break;
//		case 2:
//			//현재 플레이어의 보유 금액
//			//플레이어의 전적 (몇승 몇무 몇패) 승률 ...%
//			break;
//		case 3:
//			printf("게임을 종료합니다.\n");
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
//		printf("플레이어는 %d원을 배팅했습니다. [플레이어의 잔액 : %d원]\n", money, player_money);
//	}
//	else
//	{
//		printf("잔액이 부족합니다. 다시 배팅해주세요");
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