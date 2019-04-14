#include "Player.h"

Player::Player(string name)
{
	playerName = name;
}

Player::Player() :playerName("Anonymous")
{
}

Player::~Player()
{
}
bool Player::listenCommand(bool hasPrompt,bool singleCommand)
{
	string commandCache;
	bool flag = true;
	while (flag)
	{	
		if (hasPrompt) {cout << playerName << ">>>";}
		else { cout << ":"; }
		if (singleCommand) { flag = false; }
		getline(cin, commandCache);
		if (commandCache == "exit") {return true; }
		else if (commandCache == "up") {up();continue; }
		else if (commandCache == "down") {down();continue; }
		else if (commandCache == "left") {left();continue; }
		else if (commandCache == "right") {right();continue; }
		else if (commandCache == "suck") {cout << "That's delicious!" << endl;continue;}
		else if (commandCache == "turn")
		{
			double degreeIn;
			cout << "Type degree:";
			cin >> degreeIn;
			turn(degreeIn);
			continue;
		}
		else if (commandCache == "") { continue; }
		else if (commandCache == "help") { cout<<helpMessage<<endl; }
		else { cout << "Invalid command or  WIP. Retry.\n"<<"Type \"help all\" to view command list. " << endl; continue; }
	}
	return false;
}

bool Player::listenKeyboard()
{
	int kbin;
	while (true)
	{	
			kbin = _getch();
			//cout << kbin << endl;
			if (kbin == 27) { break; }
			else if (kbin == KEY_w) { up(); cout << "Pressed w. New position :"; getPositon(); }
			else if (kbin == KEY_s) { down(); cout << "Pressed s. New position :"; getPositon(); }
			else if (kbin == KEY_a) { left(); cout << "Pressed a. New position :"; getPositon(); }
			else if (kbin == KEY_d) { right(); cout << "Pressed d. New position :"; getPositon(); }
			else if (kbin == KEY_colon) { listenCommand(false,true); }
			else { kbin = 0; continue; }
	}
	return false;
}
