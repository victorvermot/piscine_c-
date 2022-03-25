#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 10.0f);
	Point c(25.0f, 0.0f);
	Point p(1.0f, 1.50f);
	Point p1(0.0f, 0.0f);
	Point p2(1.0f, 0.50f);

	std::cout << "Is it in triangle : " << bsp(a, b, c, p) << std::endl;
	std::cout << "Is it in triangle : " << bsp(a, b, c, p1) << std::endl;
	std::cout << "Is it in triangle : " << bsp(a, b, c, p2) << std::endl;
}
