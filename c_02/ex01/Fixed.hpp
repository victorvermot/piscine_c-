#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
public:

	Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(const Fixed& other);
	~Fixed(void);
	Fixed& operator = (const Fixed& rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	static int ft_pow(const int num);

private:
	int	_fixedValue;
	static const int _bitsNum = 8;
};

std::ostream& operator << (std::ostream& os, Fixed const & rhs);

#endif