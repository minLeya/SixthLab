#include "Quadrangle.h"

void Quadrangle::vertexInitialization() // i could do this w .setPosition but i wrote func for set lil bit later...
{
	m_secondVertex.setX(m_coordinates.getX() + rng::getFloat(35, 100));
	m_secondVertex.setY(m_coordinates.getY() + rng::getFloat(10, 100));

	m_thirdVertex.setX(m_secondVertex.getX() + rng::getFloat(-15, 50));
	m_thirdVertex.setY(m_secondVertex.getY() + rng::getFloat(30, 100));

	m_fourthVertex.setX(m_coordinates.getX() + rng::getFloat(-50, 8));
	m_fourthVertex.setY(m_coordinates.getY() + rng::getFloat(30, 100));
}

void Quadrangle::initialization()
{

	m_quadrangle.setPointCount(4);
	m_quadrangle.setPoint(0, sf::Vector2f{ m_coordinates.getX(), m_coordinates.getY() });
	m_quadrangle.setPoint(1, sf::Vector2f{ m_secondVertex.getX(), m_secondVertex.getY() });
	m_quadrangle.setPoint(2, sf::Vector2f{ m_thirdVertex.getX(), m_thirdVertex.getY() });
	m_quadrangle.setPoint(3, sf::Vector2f{ m_fourthVertex.getX(), m_fourthVertex.getY() });
	m_quadrangle.setFillColor(m_color);
}


Quadrangle::Quadrangle() : Figure{ rng::getFloat(200, sizes::windowLength - 50), rng::getFloat(0, sizes::windowWidth - 50), sf::Color(rng::getFloat(0, 255), rng::getFloat(0, 255),rng::getFloat(0, 255)) }
{
	//isFourPoint = true;
	vertexInitialization();
	initialization();
	std::cout << "in quadrangle default const\n";
}

Quadrangle::Quadrangle(float firstVertexX, float firstVertexY, const sf::Color& color)
	: Figure{ firstVertexX, firstVertexY, color }
{
	//isFourPoint = true;
	vertexInitialization();
	initialization();
	std::cout << "in quadrangle\n";
}

Quadrangle::Quadrangle(float firstVertexX, float firstVertexY, float secondVertexX, float secondVertexY, float thirdVertexX, float thirdVertexY, float fourthVertexX, float fourthVertexY, const sf::Color& color)
	: Figure{ firstVertexX, firstVertexY, color }
	//m_secondVertex{ secondVertexX, secondVertexY }, m_thirdVertex{ thirdVertexX, thirdVertexY }, m_fourthVertex{ fourthVertexX, fourthVertexY }
{
	//isFourPoint = true;
	m_secondVertex.setPosition(secondVertexX, secondVertexY);
	m_thirdVertex.setPosition(thirdVertexX, thirdVertexY);
	m_fourthVertex.setPosition(fourthVertexX, fourthVertexY);
	initialization();
	std::cout << "in quadrangle\n";
}

void Quadrangle::show()
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

//void Quadrangle::move()
//{
//	//moveTo(float add_x, float add_y);
//	quadrangleInitialization();
//}

//void Quadrangle::moveToQuadrangle(float add_x, float add_y)
//{
//	//m_coordinates.setPosition(m_coordinates.getX() + add_x, m_coordinates.getY() + add_y);
//	m_secondVertex.setPosition(m_secondVertex.getX() + add_x, m_secondVertex.getY() + add_y);
//	m_thirdVertex.setPosition(m_thirdVertex.getX() + add_x, m_thirdVertex.getY() + add_y);
//	m_fourthVertex.setPosition(m_fourthVertex.getX() + add_x, m_fourthVertex.getY() + add_y);
//	initialization();
//}

sf::ConvexShape Quadrangle::returnQuadrangle()
{
	return m_quadrangle;
}


void Quadrangle::changeHeight(float addHeight)
{
	m_fourthVertex.setY(m_fourthVertex.getY() + addHeight);
	m_thirdVertex.setY(m_thirdVertex.getY() + addHeight);
	initialization();
}

void Quadrangle::changeLength(float addWidth)
{
	m_secondVertex.setX(m_secondVertex.getX() + addWidth);
	m_thirdVertex.setX(m_thirdVertex.getX() + addWidth);
	initialization();
}