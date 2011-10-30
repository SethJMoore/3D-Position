#pragma once
#include "Location.h"
#include <vector>

using namespace std;

class World
{
public:
	World();
//	World(const World &original); // Copy constructor was screwing up blocksArray.
	bool canMoveHere(const Location & test)const;
	void placeAWall(Location putItHere);

private:
	vector<vector<vector<int>>> blocksArray;

};