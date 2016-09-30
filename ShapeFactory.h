/*
 * ShapeFactory.h
 *
 *  Created on: Jul 27, 2016
 *      Author: nilav
 */

#include <iostream>
#include "Shape.h"
#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

using namespace std;

class ShapeFactory {
public:
	Shape *getShape(string shape);
};

#endif /* SHAPEFACTORY_H_ */
