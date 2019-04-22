#pragma once
#include"include.h"
#include"Player.h"
class World
{
public:
	World();
	~World();
	void addPlayer(Player *);
	void confirmPos(Player *,Point);
	
private:
	void generateObj(MovableObj* );
	void deleteObj(MovableObj* );
	Player* currentPlayer;
	MovableObj* objInWorld;
};
typedef struct _PlayerList
{
	Player* player;
	Player** next;
}PlayerList;
