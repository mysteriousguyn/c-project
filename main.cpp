/*
 * main.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: nilav
 */

#include <iostream>
#include "ShapeFactory.h"
#include "Shape.h"
using namespace std;

int main() {
	ShapeFactory shapeFactory;

	Shape *shape1 = shapeFactory.getShape("CIRCLE");
	shape1->draw();

	Shape *shape2 = shapeFactory.getShape("RECTANGLE");
		shape2->draw();

	Shape *shape3 = shapeFactory.getShape("SQUARE");
		shape3->draw();
}

