#include <math.h>
#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
using namespace std;

#include "canvas.h"
#include "Point.h"
#include "Shape.h"
#include "Circle.h"



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