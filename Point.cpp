

#include "canvas.h"
#include "C_Line.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"


ostream& operator<<(ostream& os, const Point& p)
{
	os << '(' << p.x() << ',' << p.y() << ')';
	return os;
}