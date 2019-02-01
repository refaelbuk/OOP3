#ifndef _LINE_H_
#define _LINE_H_

#include "canvas.h"
#include "Circle.h"

#include "canvas.h"
#include "Point.h"
#include "Shape.h"


class Line :public Shape{
protected:
	Point m_end; // line end
public:
	Line(const Point& p1, const Point& p2, color c) : Shape(p1, c), m_end(p2) {};
	void move(const Point& p)
	{
		m_org += p;
		m_end += p;
	}
	void draw() const;
	double length() const;
	void scale(int) const;
	void draw_to_file(ofstream&) const;
};

#endif