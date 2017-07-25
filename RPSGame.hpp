#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class RPSGame
{
private:
	int human_wins,
		computer_wins,
		ties,
		rPower = 1,
		pPower = 1,
		sPower = 1;
	char userInput;

public:
	RPSGame();
	~RPSGame();
	void start();
	void differentStrengths();
	int setDiffStrength();
	void playRound();
	void compChoice();
	void determineWinner();
};
#endif
