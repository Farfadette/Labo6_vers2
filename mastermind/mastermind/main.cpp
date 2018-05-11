#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

using namespace std;

void instructions();
void tries(char guess[], int nb); //demander entrée joueur
bool gameOver(char guess[], char right[]); // condition victoire
enum colors{Blue,Orange,Green,Yellow,Red,Purple };
char randomColors(int ascii);

int main(void)
{
	
	char response;
	char guess[4];
	char right[4];
	bool playAgain = true; // loop 
	bool won;
	int nbTry;

	instructions();

	while (playAgain) //tant que vx rejouer
	{
		won = false;
		nbTry = 10;
		// genere random
		srand(time(0));

		for (int i = 0; i < 4; i++)
		{
			int temp = (rand() % 6) + 1;
			right[i] = randomColors(temp);
			
		}
		// loop jusqua-ce que le joueur gagne    
		while (!won && nbTry > 0)
		{
			tries(guess, nbTry);
			won = gameOver(guess, right);
			nbTry--;
		}
			if (won)
			{
				cout << "You win! The correct sequence was " << right[0] << " "
					<< right[1] << " " << right[2] << " " << right[3] << endl;
			}
			else
			{
				cout << "You lose! The correct sequence was " << right[0] << " "
					<< right[1] << " " << right[2] << " " << right[3] << endl;
			}
			//replay
			cout << "Would you like to play again (Y or N): ";
			cin >> response;

			playAgain = (response == 'Y' || response == 'y') ? true : false;
	}
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
	cout << "The second number says how many of the right colors you have in the wrong place." << endl;
	cout << "To guess, enter the first letter of each color." << endl;
	cout << "Available colors are Blue, Green, Orange, Purple, Red and Yellow." << endl;
	cout << "An sample guess would be look like this: R R G B" << endl;
	cout << "=====================================================================";
}

void tries(char guess[], int nb)
{
}

bool gameOver(char guess[], char right[])
{
	return false;
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

