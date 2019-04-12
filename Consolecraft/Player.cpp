#include "Player.h"

Player::Player(string name)
{
	playerName = name;
}

Player::Player():playerName("Anonymous")
{
}

Player::~Player()
{
}
bool Player::listenCommand()
{
	string commandCache;
	while (true)
	{
		cout <<playerName<< ">>>";
		cin >> commandCache;
		if (commandCache == "exit" ){return true;}
		else if(commandCache == "up"){up();continue;}
		else if (commandCache == "down"){down(); continue;}
		else if (commandCache == "left"){left(); continue;}
		else if (commandCache == "right"){right(); continue;}
		else if (commandCache == "turn") 
		{ 
			double degreeIn; 
			cout << "Type degree:"; 
			cin >> degreeIn; 
			turn(degreeIn); 
			continue; 
		}
		else { cout << "Invalid command or  WIP. Retry." << endl; continue; }
	}
	return false;
}
