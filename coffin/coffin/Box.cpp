#include "Box.h"

Box::Box() 
{
	width = 0;
	length = 0;
	Depth = 0;
}

void Box::setWidth(int w) {
	width = w;
}
void Box::setLength(int l) {
	length = l;
}
void Box::setDepth(int d) {
	Depth = d;
}

int Box::getWidth() {
	return width;
}
int Box::getLength() {
	return length;
}
int Box::getDepth() {
	return Depth;
}

int Box::boxVolume() {
	int volume = (width * length * Depth);
	return volume;
}


/*
Building...
Box();

void setWidth(int);
void setLength(int);
void setDepth(int);

int getWidth();
int getLength();
int getDepth();

int boxVolume();
*/