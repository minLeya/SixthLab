#include "Trapezoid.h"

sf::ConvexShape Trapezoid::returnTrapezoid()
{
	return m_trapezoid;
}

void Trapezoid::vertexInitialization()
{
	m_secondVertex.setPosition(m_coordinates.getX() + rng::getFloat(sizes::min, sizes::max), m_coordinates.getY());
	m_thirdVertex.setPosition(m_secondVertex.getX() + rng::getFloat(sizes::min, sizes::max), m_secondVertex.getY() + rng::getFloat(sizes::min, sizes::max));
	m_fourthVertex.setPosition(m_coordinates.getX() - rng::getFloat(sizes::min, sizes::max), m_thirdVertex.getY());
}

void Trapezoid::initialization()
{
	m_trapezoid.setPointCount(4);
	m_trapezoid.setPoint(0, sf::Vector2f{ m_coordinates.getX(), m_coordinates.getY() });
	m_trapezoid.setPoint(1, sf::Vector2f{ m_secondVertex.getX(), m_secondVertex.getY() });
	m_trapezoid.setPoint(2, sf::Vector2f{ m_thirdVertex.getX(), m_thirdVertex.getY() });
	m_trapezoid.setPoint(3, sf::Vector2f{ m_fourthVertex.getX(), m_fourthVertex.getY() });
	m_trapezoid.setFillColor(m_color);
}

Trapezoid::Trapezoid()
	: Quadrangle{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255), rng::getFloat(0, 255)) }
{
	//isFourPoint = true;

	vertexInitialization();
	initialization();
	std::cout << "in trapezoid const\n";

}

void Trapezoid::show()
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

//void Trapezoid::moveTo(float add_x, float add_y)
//{
//	m_coordinates.setPosition(m_coordinates.getX() + add_x, m_coordinates.getY() + add_y);
//	m_secondVertex.setPosition(m_secondVertex.getX() + add_x, m_secondVertex.getY() + add_y);
//	m_thirdVertex.setPosition(m_thirdVertex.getX() + add_x, m_thirdVertex.getY() + add_y);
//	m_fourthVertex.setPosition(m_fourthVertex.getX() + add_x, m_fourthVertex.getY() + add_y);
//	trapezoidInitialization();
//}

void Trapezoid::changeHeight(float addHeight)
{
	m_fourthVertex.setY(m_fourthVertex.getY() + addHeight);
	m_thirdVertex.setY(m_thirdVertex.getY() + addHeight);
	initialization();
}
