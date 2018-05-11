#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

using namespace std;

void instructions();
void tries(char guess[], int nb); //demander entrée joueur
bool gameOver(char guess[], char right[]); // condition victoire
enum colors{Blue,Orange,Green,Yellow,Red,Purple };
char randomColors(int ascii);

int main()
{
	instructions();
	char symbol;
	char guess[4];
	char right[4];
	bool playAgain = true;
	bool won;
	int nbTry;


	
	return 0;
}
//---------Fin du main--------------//
void instructions()
{
	cout << "======================= Welcome to Mastermind =======================" << endl;
	cout << "Mastermind is a game of logic." << endl;
	cout << "The goal is to use logic to guess the correct four color combination" << endl;
	cout << "Everytime you guess, you will be told how close to the goal you are." << endl;
	cout << "The first number says how many were in the right place. " << endl;
	cout << "The second number says how many of the right colors you have in the wrong place.";
	cout << "To guess, enter the first letter of each color." << endl;
	cout << "Available colors are Blue, Green, Orange, Purple, Red and Yellow." << endl;
	cout << "An sample guess would be look like this: R R G B" << endl;
	cout << "=====================================================================";
}

char randomColors(int ascii)
{
	switch (ascii)
	{
	case 1:
		return static_cast<char>(66);
	case 2:
		return static_cast<char>(71);
	case 3:
		return static_cast<char>(79);
	case 4:
		return static_cast<char>(80);
	case 5:
		return static_cast<char>(82);
	case 6:
		return static_cast<char>(89);
	}
	
}

