#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
public:

	Fixed();
	Fixed(const Fixed& other);
	~Fixed(void);
	Fixed& operator = (const Fixed& rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixedValue;
	static const int _bitsNum = 8;
};

#endif