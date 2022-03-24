#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
	return ;
}

Fixed::Fixed(const int x)
{
	_fixedValue = x << _bitsNum;
	return ;
}

Fixed::Fixed(const float x)
{
	setRawBits(std::roundf(x * ft_pow(2)));
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
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

float Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a.toFloat());
	else
		return (b.toFloat());
}

float Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a.toFloat());
	else
		return (b.toFloat());
}

float Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a.toFloat());
	else
		return (b.toFloat());
}

float Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a.toFloat());
	else
		return (b.toFloat());
}
