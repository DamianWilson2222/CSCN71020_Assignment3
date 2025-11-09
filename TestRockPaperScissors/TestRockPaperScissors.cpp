#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RockPaperScissors(char* p1, char* p2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRockPaperScissors
{
	TEST_CLASS(TestRockPaperScissors)
	{
	public:
		
		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Rock_ReturnDraw)
		{
			char* player1_input = "Rock";
			char* player2_input = "Rock";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Scissors_ReturnPlayer1)
		{
			char* player1_input = "Rock";
			char* player2_input = "Scissors";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Paper_ReturnPlayer2)
		{
			char* player1_input = "Rock";
			char* player2_input = "Paper";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Rock_ReturnPlayer2)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Rock";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Scissors_ReturnDraw)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Scissors";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1ScissorsPlayer2Paper_ReturnPlayer1)
		{
			char* player1_input = "Scissors";
			char* player2_input = "Paper";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Rock_ReturnPlayer1)
		{
			char* player1_input = "Paper";
			char* player2_input = "Rock";
			Assert::AreEqual("Player1", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Scissors_ReturnPlayer2)
		{
			char* player1_input = "Paper";
			char* player2_input = "Scissors";
			Assert::AreEqual("Player2", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1PaperPlayer2Paper_ReturnDraw)
		{
			char* player1_input = "Paper";
			char* player2_input = "Paper";
			Assert::AreEqual("Draw", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1InvalidPlayer2Rock_ReturnDraw)
		{
			char* player1_input = "Banana";
			char* player2_input = "Rock";
			Assert::AreEqual("Invalid", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}

		TEST_METHOD(RockPaperScissors_Player1RockPlayer2Invlaid_ReturnDraw)
		{
			char* player1_input = "Rock";
			char* player2_input = "Orange";
			Assert::AreEqual("Invalid", RockPaperScissors(player1_input, player2_input), "Function Failed");
		}
	};
}
