/*
 * ShapeFactory.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: nilav
 */

#include <iostream>
#include "ShapeFactory.h"
#include "Shape.h"

using namespace std;

Shape *ShapeFactory::getShape(string shape) {

	if(shape == "CIRCLE")
		return new Circle;

	if(shape == "RECTANGLE")
		return new Rectangle;

	if(shape == "SQUARE")
		return new Square;

	return NULL;
}

