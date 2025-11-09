#include <stdio.h>
#include <string.h>

char* RockPaperScissors(char* p1, char* p2) {

	char valid_input[3][9] = { "Rock", "Scissors", "Paper" };
	int count_valid = 0;
	
	//checks to see how many valid inputs there are
	for (int i = 0; i < 3; i++) {

		char* valid = valid_input[i];

		if (strcmp(valid_input[i],p1)==0) {

			count_valid++;
		}

		if (strcmp(valid_input[i], p2)==0) {

			count_valid++;
		}
	}

	//if valid inputs are less than 2 there is an invalid input
	if (count_valid < 2) {

		return "Invalid";
	}

	//Gives a return of "Draw" if the inputs are the same
	else if (p1 == p2) {

			return "Draw";
	}

	//Player1 wins if they have the input that beats Player 2's input
	else if (((p1 == "Rock") && (p2 == "Scissors")) || ((p1 == "Scissors") && (p2 == "Paper")) || ((p1 == "Paper") && (p2 == "Rock"))) {

		return "Player1";
	}

	//Player2 wins if they have the input that beats Player 1's input
	else {

		return "Player2";
	}
}

int main() {



	return 0;
}