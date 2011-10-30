#pragma once

#include "Location.h"
#include "Controller.h"

class Cube
{
public:
	Cube();
	Cube(const Cube & original);
	~Cube();
	void possess();
	void setLocation(int x, int y, int z);

private:
	Location location;
	Controller controller;
};