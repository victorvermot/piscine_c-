#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return ;
}

Point::Point(float x, float y) : _x(x), _y(y), _useX(x), _useY(y)
{
	return ;
}

Point::Point(Point& other)
{
	*this = other;
}

float Point::getX(void)
{
	return (_useX.toFloat());
}

float Point::getY(void)
{
	return (_useY.toFloat());
}

Point& Point::operator = (Point& rhs)
{
	if (this != &rhs)
	{
		this->_useX = rhs.getX();
		this->_useY = rhs.getY();
	}
	return (rhs);
}

Point::~Point()
{  
	return;
}
