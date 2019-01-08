#pragma once

class FBullCowGame {
public:
	void Reset(); //TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry;
	bool IsGameWon();
	bool CheckGuessValidity(string);


private:
	int MyCurrentTry;
	int MyMaxTries;
};