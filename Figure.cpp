#include "Figure.h"
#include <iostream>

//Figure::Figure(float mainX, float mainY, const sf::Color& color)
//				: m_coordinates { mainX, mainY }, m_color{ sf }
//{
//	std::cout << "in Figure\n";
//}
//
//Figure::Figure(float mainX, float mainY)
//	: m_coordinates{ mainX, mainY }
//{
//	std::cout << "in Figure2\n";
//}



Figure::Figure(float x, float y) : m_coordinates{ x, y },
m_color{ sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255),rng::getFloat(0, 255)) },
isShown{ false }
{
	std::cout << "in figure const\n";
}

Figure::Figure(float x, float y, const sf::Color& color) : m_coordinates{ x, y },
m_color{ color },
isShown{ false }
{
	std::cout << "in figure const\n";
}


Coordinates Figure::getPosition() const
{
	return m_coordinates;
}

void Figure::setPosition(float newX, float newY)
{
	m_coordinates.setX(newX);
	m_coordinates.setY(newY);
}

void Figure::moveTo(float add_x, float add_y)
{
	m_coordinates.setPosition(m_coordinates.getX() + add_x, m_coordinates.getY() + add_y);
	m_secondVertex.setPosition(m_secondVertex.getX() + add_x, m_secondVertex.getY() + add_y);
	m_thirdVertex.setPosition(m_thirdVertex.getX() + add_x, m_thirdVertex.getY() + add_y);
	m_fourthVertex.setPosition(m_fourthVertex.getX() + add_x, m_fourthVertex.getY() + add_y);
}