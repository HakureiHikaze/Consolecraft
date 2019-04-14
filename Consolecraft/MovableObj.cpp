#include "MovableObj.h"
MovableObj::MovableObj() : position({0,0}),facing(0.0)
{
}
MovableObj::~MovableObj()
{
}
void MovableObj::up()
{
	position.y -= 1;
}
void MovableObj::down()
{
	position.y += 1;
}
void MovableObj::left()
{
	position.x -= 1;
}
void MovableObj::right()
{
	position.x += 1;
}
void MovableObj::teleport(Point target)
{
	position = target;
}
void MovableObj::turn(double degreeIn)
{
	facing = facing + degreeIn;
}
void MovableObj::turn(World world, double degreeIn)
{
}
void MovableObj::teleport(World world,Point target, double degreeIn)
{
	position = target;
	facing = fmod(degreeIn,360.0);
}
void MovableObj::getPositon()
{
	cout << "(" << position.x << "," << position.y << ")" <<"facing :"<<facing.degree<< endl;
}