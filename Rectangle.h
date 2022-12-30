#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"
#include "Quadrangle.h"
#include <SFML/Graphics.hpp>
#include "arbitrary.h"
#include <iostream>

class Rectangle : public Quadrangle
{
protected:
	float m_height;
	float m_length;

public:
	Rectangle();
	Rectangle(float firstVertexX, float firstVertexY, const sf::Color& color);
	sf::ConvexShape m_rectangle;
	sf::ConvexShape returnRectangle();

	void vertexInitialization();
	void initialization() override;

	//bool isFourPoint{};
	virtual ShapeType getShapeType() const { return ShapeType::rectangle; };


	void changeLength(float addWidth);
	void changeHeight(float addHeight);

	void show() override;
	//void moveTo(float add_x, float add_y) override;
};

#endif // !RECTANGLE_H

