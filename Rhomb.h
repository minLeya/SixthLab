#ifndef RHOMB_H
#define RHOMB_H
#include <iostream>
#include "Quadrangle.h"

class Rhomb : public Quadrangle
{
protected:
	float m_horizontalDiagonalLength;
	float m_verticalDiagonalLength;
public:
	sf::ConvexShape m_rhomb;
	sf::ConvexShape returnRhomb();

	Rhomb();
	Rhomb(float mainX, float mainY, const sf::Color& color, float firstDiagonalLength, float secondDiagonalLength);

	virtual ShapeType getShapeType() const { return ShapeType::rhomb; };


	void vertexInitialization();
	void initialization() override;

	void show() override;
	//void moveTo(float add_x, float add_y) override;

	void changeHorisontalDiagonal(float addLength);
	void changeVerticalDiagonal(float addLength);

	//bool isFourPoint{ };

};

#endif // !RHOMB_H
