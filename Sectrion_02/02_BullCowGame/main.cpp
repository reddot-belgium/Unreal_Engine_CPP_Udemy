#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int main() {

	PrintIntro();

	// loop het aantal keren dat gevraagt word
	constexpr int NUMBER_OF_TURNS = 5;

	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuessAndPrintBack();
	}
	

	return 0;
}
	
void PrintIntro() {
	// voorstellen van het spel
	constexpr int WORD_LENGTH = 5;
	cout << "Welkom to Bulls an Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?" << endl;
	return;
}

string GetGuessAndPrintBack() {
	// krijg een woord van de speler
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << endl;
	// toon de input van de speler terug
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}