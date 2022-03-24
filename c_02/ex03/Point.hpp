#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
	Fixed _useX;
	Fixed _useY;

public:
	Point(void);
	Point(float x, float y);
	Point(const Point& other);
	~Point();
	Point& operator = (const Point& rhs);
	float getX(void) const;
	float getY(void) const;

};

bool bsp( Point a, Point b, Point c, Point point);

#endif