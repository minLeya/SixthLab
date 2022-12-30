#include <SFML/Graphics.hpp>
#include "Figure.h"
#include "Coordinates.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include "functionsForModification.h"
#include "functionsForMovement.h"
#include "arbitrary.h"
#include <vector>
#include <array>
#include <iostream>
#include <memory>
#include "ArrayContainer.h"
#include "ListContainer.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(sizes::windowLength, sizes::windowWidth), "window");
    window.setFramerateLimit(60);

    ListContainer<Figure*> figuresList;

    ArrayContainer<Figure*> figuresArray(30);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            if (event.type == event.KeyPressed)
            {
                //for array
                showFigures(figuresArray);
               
                moveRight(figuresArray);
                moveLeft(figuresArray);
                moveUp(figuresArray);
                moveDown(figuresArray);

                moveCircularRight(figuresArray);
                moveCircularLeft(figuresArray);
                moveCircularDown(figuresArray);
                moveCircularUp(figuresArray);

                moveQuadrangularRight(figuresArray);
                moveQuadrangularLeft(figuresArray);
                moveQuadrangularDown(figuresArray);
                moveQuadrangularUp(figuresArray);

                hideAll(figuresArray);
                hideCircular(figuresArray);
                hideQuadrangle(figuresArray);

                increaseRadius(figuresArray);
                decreaseRadius(figuresArray);

                increaseLength(figuresArray);

                //for list
                showFigures(figuresList);//7
                hideAll(figuresList);//y
                hideCircular(figuresList);//u
                hideQuadrangle(figuresList);//t

                increaseRadius(figuresList);//z
                decreaseRadius(figuresList);//x
                increaseLength(figuresList);//c

                moveRight(figuresList);
                moveLeft(figuresList);
                moveUp(figuresList);
                moveDown(figuresList);

                moveCircularRight(figuresList);
                moveCircularLeft(figuresList);
                moveCircularDown(figuresList);
                moveCircularUp(figuresList);

                moveQuadrangularRight(figuresList);
                moveQuadrangularLeft(figuresList);
                moveQuadrangularDown(figuresList);
                moveQuadrangularUp(figuresList);

            }
        }
        window.clear();

     

        for (auto& figure : figuresArray)
        {
            if (figure != nullptr && figure->isShown)
            {
                Figure::ShapeType shapeType{ figure->getShapeType() };
                switch (shapeType)
                {
                case Figure::ShapeType::circle:
                {
                    Circle* circle{ dynamic_cast<Circle*>(figure) };
                    if (circle)
                        window.draw(circle->returnCircle());
                    break;
                }
                case Figure::ShapeType::ellipse:
                {
                    Ellipse* ellipse{ dynamic_cast<Ellipse*>(figure) };
                    if (ellipse)
                        window.draw(ellipse->returnEllipse());
                    break;
                }
                case Figure::ShapeType::quadrangle:
                {
                    Quadrangle* quadrangle{ dynamic_cast<Quadrangle*>(figure) };
                    if (quadrangle)
                        window.draw(quadrangle->returnQuadrangle());
                    break;
                }
                case Figure::ShapeType::rectangle:
                {
                    Rectangle* rectangle{ dynamic_cast<Rectangle*>(figure) };
                    if (rectangle)
                        window.draw(rectangle->returnRectangle());
                    break;
                }
                case Figure::ShapeType::rhomb:
                {
                    Rhomb* rhomb{ dynamic_cast<Rhomb*>(figure) };
                    if (rhomb)
                        window.draw(rhomb->returnRhomb());
                    break;
                }
                case Figure::ShapeType::trapezoid:
                {
                    Trapezoid* trapezoid{ dynamic_cast<Trapezoid*>(figure) };
                    if (trapezoid)
                        window.draw(trapezoid->returnTrapezoid());
                    break;
                }
                }
            }
        }

        for (auto* figure : figuresList)
        {
            if (figure != nullptr && figure->isShown)
            {
                Figure::ShapeType shapeType{ figure->getShapeType() };
                switch (shapeType)
                {
                case Figure::ShapeType::circle:
                {
                    Circle* circle{ dynamic_cast<Circle*>(figure) };
                    if (circle)
                        window.draw(circle->returnCircle());
                    break;
                }
                case Figure::ShapeType::ellipse:
                {
                    Ellipse* ellipse{ dynamic_cast<Ellipse*>(figure) };
                    if (ellipse)
                        window.draw(ellipse->returnEllipse());
                    break;
                }
                case Figure::ShapeType::quadrangle:
                {
                    Quadrangle* quadrangle{ dynamic_cast<Quadrangle*>(figure) };
                    if (quadrangle)
                        window.draw(quadrangle->returnQuadrangle());
                    break;
                }
                case Figure::ShapeType::rectangle:
                {
                    Rectangle* rectangle{ dynamic_cast<Rectangle*>(figure) };
                    if (rectangle)
                        window.draw(rectangle->returnRectangle());
                    break;
                }
                case Figure::ShapeType::rhomb:
                {
                    Rhomb* rhomb{ dynamic_cast<Rhomb*>(figure) };
                    if (rhomb)
                        window.draw(rhomb->returnRhomb());
                    break;
                }
                case Figure::ShapeType::trapezoid:
                {
                    Trapezoid* trapezoid{ dynamic_cast<Trapezoid*>(figure) };
                    if (trapezoid)
                        window.draw(trapezoid->returnTrapezoid());
                    break;
                }
                }
            }
        }


        window.display();
    }
    return 0;
}