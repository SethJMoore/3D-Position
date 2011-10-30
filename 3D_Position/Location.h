#pragma once

class Location
{
public:
	Location();
	Location(int setX, int setY, int setZ);
	Location(const Location & original);
	//~Location();
	void set(int setX, int setY, int setZ);
	void show();
	void change(int moveX, int moveY, int moveZ); //Changes location relative to present location.
	Location getRelativeLocation(int relativeX, int relativeY, int relativeZ);
	bool operator==(const Location & other);
	const int & getX()const;
	const int & getY()const;
	const int & getZ()const;
	
private:
	int x;
	int y;
	int z;
};