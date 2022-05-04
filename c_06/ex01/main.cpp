#include "conversion.hpp"

int main(void)
{
	Data		test;
	Data		*restored;
	int 		*head;
	uintptr_t	ret;

	test.trash = 56;
	test.num = 542;
	test.c = 'a';
	std::cout << "Original address " << &test << std::endl;
	std::cout << "Original value of the int: " << test.trash << std::endl;

	// Cast my struct into an unsigned int ptr
	ret = serialize(&test);

	// Can still access my elements with correct casts
	head = reinterpret_cast<int *>(ret);
	std::cout << "First data: " << *head << std::endl;
	head++;
	std::cout << "Second data: " << *head << std::endl;
	head++;
	std::cout << "Third data: " << *reinterpret_cast<char *>(head) << std::endl;

	// Restore the value
	std::cout << "Unintptr address: " << &ret << std::endl;
	restored = deserialize(ret);
	std::cout << "Restored address " << restored << std::endl;
	std::cout << "Restored value of the int: " << restored->trash << std::endl;
}
