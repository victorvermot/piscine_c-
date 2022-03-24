#include "Fixed.hpp"

int main(void)
{
	Fixed a(25);
	Fixed const b( Fixed( 5.58f ) + Fixed( 2.23f ) );

	std::cout << "Le a vaut : "<<  a << std::endl;
	std::cout << "Le b vaut : " << b << std::endl;
	std::cout << "Si je fais ++a : " << ++a << std::endl;
	std::cout << "Le a vaut : " << a << std::endl;
	std::cout << "Si je fais a++ : " << a++ << std::endl;
	std::cout << "Le a vaut : " << a << std::endl;

	std::cout << "Si je fais --a : " << --a << std::endl;
	std::cout << "Le a vaut : " << a << std::endl;
	std::cout << "Si je fais a-- : " << a-- << std::endl;
	std::cout << "Le a vaut : " << a << std::endl;

	std::cout << "a + b vaut : " << a + b << std::endl;
	std::cout << "a - b vaut : " << a - b << std::endl;
	std::cout << "a * b vaut : " << a * b << std::endl;
	std::cout << "a / b vaut : " << a / b << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;

	std::cout << "Le max entre les deux est : " << Fixed::max( a, b ) << std::endl;
	std::cout << "Le min entre les deux est : " << Fixed::min( a, b ) << std::endl;
	return (0);
}
