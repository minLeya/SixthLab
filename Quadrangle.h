#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "Coordinates.h"
#include "Figure.h"
#include <iostream>
#include "arbitrary.h"

class Quadrangle : public Figure
{
protected:
	//Coordinates m_firstVertex; there is the first vertex in Figure
	/*Coordinates m_secondVertex;
	Coordinates m_thirdVertex;
	Coordinates m_fourthVertex;*/

public:
	Quadrangle();
	Quadrangle(float firstVertexX, float firstVertexY, const sf::Color& color);
	Quadrangle(float firstVertexX, float firstVertexY, float secondVertexX, float secondVertexY, float thirdVertexX, float thirdVertexY, float fourthVertexX, float fourthVertexY, const sf::Color& color);
	void vertexInitialization();
	void initialization() override;

	void changeHeight(float addHeight);
	void changeLength(float addWidth);

	virtual ShapeType getShapeType() const { return ShapeType::quadrangle; };

	sf::ConvexShape m_quadrangle;
	sf::ConvexShape returnQuadrangle();
	//void moveToQuadrangle(float add_x, float add_y);

	//bool isFourPoint{ true };

	//inherited
	void show() override;
	//virtual void moveTo(float add_x, float add_y);
	//void move();
	//как перемещаться по вкладкам в vs
};
#endif