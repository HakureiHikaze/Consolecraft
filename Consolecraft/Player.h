#pragma once
//#include"typePoint.h"
#include"MovableObj.h"
#include<conio.h>
#include"KeyboardMap.h"
#include"World.h"
#include <string>
#include "help.h"
class Player :public MovableObj
{
private:
public:
	string playerName;
	bool listenCommand(bool hasPrompt , bool singleCommand);
	bool listenKeyboard();
	Player(string name);
	Player();
	~Player();
};

