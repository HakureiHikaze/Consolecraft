#include "World.h"



World::World():currentPlayer(NULL),objInWorld(NULL)
{
}
World::~World()
{
}

void World::addPlayer(Player* player)
{
	currentPlayer = player;
	generateObj(player);
}

void World::generateObj(MovableObj* obj)
{
	objInWorld = new 
}
