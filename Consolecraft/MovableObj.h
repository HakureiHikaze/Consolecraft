#pragma once
#include"typePoint.h"
#include<iostream>
#include"Degree.h"
#include"World.h"
using namespace std;
class MovableObj
{
public:
	
protected:
	Point position;
	Degree facing;
public:
	//no Worlds
	void getPositon();
	void up();
	void down();
	void left();
	void right();
	void teleport(Point target);
	void turn(double degreeIn);


	void turn(World world,double degreeIn);
	void teleport(World world,Point target, double degreeIn);
	void up(World world, int distance);
	void down(World world, int distance);
	void left(World world, int distance);
	void right(World world, int distance);
	MovableObj();
	~MovableObj();
};

