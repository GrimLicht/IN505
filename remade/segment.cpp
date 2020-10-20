#include <iostream>
#include <math.h>

Segment()
{
	this->a = {0, 0};
	this->b = a;
}

Segment(int nax, int nay, int nbx, int nby)
{
	this->a = {nax, nay};
}

Segment(Point na, Point nb) : a(na), b(nb) {};

~Segment()
{
	cout << "Segment Destructor Call" << std::endl;
}

int longueur()
{
	return sqrt(pow(b.getx() -a.getx()) + pow(b.gety() - a.gety()));
}

bool estVertical()
{
	return a.gety() == b.gety();
}

bool estHorizontal()
{
	return a.getx() == b.getx();
}

bool estDiagonal()
{
	return (b.getx() - a.getx()) == (b.gety() - a.gety());
}