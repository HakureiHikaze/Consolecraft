#include "Player.h"

Player::Player(string name, long long* serial_number)
{
	playerName = name;
	sn = *serial_number;
	*serial_number++;
}
Player::Player(long long* serial_number) :playerName("Anonymous")
{
	sn = *serial_number;
	*serial_number++;
}
Player::Player()
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
		else if (commandCache == "pos") { cout << "Now position :"; getPositon(); continue; }
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
		else if (commandCache == "help") { cout << helpMessage; continue; }
		else { cout << "Invalid command or  WIP. Retry.\n"<<"Type \"help\" to view command list. "<<endl; continue; }
	}
	return false;
}
bool Player::listenKeyboard()
{
	int kbin;
	while (true)
	{	
		kbin = _getch();
		if (kbin == 27) { break; }
		else if (kbin == KEY_w) { up(); cout << "Pressed w. New position :"; getPositon(); continue;}
		else if (kbin == KEY_s) { down(); cout << "Pressed s. New position :"; getPositon(); continue;}
		else if (kbin == KEY_a) { left(); cout << "Pressed a. New position :"; getPositon(); continue;}
		else if (kbin == KEY_d) { right(); cout << "Pressed d. New position :"; getPositon(); continue;}
		else if (kbin == KEY_p) { cout << "Pressed p. Now position :"; getPositon(); }
		else if (kbin == KEY_h) { cout << kbHelp; }
		else if (kbin == KEY_colon) { listenCommand(false,true); }
		else { kbin = 0; cout << "Invalid key, press h for help." << endl; continue; }
	}
	return false;
}
