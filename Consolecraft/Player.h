#pragma once
//#include"typePoint.h"
#include"MovableObj.h"
class Player :public MovableObj
{
private:
public:
	string playerName;
	bool listenCommand();
	Player(string name);
	Player();
	~Player();
};

