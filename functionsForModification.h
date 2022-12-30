#ifndef FUNCTIONS_FOR_MODIFICATION_H
#define FUNCTIONS_FOR_MODIFICATION_H
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

//figure

void hideAll(ArrayContainer<Figure*>& arrayContainerOfFigures);//y
void hideQuadrangle(ArrayContainer<Figure*>& arrayContainerOfFigures);//u

void increaseRadius(ArrayContainer<Figure*>& arrayContainerOfFigures);//z
void decreaseRadius(ArrayContainer<Figure*>& arrayContainerOfFigures);//x

void increaseLength(ArrayContainer<Figure*>& arrayContainerOfFigures);//c

void showFigures(ArrayContainer<Figure*>& arrayContainerOfFigures); //6
void hideCircular(ArrayContainer<Figure*>& arrayContainerOfFigures); //t


//for list container
void hideAll(ListContainer <Figure*>& listContainerOfFigures);//y
void hideQuadrangle(ListContainer <Figure*>& listContainerOfFigures);//u
void hideCircular(ListContainer <Figure*>& listContainerOfFigures); //t

void showFigures(ListContainer<Figure*>& listContainerOfFigures); //6

void increaseRadius(ListContainer<Figure*>& listContainerOfFigures);//z
void decreaseRadius(ListContainer<Figure*>& listContainerOfFigures);//x
void increaseLength(ListContainer<Figure*>& listContainerOfFigures);//c

#endif