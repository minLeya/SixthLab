#ifndef CIRCLE_H
#define CIRCLE_H
#include <SFML/Graphics.hpp>
#include "Figure.h"
#include "Coordinates.h"

class Circle : public Figure
{
protected:
	float m_radius;

public:
	sf::CircleShape returnCircle();
	sf::CircleShape m_circle{};

	Circle();
	Circle(float mainX, float mainY, const sf::Color&, float radius);

	void setPosition(float newX, float newY);
	void setColor(const sf::Color& color);
	void setRadius(float newRadius);

	void vertexInitialization();

	virtual ShapeType getShapeType() const { return ShapeType::circle; };

	sf::Color getColor() const;

	//virtual func from figure
	void show() override;
	//void moveTo(float add_x, float add_y);

	//only for circle
	void changeRadius(float changeRadius);
	void initialization() override;

	void checkRadius();

};

#endif
