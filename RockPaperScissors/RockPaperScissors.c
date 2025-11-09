#include <stdio.h>

char* RockPaperScissors(char* p1, char* p2) {

	//Gives a return of "Draw" if the inputs are the same
	if (p1 == p2) {

		return "Draw";
	}

	//Player1 wins if they have the input that beats Player 2's input
	else if (((p1 == "Rock") && (p2 == "Scissors")) || ((p1 == "Scissors") && (p2 == "Paper")) || ((p1 == "Paper") && (p2 == "Rock"))) {

		return "Player1";
	}

	////Player2 wins if they have the input that beats Player 1's input
	else if (((p2 == "Rock") && (p1 == "Scissors")) || ((p2 == "Scissors") && (p1 == "Paper")) || ((p2 == "Paper") && (p1 == "Rock"))) {

		return "Player2";
	}

	//all other inputs will be invalid
	else {

		return "Invalid";
	}
}

int main() {



	return 0;
}