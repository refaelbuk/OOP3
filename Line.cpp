#include <math.h>
#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
using namespace std;

#include "canvas.h"
#include "Point.h"
#include "Shape.h"
#include "Line.h"



void Line::draw() const
{
	cout << m_color <<" line " << m_org << " To " << m_end << endl;
}

double Line::length() const
{
	return sqrt((double)((m_org.x() - m_end.x())*(m_org.x() - m_end.x()) + (m_org.y() - m_end.y())*(m_org.y() - m_end.y())));
}

void Line::scale(int s) const
{
	double l = length();
	l = l * s;
	//צריך להשלים
}

void Line::draw_to_file(ofstream& file)
{
	file << m_color << " line " << m_org << " To " << m_end << endl;
}