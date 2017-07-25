#include "RPSGame.hpp"

RPSGame::RPSGame()
{
	Tool *player;
	Tool *computer;
}


RPSGame::~RPSGame()
{
	delete player;
	delete computer;
}


void RPSGame::start()
{
	cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different strengths for the tools? (y - yes, n - no)" << endl;
	cin >> userInput;
	cout << endl;

	if (userInput == 'y')
	{
		differentStrengths();
	}
}


void RPSGame::differentStrengths()
{
	cout << "Would you like to set the strength of rock?" << endl;
	cout << "Enter 'y' for yes and 'n' for no" << endl;

	cin >> userInput;

	while (userInput != 'y' && userInput != 'n')
	{
		cout << "Enter 'y' for yes and 'n' for no" << endl;
		cin >> userInput;
	}

	if (userInput == 'y')
	{
		rPower = setDiffStrength();
	}
	
	/*************************************************************/

	cout << "Would you like to set the strength of paper?" << endl;
	cout << "Enter 'y' for yes and 'n' for no" << endl;

	cin >> userInput;

	while (userInput != 'y' && userInput != 'n')
	{
		cout << "Enter 'y' for yes and 'n' for no" << endl;
		cin >> userInput;
	}

	if (userInput == 'y')
	{
		pPower = setDiffStrength();
	}

	/*************************************************************/

	cout << "Would you like to set the strength of scissors?" << endl;
	cout << "Enter 'y' for yes and 'n' for no" << endl;

	cin >> userInput;

	while (userInput != 'y' && userInput != 'n')
	{
		cout << "Enter 'y' for yes and 'n' for no" << endl;
		cin >> userInput;
	}

	if (userInput == 'y')
	{
		sPower = setDiffStrength();
	}
}


int RPSGame::setDiffStrength()
{
	cout << "Choose a number between 1 and 20" << endl;

	int strenInput;
	cin >> strenInput;

	while (strenInput < 1 || strenInput > 20)
	{
		cout << "Choose a number between 1 and 20" << endl;
		cin >> strenInput;
	}

	return strenInput;
}

void RPSGame::playRound()
{
	cout << "Choose your tool (r - rock, p - paper, s - scissor, e - exit):" << endl;
	cin >> userInput;

	while (userInput != 'r' && userInput != 'p' && userInput != 's' && userInput != 'e')
	{
		cout << "r - rock, p - paper, s - scissor, e - exit" << endl;
		cin >> userInput;
	}

	char compTool;

	if (userInput == 'r')
	{
		player = new Tool(rPower, userInput);
		compChoice();
	}

	else if (userInput == 'p')
	{
		player = new Tool(pPower, userInput);
		compChoice();
	}

	else if (userInput == 's')
	{
		player = new Tool(sPower, userInput);
		compChoice();
	}
	
	determineWinner();
}


void RPSGame::compChoice()
{
	int toolChoice = rand() % 3 + 1;

	if (toolChoice == 1)
	{
		computer = new Tool(rPower, 'r');
	}

	else if (toolChoice == 2)
	{
		computer = new Tool(pPower, 'p');
	}

	else
	{
		computer = new Tool(sPower, 's');
	}
}


void RPSGame::determineWinner()
{

}
