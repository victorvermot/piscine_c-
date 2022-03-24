#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment overload called" << std::endl;
	if (this != &rhs)
	{
		this->_fixedValue = rhs.getRawBits();
	}
	return (*this);
}
