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
	Point(Point& other);
	~Point();
	Point& operator = (Point& rhs);
	float getX(void);
	float getY(void);

};

bool bsp( Point a, Point b, Point c, Point point);

#endif