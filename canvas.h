#ifndef _CANVAS_H_
#define _CANVAS_H_

#include <iostream>
using namespace std;

enum class color { white, red, green, blue, yellow, black, END_OF_COLORS };


class Point {
private:
	int m_xc, m_yc;	//(x,y) coordinats
public:
	Point(int x = 0, int y = 0) : m_xc(x), m_yc(y) {}
	int x(void) const	{ return m_xc; }
	int y(void) const	{ return m_yc; }
	Point operator+(const Point& p) const 
	{
		return Point(m_xc+p.m_xc, m_yc+p.m_yc);
	}
	Point& operator+=(const Point& p) //move point
	{ 
		m_xc += p.m_xc; 
		m_yc += p.m_yc; 
		return *this; 
	} 
	friend ostream& operator<<(ostream& os, const Point& p);
};
//--------------------------------------------------------
class Line {
protected:
	Point m_org; // line origin
	Point m_end; // line end
public:
	Line (const Point& p1, const Point& p2) : m_org(p1), m_end(p2) {}
	void move(const Point& p)
	{
		m_org+=p; 
		m_end+=p;
	}
	void draw() const;
	double length() const;
};

class C_Line : public Line { //colored line
	color m_color;
public:
	C_Line(const Point& a, const Point& b, color c) : Line(a, b), m_color(c) {}
	void draw() const;
};

class Shape
{
public:
	Shape(const Point& p, color c) :m_org(p), m_color(c) {};
	virtual ~Shape();
	virtual void move() const = 0;
	virtual void draw() const = 0;
	virtual double area()const = 0;

protected:
	Point m_org;
	color m_color;
};

class  Circle :public Shape
{
public:
	Circle(const Point& center, double Radius, color c) : Shape(center, c), m_radius(Radius) {};
	void move(const Point& p)  {
		m_org += p;
	};
	void draw() const = 0;
	double area()const = 0;
	void scale(double);
	void draw_to_file(ofstream&) const;

private:
	double m_radius;
};

class  Rectangle :public Shape
{
public:
	Rectangle(const Point& pd, Point& pu, color c) :Shape(pd, c),lx(pu) {};
	void move(const Point& p)  {
		m_org += p;
		lx += p;
	};
	void draw() const = 0;
	double area()const = 0;
	void scale(double);
	void draw_to_file(ofstream&) const;

private:
	Point lx; //the point in up and right
};


#endif		// _CANVAS_H_

















































/*
	Line * p;
	p=&l1;
	p->draw();
	cout<<endl;

	p=&l2;
	p->draw();
	cout<<endl;
*/