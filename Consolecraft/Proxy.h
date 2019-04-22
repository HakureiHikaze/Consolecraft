#pragma once
#include"include.h"
#include"Player.h"
#include"World.h"
class Proxy
{
public:
	Proxy();
	~Proxy();
	void regPlayerToWorld(Player*, World*);
};

