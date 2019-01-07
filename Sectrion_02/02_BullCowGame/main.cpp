#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
void PlayGame();
string GetGues();


int main() {

	PrintIntro();
	PlayGame();
	return 0; // einde van het programma
}
	
void PrintIntro() {
	// voorstellen van het spel
	constexpr int WORD_LENGTH = 5;
	cout << "Welkom to Bulls an Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?" << endl;
	return;
}

void PlayGame() 
{
	// loop het aantal keren dat gevraagt word
	constexpr int NUMBER_OF_TURNS = 5;

	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
	string Guess = GetGues();
	cout << "Your guess was: " << Guess << endl;
	}
	
}

string GetGues() {
	// krijg een woord van de speler
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << endl;
	return Guess;
}