#include "functionsForModification.h"
 


//array

void hideAll(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->show();
            }
        }
    }
}

void hideQuadrangle(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangle{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangle)
            {
                isQuadrangle->show();
            }
        }
    }
}

void hideCircular(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->show();
            }
        }
    }
}

void increaseRadius(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(2.f);
            }
        }
    }
}

void decreaseRadius(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(-2.f);
            }
        }
    }
}

void increaseLength(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->changeLength(2.f);
            }
        }
    }
}

//array container
void showFigures(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
    {
        std::mt19937 mt;
        std::uniform_int_distribution<> distr(1, 6);


        for (int i{ 0 }; i < 30; i++)
        {
            if (distr(mt) == 1)
            {
                std::cout << "figure array circle created\n";
                Circle* circlePtr{ new Circle{} };
                arrayContainerOfFigures[i] = circlePtr;
                arrayContainerOfFigures[i]->show();
            }
            if (distr(mt) == 2)
            {
                Ellipse* ellipsePtr{ new Ellipse{} };
                arrayContainerOfFigures[i] = ellipsePtr;
                arrayContainerOfFigures[i]->show();
            }
            if (distr(mt) == 3)
            {
                Quadrangle* quadranglePtr{ new Quadrangle{} };
                arrayContainerOfFigures[i] = quadranglePtr;
                arrayContainerOfFigures[i]->show();
            }
            if (distr(mt) == 4)
            {
                Rectangle* rectanglePtr{ new Rectangle{} };
                arrayContainerOfFigures[i] = rectanglePtr;
                arrayContainerOfFigures[i]->show();
            }
            if (distr(mt) == 5)
            {
                Rhomb* rhombPtr{ new Rhomb{} };
                arrayContainerOfFigures[i] = rhombPtr;
                arrayContainerOfFigures[i]->show();
            }
            if (distr(mt) == 6)
            {
                Trapezoid* trapezoidPtr{ new Trapezoid{} };
                arrayContainerOfFigures[i] = trapezoidPtr;
                arrayContainerOfFigures[i]->show();
            }
        }

    }
}

//list
void showFigures(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
    {
        std::mt19937 mt;
        std::uniform_int_distribution<> distr(1, 6);

        for (int i{ 0 }; i < 30; ++i)
        {
            if (distr(mt) == 1)
            {
                Circle* circlePtr{ new Circle{} };
                circlePtr->show();
                listContainerOfFigures.append(circlePtr);
            }
            if (distr(mt) == 2)
            {
                Ellipse* ellipsePtr{ new Ellipse{} };
                ellipsePtr->show();
                listContainerOfFigures.append(ellipsePtr);
            }
            if (distr(mt) == 3)
            {
                Quadrangle* quadranglePtr{ new Quadrangle{} };
                quadranglePtr->show();
                listContainerOfFigures.append(quadranglePtr);
            }
            if (distr(mt) == 4)
            {
                Rectangle* rectanglePtr{ new Rectangle{} };
                rectanglePtr->show();
                listContainerOfFigures.append(rectanglePtr);
            }
            if (distr(mt) == 5)
            {
                Rhomb* rhombPtr{ new Rhomb{} };
                rhombPtr->show();
                listContainerOfFigures.append(rhombPtr);
            }
            if (distr(mt) == 6)
            {
                Trapezoid* trapezoidPtr{ new Trapezoid{} };
                trapezoidPtr->show();
                listContainerOfFigures.append(trapezoidPtr);
            }
     
        }
    }
}

void hideAll(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->show();
            }
        }
    }
}

void hideQuadrangle(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangle{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangle)
            {
                isQuadrangle->show();
            }
        }
    }
}

void hideCircular(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->show();
            }
        }
    }
}

void increaseRadius(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(2.f);
            }
        }
    }
}

void decreaseRadius(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(-2.f);
            }
        }
    }
}

void increaseLength(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->changeLength(2.f);
            }
        }
    }
}