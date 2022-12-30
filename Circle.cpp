#include "Circle.h"

void Circle::initialization()
{
	m_circle.setRadius(m_radius);
	m_circle.setPosition(m_coordinates.getX(), m_coordinates.getY());
	m_circle.setFillColor(m_color);
}

Circle::Circle() : Figure{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255),rng::getFloat(0, 255)) },
m_radius{ rng::getFloat(sizes::min, sizes::max) }
{
	checkRadius();
	initialization();
	std::cout << "Circle object is created(const. w/o param.)\n";
}

Circle::Circle(float mainX, float mainY, const sf::Color& color, float radius)
	: Figure{ mainX, mainY, color }, m_radius{ radius }
{
	checkRadius();
	initialization();

	std::cout << "Circle object is created(const. w param.)\n";
}

void Circle::checkRadius()
{
	float diameterX{ m_coordinates.getX() + 2 * m_radius };
	if (diameterX > static_cast<float>(sizes::windowLength))
	{
		m_coordinates.setX(m_coordinates.getX() - (diameterX - static_cast<float>(sizes::windowLength)));
	}

	float diameterY{ m_coordinates.getY() + 2 * m_radius };
	if (diameterY > static_cast<float>(sizes::windowWidth))
	{
		m_coordinates.setY(m_coordinates.getY() - (diameterY - static_cast<float>(sizes::windowWidth)));
	}
}

void Circle::setPosition(float newX, float newY)
{
	m_coordinates.setX(newX);
	m_coordinates.setY(newY);
}

void Circle::setColor(const sf::Color& color)
{
	m_color = color;
}

void Circle::setRadius(float newRadius)
{
	m_radius = newRadius;
}

sf::CircleShape Circle::returnCircle()
{
	return m_circle;
}

//void Circle::moveTo(float add_x, float add_y)
//{
//	m_coordinates.setX(m_coordinates.getX() + add_x);
//	m_coordinates.setY(m_coordinates.getY() + add_y);
//	InitializatonCircle();
//}

void Circle::changeRadius(float changeRadius)
{
	m_radius += changeRadius;
	initialization();
}

//float Circle::getRadius() const
//{
//	return m_radius;
//}

sf::Color Circle::getColor() const
{
	return m_color;
}

void Circle::show()
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

void Circle::vertexInitialization()
{

}

