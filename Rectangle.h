#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "canvas.h"
#include "Point.h"
#include "Shape.h"

class  Rectangle :public Shape
{
public:
	Rectangle(const Point& p, int h,int w, color c) :Shape(p, c), w(w),h(h) {};
	const Shape who_am_i()const :{return Rectangle};
	void move(const Point& p) const {
		m_org += p;
	};
	void draw() const = 0;
	double area()const = 0;
	void scale(double);
	void draw_to_file(ofstream&) const;

private:
	int w;
	int h;
};
#endif