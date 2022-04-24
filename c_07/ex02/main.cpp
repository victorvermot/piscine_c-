#include "Array.hpp"

int main(void)
{
	Array<int> a(5);

	try
	{
		a[0]= 1;
		a[1]= 2;
		a[2]= 3;
		a[3]= 4;
		a[4]= 5;
		Array<int> b(a);
		b[3] = 42;
		std::cout << a[3] << std::endl;
		std::cout << b[3] << std::endl;
	}
	catch (const Array<int>::InvalidIndex& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test printing an out of bound entry of the array" << std::endl;
		std::cout << a[23] << std::endl;
	}
	catch (const Array<int>::InvalidIndex& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
