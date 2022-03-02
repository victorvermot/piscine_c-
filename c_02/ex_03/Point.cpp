#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Basic constructor called" << std::endl;
	return ;
}

Point::Point(float x, float y) : _x(x), _y(y)
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Point::Point(Point& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

float Point::getX(void) const
{
	return (_x.toFloat());
}

float Point::getY(void) const
{
	return (_y.toFloat());
}

Point& Point::operator = (Point& rhs)
{
	// if (this != &rhs)
	// {
	// 	this->_x = rhs.getX();
	// 	this->_y = rhs.getY();
	// }
	std::cout << "Copy constructor called" << std::endl;
	std::cout << "address of the old object : " << &rhs << std::endl;
	std::cout << "address of the new object : " << this << std::endl;
	return (rhs);
}

Point::~Point()
{  
	std::cout << "Destructor called" << std::endl;
	return;
}
