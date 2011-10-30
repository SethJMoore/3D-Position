#pragma once

#include <iostream>

#include "Location.h"
#include "World.h"

class Vision
{
public:
	static void lookXYZ(Location l, const World & w);
	static string getXVisibility(Location l, const World & w);
	static string getYVisibility(Location l, const World & w);
	static string getZVisibility(Location l, const World & w);
	static string oneDVision(int x, int y, int z, Location l, const World & w);
};