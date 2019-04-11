#pragma once
#include<math.h>
typedef struct tagPoint
{
	long x;
	long y;
} Point;
double distance(Point a, Point b)
{
	double re = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	return re;
}