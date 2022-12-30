#ifndef TRAPEZOID_H
#define TRAPEZOID_H
#include "Rectangle.h"
#include "arbitrary.h"
#include <iostream>


class Trapezoid : public Quadrangle
{
public:
	sf::ConvexShape m_trapezoid;
	sf::ConvexShape returnTrapezoid();

	Trapezoid();

	void vertexInitialization();
	void initialization() override;

	//bool isFourPoint{ true };

	virtual ShapeType getShapeType() const { return ShapeType::trapezoid; };


	void show() override;
	//void moveTo(float add_x, float add_y) override;

	void changeHeight(float addHeight);
};

#endif
