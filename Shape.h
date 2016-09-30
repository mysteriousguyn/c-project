/*
 * Shape.h
 *
 *  Created on: Jul 27, 2016
 *      Author: nilav
 */

#include <iostream>

using namespace std;
#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
	virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
	void draw() {
		cout<<"Inside rectangle";
	}
};

class Square : public Shape {
public:
	void draw() {
		const string & message = "Silika";
		cout<<endl;
		cout<<"Inside square"<<message<<endl;
	}

};

class Circle : public Shape {
public:
	void draw() {
		cout<<"Inside circle";
	}
};


#endif /* SHAPE_H_ */
