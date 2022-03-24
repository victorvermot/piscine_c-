#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return ;
}

Point::Point(float x, float y) : _x(x), _y(y), _useX(x), _useY(y)
{
	return ;
}

Point::Point(const Point& other)
{
	*this = other;
}

float Point::getX(void) const
{
	return (_useX.toFloat());
}

float Point::getY(void) const
{
	return (_useY.toFloat());
}

Point& Point::operator = (const Point& rhs)
{
	if (this != &rhs)
	{
		this->_useX = rhs.getX();
		this->_useY = rhs.getY();
	}
	return (*this);
}

Point::~Point()
{  
	return;
}
