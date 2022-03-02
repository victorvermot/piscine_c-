#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	// _fixedValue = toFloat();
	_fixedValue = x << _bitsNum;
	std::cout << "La fixed value : " << _fixedValue << std::endl;
	return ;
}

Fixed::Fixed(const float x)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(std::roundf(x * ft_pow(2)));
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
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
	return _fixedValue >> _bitsNum;
}

float Fixed::toFloat( void ) const
{
	return (float)(_fixedValue)/(ft_pow(2));
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

int Fixed::ft_pow(const int num)
{
	int	ret;
	int	pow;

	pow = _bitsNum;
	ret = num;
	while (pow - 1)
	{
		ret *= num;
		pow--;
	}
	return (ret);
}
