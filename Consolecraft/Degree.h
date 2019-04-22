#pragma once

#include"include.h"
class Degree
{
public:
	double degree;
	Degree operator + (const Degree& b);
	Degree operator - (const Degree& b);
	Degree operator + (const double& b);
	Degree operator - (const double& b);
	Degree operator * (const double& b);
	Degree operator / (const double& b);
	Degree();
	Degree(double degretIn);
	~Degree();
};

