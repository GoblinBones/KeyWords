#include<iostream>
#include<string>
#include <random>
#include<ctime>

using namespace std;

int main()
{

	cout << "\nWelcome to the CIA you are here to decode the enemies scrambled words.",
		cout << "\nYou have three words to decode.";
	cout << "\nGood Luck, Agent.";

	srand(time(0));

	const int WORD_COUNT = 10;

	string words[WORD_COUNT][2] = {
		{ "AUNT", "Sister of a mother." },
		{ "CHURCH", "Place of worship." },
		{ "JUVENILE", "Another name for young." },
		{ "SPADE", "A digging implement." },
		{ "COLOSSAL", "another way to say huge." },
		{ "DOGS", "a domestic animal." },
		{ "GUN", "A weapon that fires projectiles." },
		{ "SHOES", "An article of clothing." },
		{ "PUBLIC", "The opposite of private." },
		{ "FRONT", "The opposite of back." }
	};

	char playAgain = 'y';

	do
	{
		int randWord = rand() % WORD_COUNT;

		string word = words[randWord][0];
		string hint = words[randWord][1];

		string scrambledWord = word;

		cout << "HINT: " << hint << endl;

		for (int i = 0; i < scrambledWord.length(); i++)
		{
			int randIndex = rand() % scrambledWord.length();

			char temp = scrambledWord[i];
			scrambledWord[i] = scrambledWord[randIndex];
			scrambledWord[randIndex] = temp;
		}

		cout << "INITIAL WORD: " << word << endl;
		cout << "SCRAMBLED WORD: " << scrambledWord << endl;

		cout << "Play again?: ";
		cin >> playAgain;
	} while (playAgain == 'y');
}

