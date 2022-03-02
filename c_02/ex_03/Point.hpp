#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point(void);
	Point(float x, float y);
	Point(Point& other);
	~Point();
	Point& operator = (Point& rhs);
	float getX(void) const;
	float getY(void) const;

};

#endif