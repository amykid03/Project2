#include "header.h"

int com = 0;
int player = 0;
int dice = 0;
int dice1 = 0;
int dice2 = 0;
int two = 0;
int a = 0;

int p_y = 0;
int p_x = 0;
int p_e = 0;

int c_y = 0;
int c_x = 0;
int c_e = 0;

void print_status(int p_y, int p_x, int p_e, int c_x, int c_y, int c_e) {
	printf("Player====================\n");
	printf("- position: (y: %d, x: %d)\n", p_y, p_x);
	printf("- complete: %d\n", p_e);
	printf("==========================\n");
	printf("Computer==================\n");
	printf("- position: (y: %d, x: %d)\n", c_y, c_x);
	printf("- complete: %d\n", c_e);
	printf("==========================\n");
}

//사람이 주사위를 굴림
int roll_dice(int player) {
	scanf("%d", &player);
	printf("Rolling the dice in strength %d.\n", player);
	if (player == 1) rolling_dice1();
	else if (player == 2) rolling_dice2();
	else if (player == 3) rolling_dice3();

	if (p_x + two < 9){
		p_x += two;
	}
	else if (p_x + two >= 9) {
		p_y += (p_x + two - 9);
	}

}


//컴퓨터가 주사위를 굴림
void computer(int com) {
	com = rand() % 3 + 1;
	printf ("Rolling the dice in strength %d.\n", com);
	if (com == 1) rolling_dice1();
	else if (com == 2) rolling_dice2();
	else if (com == 3) rolling_dice3();
}

//주사위를 1의 힘으로 굴렸을 때
int rolling_dice1() {
	dice = rand() % 6 + 1;
	two = dice;
	printf("Moving %d spaces.\n", two);
}

//주사위를 2의 힘으로 굴렸을 때
int rolling_dice2() {
	dice = rand() % 6 + 1;
	dice1 = rand() % 6 + 1;
	two = (dice+dice1) / 2;
	printf("Moving %d spaces.\n", two);
}

//주사위를 3의 힘으로 굴렸을 때
int rolling_dice3() {
	dice = rand() % 6 + 1;
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	two = (dice + dice1 + dice2) / 2;
	printf("Moving %d spaces.\n", two);
}
