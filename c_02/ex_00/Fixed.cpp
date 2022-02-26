#include "Fixed.hpp"

Fixed::Fixed(void)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(const Fixed& other)
{

}


int Fixed::getRawBits(void) const
{
	return (_fixedValue);
}

int Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

// Operator overload:
// Reassign the behaviour of the '=' operator in case of an assignment between two instances of the Fixed class
// This sould be done when our class countains pointers,
// to avoid SHALLOW COPY (meaning that in the case of pointers, only their adress is copied which means
// if we modify it in one class, it will modify it in the copy aswell)

Fixed& Fixed::operator=(const Fixed& rhs)
{
	if (this != &rhs)
	{
		_fixedValue = rhs.getRawBits();
	}
	return (*this);
}
