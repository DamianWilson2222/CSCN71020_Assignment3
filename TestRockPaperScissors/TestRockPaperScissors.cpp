#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RockPaperScissors(char* p1, char* p2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRockPaperScissors
{
	TEST_CLASS(TestRockPaperScissors)
	{
	public:
		
		// tests when both players selects "Rock". Should output "Draw"
		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Rock_ReturnDraw)
		{
			char* player1_input = "Rock";
			char* player2_input = "Rock";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Rock" and player 2 selects "Scissors". Should output "Player1"
		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Scissors_ReturnPlayer1)
		{
			char* player1_input = "Rock";
			char* player2_input = "Scissors";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Rock" and player 2 selects "Paper". Should output "Player2"
		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Paper_ReturnPlayer2)
		{
			char* player1_input = "Rock";
			char* player2_input = "Paper";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Scissors" and player 2 selects "Rock". Should output "Player2"
		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Rock_ReturnPlayer2)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Rock";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		// tests when both players selects "Rock". Should output "Draw"
		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Scissors_ReturnDraw)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Scissors";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Scissors" and player 2 selects "Paper". Should output "Player1"
		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Paper_ReturnPlayer1)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Paper";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Paper" and player 2 selects "Rock". Should output "Player1"
		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Rock_ReturnPlayer1)
		{
			char* player1_input = "Paper";
			char* player2_input = "Rock";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Paper" and player 2 selects "Scissors". Should output "Player2"
		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Scissors_ReturnPlayer2)
		{
			char* player1_input = "Paper";
			char* player2_input = "Scissors";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when both players select "Paper". Should output "Draw"
		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Paper_ReturnDraw)
		{
			char* player1_input = "Paper";
			char* player2_input = "Paper";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects an invalid input and player 2 selects "Rock". Should output "Invalid"
		TEST_METHOD(RockPaperScissors_Player1InvalidPlayer2Rock_ReturnDraw)
		{
			char* player1_input = "Banana";
			char* player2_input = "Rock";
			Assert::AreEqual("Invalid", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//tests when player 1 selects "Rock" and player 2 selects an invalid input. Should output "Invalid"
		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Invlaid_ReturnDraw)
		{
			char* player1_input = "Rock";
			char* player2_input = "Orange";
			Assert::AreEqual("Invalid", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		//adding a new test method to catch if both player select an invalid answer
		TEST_METHOD(RockPaperScissors_Player1InvalidPlayer2Invlaid_ReturnInvalid)
		{
			char* player1_input = "Orange";
			char* player2_input = "Orange";
			Assert::AreEqual("Invalid", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}
	};
}
