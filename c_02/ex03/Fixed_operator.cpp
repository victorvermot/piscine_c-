#include "Fixed.hpp"

// Operator overload:
// Reassign the behaviour of the given operator in case of an assignment between two instances of the Fixed class
// This sould be done when our class countains pointers,
// to avoid SHALLOW COPY (meaning that in the case of pointers, only their adress is copied which means
// if we modify it in one class, it will modify it in the copy aswell)

Fixed Fixed::operator + (const Fixed& rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator - (const Fixed& rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator * (const Fixed& rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator / (const Fixed& rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator ++ ()
{
	Fixed temp;
    temp._fixedValue = ++this->_fixedValue;
    return (temp);
}

Fixed Fixed::operator ++ (int)
{
    Fixed temp;
    temp._fixedValue = this->_fixedValue++;
    return (temp);
}

Fixed Fixed::operator -- ()
{
    Fixed temp;
    temp._fixedValue = this->_fixedValue--;
    return (temp);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp;
    temp._fixedValue = --this->_fixedValue;
    return (temp);
}

Fixed& Fixed::operator = (const Fixed& rhs)
{
	if (this != &rhs)
	{
		this->_fixedValue = rhs.getRawBits();
	}
	return (*this);
}

bool Fixed::operator > (const Fixed& rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator < (const Fixed& rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator != (const Fixed& rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator == (const Fixed& rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

std::ostream& operator << (std::ostream& os, Fixed const & rhs)
{
	os << rhs.toFloat();
	return (os);
}
