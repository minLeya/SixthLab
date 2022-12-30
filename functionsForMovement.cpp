#include "functionsForMovement.h"


void moveRight(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(2.f, 0.f);
                shapePtr->initialization();
            }
        }
    }
}

void moveLeft(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(-2.f, 0.f);
                shapePtr->initialization();
            }
        }
    }
}


void moveUp(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(0.f, -2.f);
                shapePtr->initialization();
            }
        }
    }
    
}

void moveDown(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(0.f, 2.f);
                shapePtr->initialization();
            }
        }
    }
}

void moveCircularRight(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(2.f, 0.f);
                isCircular->initialization();
            }
        }
    }
}


void moveCircularLeft(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(-2.f, 0.f);
                isCircular->initialization();
            }
        }
    }
}

void moveCircularUp(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(0.f, -2.f);
                isCircular->initialization();
            }
        }
    }
}

void moveCircularDown(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(0.f, 2.f);
                isCircular->initialization();
            }
        }
    }
}

void moveQuadrangularRight(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(2.f, 0.f);
                isQuadrangular->initialization();
            }
        }
    }
}

void moveQuadrangularLeft(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(-2.f, 0.f);
                isQuadrangular->initialization();
            }
        }

    }
}

void moveQuadrangularUp(ArrayContainer<Figure*>& arrayContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(0.f, -2.f);
                isQuadrangular->initialization();
            }
        }
    }
}

void moveQuadrangularDown(ArrayContainer<Figure*>& arrayContainerOfFigures)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
    {
        for (auto& shapePtr : arrayContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(0.f, 2.f);
                isQuadrangular->initialization();
            }
        }
    }
}



//list
void moveRight(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(2.f, 0.f);
                shapePtr->initialization();
            }
        }
    }
}

void moveLeft(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(-2.f, 0.f);
                shapePtr->initialization();
            }
        }
    }
}


void moveUp(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(0.f, -2.f);
                shapePtr->initialization();
            }
        }
    }

}

void moveDown(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(0.f, 2.f);
                shapePtr->initialization();
            }
        }
    }
}

void moveCircularRight(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(2.f, 0.f);
                isCircular->initialization();
            }
        }
    }
}


void moveCircularLeft(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(-2.f, 0.f);
                isCircular->initialization();
            }
        }
    }
}

void moveCircularUp(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(0.f, -2.f);
                isCircular->initialization();
            }
        }
    }
}

void moveCircularDown(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->moveTo(0.f, 2.f);
                isCircular->initialization();
            }
        }
    }
}

void moveQuadrangularRight(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(2.f, 0.f);
                isQuadrangular->initialization();
            }
        }
    }
}

void moveQuadrangularLeft(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(-2.f, 0.f);
                isQuadrangular->initialization();
            }
        }

    }
}

void moveQuadrangularUp(ListContainer<Figure*>& listContainerOfFigures)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(0.f, -2.f);
                isQuadrangular->initialization();
            }
        }
    }
}

void moveQuadrangularDown(ListContainer<Figure*>& listContainerOfFigures)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
    {
        for (auto shapePtr : listContainerOfFigures)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->moveTo(0.f, 2.f);
                isQuadrangular->initialization();
            }
        }
    }
}


