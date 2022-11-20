/*
* Author : Yeonjin Choi
* Date : 2022_10_12
* Description : Homework2
*/

#include "header.h"

int main() {
	srand(time(NULL));

	int a;
	while (1) {
		print_status(p_y, p_x, p_e, c_x, c_y, c_e);

		roll_dice(player, &a);
		printf("Computer's turn.\n");
		computer(com);

		if (p_e == 3){
			printf("Congratulation!You won!\n");
			break;
		}
		else if (c_e == 3) {
			printf("Sorry, you lose.\n");
			break;
		}
	}
	return 0;
}