#include "Coordinates.h"

Coordinates::Coordinates() : m_x{ sizes::windowLength }, m_y{ sizes::windowWidth }
{
	std::cout << "the coordinates object is initialized\n";
}

Coordinates::Coordinates(float x, float y) : m_x{ x }, m_y{ y }
{
	std::cout << "the coordinates object is initialized\n";
}

void Coordinates::setX(float x)
{
	m_x = x;
}

void Coordinates::setY(float y)
{
	m_y = y;
}

float Coordinates::getX()
{
	return m_x;
}

float Coordinates::getY()
{
	return m_y;
}

void Coordinates::setPosition(float newX, float newY)
{
	m_x = newX;
	m_y = newY;
}