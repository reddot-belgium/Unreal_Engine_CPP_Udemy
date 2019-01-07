#include <iostream>
#include <string>
using namespace std;

int main() {
	// voorstellen van het spel
	constexpr int WORD_LENGTH = 5;

	cout << "Welkom to Bulls an Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?" << endl;

	// krijg een woord van de speler
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << endl;
	// toon de input van de speler terug
	cout << "Your guess was: " << Guess << endl;

	// krijg tweede woord van de speler
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << endl;
	// toon de input 2 van de speler terug
	cout << "Your guess was: " << Guess << endl;

	return 0;
}