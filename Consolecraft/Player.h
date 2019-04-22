#pragma once
#include"include.h"
#include"MovableObj.h"
#include"KeyboardMap.h"
#include"help.h"
class Player :public MovableObj
{
private:
public:
	string playerName;
	bool listenCommand(bool hasPrompt , bool singleCommand);
	bool listenKeyboard();
	Player(string name,long long *serial_number);
	Player(long long* serial_number);
	~Player();
	Player();
};