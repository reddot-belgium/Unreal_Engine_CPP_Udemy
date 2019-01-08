#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGues();
bool AskToPlayAgain();

FBullCowGame BCGame; //instantiate een nieuw game


int main() {
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	return 0; // einde van het programma
}
	
void PrintIntro() {
	// voorstellen van het spel
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welkom to Bulls an Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram i'm thinking of?" << std::endl;
	return;
}

void PlayGame() 
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	// loop het aantal keren dat gevraagt word
	for (int count = 1; count <= MaxTries; count++) {
	std::string Guess = GetGues();
	std::cout << "Your guess was: " << Guess << std::endl;
	}
	
}

std::string GetGues() {
	int CurrentTry = BCGame.GetCurrentTry();

	// krijg een woord van de speler
	std::string Guess = "";
	std::cout << "Try " << CurrentTry <<". Enter your guess: ";
	std::getline(std::cin, Guess);
	std::cout << std::endl;
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (Yes or No)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

