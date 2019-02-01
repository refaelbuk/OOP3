#ifndef _SHAPE_H_
#define _SHAPE_H_


#include "canvas.h"
#include "Point.h"
#include "Circle.h"
#include "Line.h"
#include "Rectangle.h"

class Shape
{
public:
	Shape(const Point& p, color c) :m_org(p), m_color(c) {};
	virtual ~Shape();
	virtual void who_am_i()const = 0;
	virtual void move() const = 0;
	virtual void draw() const = 0;
	virtual double area()const = 0;



protected:
	Point m_org;
	color m_color;
};
#endif