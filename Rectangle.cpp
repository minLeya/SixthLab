#include "Rectangle.h"

void Rectangle::vertexInitialization()
{
	m_secondVertex.setPosition(m_coordinates.getX() + rng::getFloat(sizes::min, sizes::max), m_coordinates.getY());
	m_thirdVertex.setPosition(m_secondVertex.getX(), m_secondVertex.getY() + rng::getFloat(sizes::min, sizes::max));
	m_fourthVertex.setPosition(m_coordinates.getX(), m_thirdVertex.getY());
}

void Rectangle::initialization()
{
	//isFourPoint = true;
	m_rectangle.setPointCount(4);

	m_rectangle.setPoint(0, sf::Vector2f{ m_coordinates.getX(), m_coordinates.getY() });
	m_rectangle.setPoint(1, sf::Vector2f{ m_secondVertex.getX(), m_secondVertex.getY() });
	m_rectangle.setPoint(2, sf::Vector2f{ m_thirdVertex.getX(), m_thirdVertex.getY() });
	m_rectangle.setPoint(3, sf::Vector2f{ m_fourthVertex.getX(), m_fourthVertex.getY() });

	m_rectangle.setFillColor(m_color);
}

Rectangle::Rectangle() : Quadrangle{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255),rng::getFloat(0, 255)) }
{
	//isFourPoint = true;
	vertexInitialization();
	initialization();
	std::cout << "in rectangle default const\n";
}

Rectangle::Rectangle(float firstVertexX, float firstVertexY, const sf::Color& color)
	: Quadrangle{ firstVertexX, firstVertexY, color }
{
	vertexInitialization();
	initialization();
	std::cout << "in rectangle\n";
}

void Rectangle::show()
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

//void Rectangle::moveTo(float add_x, float add_y)
//{
//	m_coordinates.setPosition(m_coordinates.getX() + add_x, m_coordinates.getY() + add_y);
//	m_secondVertex.setPosition(m_secondVertex.getX() + add_x, m_secondVertex.getY() + add_y);
//	m_thirdVertex.setPosition(m_thirdVertex.getX() + add_x, m_thirdVertex.getY() + add_y);
//	m_fourthVertex.setPosition(m_fourthVertex.getX() + add_x, m_fourthVertex.getY() + add_y);
//	rectangleInitialization();
//}

sf::ConvexShape Rectangle::returnRectangle()
{
	return m_rectangle;
}

void Rectangle::changeHeight(float addHeight)
{
	m_fourthVertex.setY(m_fourthVertex.getY() + addHeight);
	m_thirdVertex.setY(m_thirdVertex.getY() + addHeight);
	initialization();
}

void Rectangle::changeLength(float addWidth)
{
	m_secondVertex.setX(m_secondVertex.getX() + addWidth);
	m_thirdVertex.setX(m_thirdVertex.getX() + addWidth);
	initialization();
}