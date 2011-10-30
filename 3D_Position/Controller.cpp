#include "Controller.h"
#include <iostream>
#include <conio.h>
#include "World.h"

using namespace std;

Controller::Controller()
{
}

Controller::Controller(const Controller & original)
{
}

//Controller::~Controller()
//{
//}

bool Controller::getMovement(Location & loc, const World & w)
{
	bool result = true;
	char ch;
	ch = _getch();

	switch (ch)
	{
		case 'Q':
		case 'q':
			cout << "Quitting..." << endl;
			result = false;
			break;
		case 'h':
			if (w.canMoveHere(loc.getRelativeLocation(-1, 0, 0)))
			{
				loc.change(-1, 0, 0);
			}
			break;
		case 'j':
			if (w.canMoveHere(loc.getRelativeLocation(0, -1, 0)))
			{
				loc.change(0, -1, 0);
			}
			break;
		case 'k':
			if (w.canMoveHere(loc.getRelativeLocation(0, 1, 0)))
			{
				loc.change(0, 1, 0);
			}
			break;
		case 'l':
			if (w.canMoveHere(loc.getRelativeLocation(1, 0, 0)))
			{
				loc.change(1, 0, 0);
			}
			break;
		case 'J':
			if (w.canMoveHere(loc.getRelativeLocation(0, 0, -1)))
			{
				loc.change(0, 0, -1);
			}
			break;
		case 'K':
			if (w.canMoveHere(loc.getRelativeLocation(0, 0, 1)))
			{
				loc.change(0, 0, 1);
			}
			break;
		default:
			break;
	}
	return result;
}