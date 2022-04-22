#include "conversion.hpp"

int main(void)
{
	Data		test;
	Data		*final;
	uintptr_t	ret;

	std::cout << "Original value " << &test << std::endl;
	test.trash = 56;
	std::cout << "Original value of the int: " << test.trash << std::endl;
	ret = serialize(&test);
	std::cout << "Le unintptr_t vaut: " << &ret << std::endl;
	final = deserialize(ret);
	std::cout << "La valeur restored vaut: " << final << std::endl;
	std::cout << "La valeur du int stored: " << final->trash << std::endl;
}
