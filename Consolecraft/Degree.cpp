#include "Degree.h"
Degree Degree::operator+(const Degree &b)
{
	Degree degree;
	degree.degree = fmod((this->degree + b.degree),360.0);
	return degree;
}
Degree Degree::operator-(const Degree &b)
{
	Degree degree;
	degree.degree = fmod((this->degree - b.degree), 360.0);
	return degree;
}
Degree Degree::operator+(const double& b)
{
	Degree degree;
	degree.degree = fmod((this->degree + b), 360.0);
	return degree;
}
Degree Degree::operator-(const double& b)
{
	Degree degree;
	degree.degree = fmod((this->degree - b), 360.0);
	return degree;
}
Degree Degree::operator*(const double &b)
{
	Degree degree;
	degree.degree = fmod((this->degree * b), 360.0);
	return degree;
}
Degree Degree::operator/(const double &b)
{
	Degree degree;
	degree.degree = fmod((this->degree / b), 360.0);
	return degree;
}
Degree::Degree(double degreeIn)
{
	degree = fmod(degreeIn, 360.0);
}
Degree::Degree() : degree(0.0)
{
}
Degree::~Degree()
{
}