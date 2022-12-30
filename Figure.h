#ifndef FIGURE_BASE_H
#define FIGURE_BASE_H
#include <SFML/Graphics.hpp>
#include "arbitrary.h"
#include "Coordinates.h"

//what's the difference between abstract and virtual?

class Figure
{
protected:
	Coordinates m_coordinates;
	sf::Color m_color;
	// isShown{};

	Coordinates m_secondVertex;
	Coordinates m_thirdVertex;
	Coordinates m_fourthVertex;


public:

	Figure(float x, float y);
	Figure(float x, float y, const sf::Color& color);

	//void moveTo(float add_x, float add_y, bool isFourPoint);
	void moveTo(float add_x, float add_y);

	enum class ShapeType
	{
		circle,
		rectangle,
		ellipse,
		rhomb,
		quadrangle,
		trapezoid,

		figure
	};


	virtual ShapeType getShapeType() const { return ShapeType::figure; };

	virtual void initialization()
	{
		std::cout << "heyy\n";
	}

	virtual void show()
	{
		isShown = !isShown;
	};

	bool isCircular{};

	bool isShown{};

	Coordinates getPosition() const;

	void setPosition(float newX, float newY);

};

#endif