#include <math.h>
#define _USE_MATH_DEFINES

#include "canvas.h"

#include <iostream>
#include <fstream>
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
		default:				os << "No color ";
	}
	return os;
}

ostream& operator<<(ostream& os, const Point& p)
{
	os << '(' << p.x() << ',' << p.y() << ')';
	return os;
}

void Line::draw() const
{
	cout << "No color Line from " << m_org << " To " << m_end << endl;;
}

double Line::length() const
{
	return sqrt((double)((m_org.x()-m_end.x())*(m_org.x()-m_end.x()) + (m_org.y()-m_end.y())*(m_org.y()-m_end.y())));
}

void C_Line::draw() const
{
	cout<< m_color << " Line from " << m_org << " To " << m_end <<endl;
}

void Circle::draw() const
{
	cout << m_color << " circle: Center in" << m_org << "Radius in " << m_radius << endl;
}

double Circle::area() const
{
	double sum = 0;
	sum = pow((M_1_PI*m_radius), 2);
	return sum;
}

void Circle::scale(double s)
{
	m_radius = s * m_radius;
}

void Circle::draw_to_file(ofstream& file) const
{
	file << m_color << " circle: Center in" << m_org << "Radius in " << m_radius << endl;
}