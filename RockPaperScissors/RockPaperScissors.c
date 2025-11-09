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
	else if (strcmp(p1, p2)==0) {

			return "Draw";
	}

	//Player1 wins if they have the input that beats Player 2's input
	else if (((strcmp(p1,"Rock")==0) && (strcmp(p2,"Scissors")==0)) || ((strcmp(p1,"Scissors")==0) && (strcmp(p2,"Paper")==0)) || ((strcmp(p1,"Paper")==0) && (strcmp(p2,"Rock")==0))) {

		return "Player1";
	}

	//Player 2 should win if all other if or else ifs statements fail
	//Player 2 has the winning input against Player 1's input
	else {

		return "Player2";
	}
}

int main() {



	return 0;
}