#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);
	Fixed& operator = (const Fixed& rhs);
	int getRawBits(void) const;
	int setRawBits(int const raw);

private:
	int _fixedValue;
	static const int _bitsNum;
};

#endif