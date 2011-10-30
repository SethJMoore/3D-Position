#include "World.h"
#include "Location.h"

World::World()
{
	// worldSize determines the size of a cube within which is empty.
	int worldSize = 20;
	blocksArray.resize(worldSize);
	for (int i = 0; i < worldSize; i++)
	{
		blocksArray[i].resize(worldSize);
		for (int j = 0; j < worldSize; j++)
			blocksArray[i][j].resize(worldSize);
	}

	for (int i = 0; i < worldSize; i++)
	{
		for (int j = 0; j < worldSize; j++)
		{
			for (int k = 0; k < worldSize; k++)
			{
				if ( (i == 0) || (j == 0) || (k == 0) || (i == worldSize-1) || (j == worldSize-1) || (k == worldSize-1))
				{
					blocksArray[i][j][k] = 1; // 1 for rock wall.
				}
				else
				{
					blocksArray[i][j][k] = 0; // 0 for nothing.
				}
			}
		}
	}
}

//World::World(const World & original) // Copy constructor was screwing up blocksArray.
//{
//}

bool World::canMoveHere(const Location & test)const
{
	if (blocksArray[test.getX()][test.getY()][test.getZ()] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void World::placeAWall(Location putItHere)
{
	blocksArray[putItHere.getX()][putItHere.getY()][putItHere.getZ()] = 1;
}