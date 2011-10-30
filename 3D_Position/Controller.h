#pragma once

#include "Location.h"
#include "World.h"

class Controller
{
public:
	Controller();
	Controller(const Controller & original);
//	~Controller();
	bool getMovement(Location & loc, const World & w);

private:

};