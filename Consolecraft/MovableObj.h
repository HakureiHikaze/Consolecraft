#pragma once
#include"typePoint.h"
#include<iostream>
#include"Degree.h"
using namespace std;
class MovableObj
{
public:
	
protected:
	Point position;
	Degree facing;
public:
	void getPositon();
	void up();
	void down();
	void left();
	void right();
	void teleport(Point target);
	void turn(double degreeIn);
	MovableObj();
	~MovableObj();
};

