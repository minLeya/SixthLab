#ifndef FUNCTIONS_FOR_SHAPES_H
#define FUNCTIONS_FOR_SHAPES_H

#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>
#include "ArrayContainer.h"
#include "ListContainer.h"



void moveRight(ArrayContainer<Figure*>& arrayContainerOfFigures); //right/left/up/down buttons
void moveLeft(ArrayContainer<Figure*>& arrayContainerOfFigures);
void moveUp(ArrayContainer<Figure*>& arrayContainerOfFigures);
void moveDown(ArrayContainer<Figure*>& arrayContainerOfFigures);

void moveCircularRight(ArrayContainer<Figure*>& arrayContainerOfFigures); //d
void moveCircularLeft(ArrayContainer<Figure*>& arrayContainerOfFigures);//a
void moveCircularUp(ArrayContainer<Figure*>& arrayContainerOfFigures);//w
void moveCircularDown(ArrayContainer<Figure*>& arrayContainerOfFigures);//s

void moveQuadrangularRight(ArrayContainer<Figure*>& arrayContainerOfFigures);//l
void moveQuadrangularLeft(ArrayContainer<Figure*>& arrayContainerOfFigures);//j
void moveQuadrangularUp(ArrayContainer<Figure*>& arrayContainerOfFigures);//i
void moveQuadrangularDown(ArrayContainer<Figure*>& arrayContainerOfFigures);//k


//list
void moveRight(ListContainer<Figure*>& listContainerOfFigures); //right/left/up/down buttons
void moveLeft(ListContainer<Figure*>& listContainerOfFigures);
void moveUp(ListContainer<Figure*>& listContainerOfFigures);
void moveDown(ListContainer<Figure*>& listContainerOfFigures);

void moveCircularRight(ListContainer<Figure*>& listContainerOfFigures); //d
void moveCircularLeft(ListContainer<Figure*>& listContainerOfFigures);//a
void moveCircularUp(ListContainer<Figure*>& listContainerOfFigures);//w
void moveCircularDown(ListContainer<Figure*>& listContainerOfFigures);//s

void moveQuadrangularRight(ListContainer<Figure*>& listContainerOfFigures);//l
void moveQuadrangularLeft(ListContainer<Figure*>& listContainerOfFigures);//j
void moveQuadrangularUp(ListContainer<Figure*>& listContainerOfFigures);//i
void moveQuadrangularDown(ListContainer<Figure*>& listContainerOfFigures);//k


#endif // !
