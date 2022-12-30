#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>
#include "arbitrary.h"

class Coordinates
{
protected:
	float m_x{};
	float m_y{};

public:
	Coordinates();
	Coordinates(float x, float y);

	void setX(float x);
	void setY(float y);

	float getX();
	float getY();

	void setPosition(float newX, float newY);
};

#endif