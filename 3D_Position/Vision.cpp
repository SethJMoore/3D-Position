#include "Vision.h"
#include <string>


void Vision::lookXYZ(Location l, const World & w)
{
	string xLine = getXVisibility(l, w);
	string yLine = getYVisibility(l, w);
	string zLine = getZVisibility(l, w);

	cout << xLine << endl;
	cout << yLine << endl;
	cout << zLine << endl;
	cout << endl;
}

string Vision::getXVisibility(Location l, const World & w)
{
	string result = oneDVision(1, 0, 0, l, w);
	return result;
}

string Vision::getYVisibility(Location l, const World & w)
{
	string result = oneDVision(0, 1, 0, l, w);
	return result;
}

string Vision::getZVisibility(Location l, const World & w)
{
	string result = oneDVision(0, 0, 1, l, w);
	return result;
}

string Vision::oneDVision(int x, int y, int z, Location l, const World & w)
{
	bool canSeeFurther = true;
	// @ represents the location from which one is looking.
	string result = "@";
	Location testL = l;
	// Look in the negative direction.
	do
	{
		if (w.canMoveHere(testL.getRelativeLocation(-x, -y, -z)))
		{
			result = "-" + result;
			testL.change(-x, -y, -z);
		}
		else
		{
			result = "#" + result;
			canSeeFurther = false;
		}
	} while (canSeeFurther);

	canSeeFurther = true;
	testL = l;
	// Look in the positive direction.
	do
	{
		if (w.canMoveHere(testL.getRelativeLocation(x, y, z)))
		{
			result = result + "-";
			testL.change(x, y, z);
		}
		else
		{
			result = result + "#";
			canSeeFurther = false;
		}
	} while (canSeeFurther);
	return result;
}