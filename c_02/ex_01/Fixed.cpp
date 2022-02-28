#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int x) : _fixedValue(x)
{
	std::cout << "Default constructor called" << std::endl;
	// _fixedValue = toFloat();
	return ;
}

Fixed::Fixed(const float x) : _fixedValue(x)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = toInt();
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
	return (_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

int Fixed::toInt( void ) const
{
	return (_fixedValue * (1 << _bitsNum));
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedValue / (float)(1 << _bitsNum));
}

// Operator overload:
// Reassign the behaviour of the '=' operator in case of an assignment between two instances of the Fixed class
// This sould be done when our class countains pointers,
// to avoid SHALLOW COPY (meaning that in the case of pointers, only their adress is copied which means
// if we modify it in one class, it will modify it in the copy aswell)

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment overload called" << std::endl;
	if (this != &rhs)
	{
		this->_fixedValue = rhs.getRawBits();
	}
	return (*this);
}

std::ostream& operator << (std::ostream& os, Fixed const & rhs)
{
	os << rhs.getRawBits();
	return (os);
}
