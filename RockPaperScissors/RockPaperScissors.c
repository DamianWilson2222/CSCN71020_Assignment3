#include <stdio.h>

char* RockPaperScissors(char* p1, char* p2) {

	
	if (p1 == p2) {

		return "Draw";
	}

	else if (((p1 == "Rock") && (p2 == "Scissors")) || ((p1 == "Scissors") && (p2 == "Paper")) || ((p1 == "Paper") && (p2 == "Rock"))) {

		return "Player1";
	}

	else if (((p2 == "Rock") && (p1 == "Scissors")) || ((p2 == "Scissors") && (p1 == "Paper")) || ((p2 == "Paper") && (p1 == "Rock"))) {

		return "Player2";
	}

	else {

		return "Invalid";
	}
}

int main() {



	return 0;
}