#pragma once

#include <string>

//Class Structure
class Box
{
private:
	int width, length, Depth;


public:
	Box();

	void setWidth(int);
	void setLength(int);
	void setDepth(int);

	int getWidth();
	int getLength();
	int getDepth();

	int boxVolume();
};