#include "MutantStack.hpp"
#include <vector>

int main()
{
//	std::vector<int> values = {1, 3, 2, 5};
//	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
//		std::cout << *it << std::endl;
	MutantStack<int> test;
	test.push(43);
	test.push(6);
	test.push(12);
	typedef typename MutantStack<int>::iterator iterator;
	for (iterator it = test.begin(); it != test.end(); it++)
		std::cout << *it << std::endl;
}