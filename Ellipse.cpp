#include "Ellipse.h"

void Ellipse::vertexInitialization()
{

}



void Ellipse::initialization()
{
	m_ellipse.setPosition(m_coordinates.getX(), m_coordinates.getY());
	m_ellipse.setFillColor(m_color);
	m_ellipse.setRadius(m_radius);
	m_ellipse.setScale(2.f, 1.f);
	//m_ellipse.setScale(m_radius / m_radius, static_cast<float>(m_radius / m_semiminorAxis));
}

Ellipse::Ellipse()
	: Circle{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255), rng::getFloat(0, 255), rng::getFloat(sizes::min, sizes::max)), rng::getFloat(sizes::min, sizes::max) },
	m_semiminorAxis{ rng::getFloat(sizes::semiminorAxisMin, sizes::semiminorAxisMax) }
{
	std::cout << "in ellipse const\n";
	initialization();
}

Ellipse::Ellipse(float mainX, float mainY, const sf::Color& color, float radius, float semiminorAxis)
	: Circle{ mainX, mainY, color, radius }, m_semiminorAxis{ semiminorAxis }
{
	std::cout << "in ellipse const\n";
	initialization();
}

sf::CircleShape Ellipse::returnEllipse()
{
	return m_ellipse;
}

void Ellipse::setPosition(float newX, float newY)
{
	m_coordinates.setX(newX);
	m_coordinates.setY(newY);

}

void Ellipse::setColor(const sf::Color& color)
{
	m_color = color;
}

void Ellipse::setRadius(float newRadius)
{
	m_radius = newRadius;
}

void Ellipse::show()
{
	if (isShown)
	{
		isShown = false;
	}
	else if (!isShown)
	{
		isShown = true;
	}
}

//void Ellipse::moveTo(float add_x, float add_y)
//{
//	m_coordinates.setX(m_coordinates.getX() + add_x);
//	m_coordinates.setY(m_coordinates.getY() + add_y);
//	initializatonEllipse();
//}

void Ellipse::rotate()
{
	m_ellipse.rotate(90.f);
}
