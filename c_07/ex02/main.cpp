#include "Array.hpp"

int main(void)
{
	int	tab[] = {5, 6, 9, 1};
	Array<int> a(5);

	try
	{
		a[5]= 32;
		std::cout << a[5] << std::endl;
	}
	catch (const Array<int>::InvalidIndex& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << a[23] << std::endl;
	}
	catch (const Array<int>::InvalidIndex& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
