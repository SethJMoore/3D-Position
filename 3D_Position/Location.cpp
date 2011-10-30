#include <iostream>
#include "Location.h"

using namespace std;

Location::Location()
{
	set(0, 0, 0);
}

Location::Location(int setX, int setY, int setZ)
{
	x = setX;
	y = setY;
	z = setZ;
}

Location::Location(const Location & original)
{
	x = original.x;
	y = original.y;
	z = original.z;
}

//Location::~Location()
//{
//}

void Location::set(int setX = 0, int setY = 0, int setZ = 0)
{
	x = setX;
	y = setY;
	z = setZ;
}

void Location::show()
{
	cout << x << "   " << y << "   " << z << endl;
}

void Location::change(int moveX, int moveY, int moveZ)
{
	x += moveX;
	y += moveY;
	z += moveZ;
}

Location Location::getRelativeLocation(int relativeX = 0, int relativeY = 0, int relativeZ = 0)
{
	Location temp = (*this);
	temp.change(relativeX, relativeY, relativeZ);

	return temp;
}

bool Location::operator==(const Location &other)
{
	if (((*this).x == other.x) && ((*this).y == other.y) && ((*this).z == other.z))
	{
		return true;
	}
	else
	{
		return false;
	}
}

const int & Location::getX()const
{
	return x;
}

const int & Location::getY()const
{
	return y;
}

const int & Location::getZ()const
{
	return z;
}