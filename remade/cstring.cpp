#include <iostream>
#include "cstring.hpp"
//TOUT EST A CHANGER
Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int nx, int ny)
{
	this->x = nx;
	this->y = ny;
}

Point::~Point()
{
    cout << "Point Destrucor Call" << std::endl;
}

int getX() const
{
	return this->x;
}

int getY() const
{
	return this->y;
}

void Point::afficher()
{
	cout << "x : " << this->x << std::endl << "y : " << y << std::endl;
}

void Point::cloner(const Point& p)
{
	this->x = p.x;
	this->y = p