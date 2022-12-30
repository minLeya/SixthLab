#include "Rhomb.h"

sf::ConvexShape Rhomb::returnRhomb()
{
	return m_rhomb;
}

void Rhomb::vertexInitialization()
{
	m_secondVertex.setPosition(m_coordinates.getX() + m_horizontalDiagonalLength / 2, m_coordinates.getY() - m_verticalDiagonalLength / 2);
	m_thirdVertex.setPosition(m_coordinates.getX() + m_horizontalDiagonalLength, m_coordinates.getY());
	m_fourthVertex.setPosition(m_coordinates.getX() + m_horizontalDiagonalLength / 2, m_coordinates.getY() + m_verticalDiagonalLength / 2);
}

void Rhomb::initialization()
{
	m_rhomb.setPointCount(4);

	m_rhomb.setPoint(0, sf::Vector2f{ m_coordinates.getX(), m_coordinates.getY() });
	m_rhomb.setPoint(1, sf::Vector2f{ m_secondVertex.getX(), m_secondVertex.getY() });
	m_rhomb.setPoint(2, sf::Vector2f{ m_thirdVertex.getX(), m_thirdVertex.getY() });
	m_rhomb.setPoint(3, sf::Vector2f{ m_fourthVertex.getX(), m_fourthVertex.getY() });

	m_rhomb.setFillColor(m_color);
}

Rhomb::Rhomb() : Quadrangle{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255), rng::getFloat(0, 255)) }, m_horizontalDiagonalLength{ rng::getFloat(50, 100) }, m_verticalDiagonalLength{ rng::getFloat(100, 200) }
{
	//isFourPoint = true;
	vertexInitialization();
	initialization();
	std::cout << "in rhomb const\n";
}

Rhomb::Rhomb(float mainX, float mainY, const sf::Color& color, float horizontalDiagonalLength, float verticalDiagonalLength)
	: Quadrangle{ mainX, mainY, color }, m_horizontalDiagonalLength{ horizontalDiagonalLength }, m_verticalDiagonalLength{ verticalDiagonalLength }
{
	//isFourPoint = true;
	vertexInitialization();
	initialization();
	std::cout << "in rhomb\n";
}

void Rhomb::show()
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

//void Rhomb::moveTo(float add_x, float add_y)
//{
//	m_coordinates.setPosition(m_coordinates.getX() + add_x, m_coordinates.getY() + add_y);
//	m_secondVertex.setPosition(m_secondVertex.getX() + add_x, m_secondVertex.getY() + add_y);
//	m_thirdVertex.setPosition(m_thirdVertex.getX() + add_x, m_thirdVertex.getY() + add_y);
//	m_fourthVertex.setPosition(m_fourthVertex.getX() + add_x, m_fourthVertex.getY() + add_y);
//	rhombInitialization();
//}

void Rhomb::changeHorisontalDiagonal(float addLength)
{
	m_horizontalDiagonalLength += addLength;
	vertexInitialization();
	initialization();
}

void Rhomb::changeVerticalDiagonal(float addLength)
{
	m_verticalDiagonalLength += addLength;
	vertexInitialization();
	initialization();
}