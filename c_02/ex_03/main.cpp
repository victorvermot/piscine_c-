#include "Point.hpp"

int main(void)
{
	Point a(1.1f, 5.6f);
	Point b;

	std::cout << b.getX() << std::endl << b.getY() << std::endl
	<< "Adress of 'b' object " << &b << std::endl;
	b = a;
	std::cout << a.getX() << std::endl << a.getY() << std::endl
	<< "Adress of 'a' object " << &a << std::endl
	<< "Adress of 'b' object " << &b << std::endl;
	std::cout << b.getX() << std::endl << b.getY() << std::endl;
}
