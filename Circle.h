#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "canvas.h"
#include "Point.h"
#include "Shape.h"

class  Circle :public Shape
{
public:
	Circle(const Point& center, double Radius, color c) :Shape(center,c), m_radius(Radius) {};
	const Shape who_am_i()const :{return Circle};
	void move(const Point& p) const {
		m_org += p;
	};
	void draw() const = 0;
	double area()const = 0;
	void scale(double);
	void draw_to_file(ofstream&) const;

private:
	double m_radius;
};

#endif