#include "canvas.h"
#include "C_Line.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, color c)
{
	switch (c)
	{
		case color::white:		os << "White "; break;
		case color::red:		os << "Red "; break;
		case color::green:		os << "Green "; break;
		case color::blue:		os << "Blue "; break;
		case color::yellow:		os << "Yellow "; break;
		case color::black:		os << "Black "; break;
		case color::no_color:	os << "No color "; break:
	}
	return os;
}