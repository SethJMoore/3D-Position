#include <iostream>
#include "Cube.h"
#include "Location.h"
#include "Controller.h"
#include "World.h"
#include "Vision.h"

using namespace std;

Cube::Cube()
{
	location.set(1,1,1);
}

Cube::Cube(const Cube & original)
{
	location = original.location;	
}

Cube::~Cube()
{
}

void Cube::possess()
{
	World world;
	Location testWall(1, 1, 2);
	world.placeAWall(testWall);
	cout << "I've been possessed!" << endl;
	while(controller.getMovement(location, world))
	{
		location.show();
		Vision::lookXYZ(location, world);
	}
}

void Cube::setLocation(int x, int y, int z)
{
	location.set(x, y, z);
}
