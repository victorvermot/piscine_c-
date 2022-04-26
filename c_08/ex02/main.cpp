#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The entry on top of the stack is: "<< mstack.top() << std::endl;
	std::cout << "The entry : " << mstack.top() << " was removed" << std::endl;
	mstack.pop();
	std::cout << "The size of the stack is: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> copiedStack(mstack);
	std::cout << copiedStack.top() << std::endl;
	copiedStack.pop();
	std::cout << "Top of original stack: " << mstack.top() << std::endl;
	std::cout << "Top of copied stack: " <<copiedStack.top() << std::endl;
	std::stack<int> s(mstack);

	std::list<int> testList;
	testList.push_front(5);
	testList.push_front(17);
	std::cout << "The entry on top of the list is: "<< testList.front() << std::endl;
	std::cout << "The entry : " << testList.front() << " was removed" << std::endl;
	testList.pop_front();
	std::cout << "The size of the list is: " << testList.size() << std::endl;
	testList.push_back(3);
	testList.push_back(5);
	testList.push_back(737);
	testList.push_back(0);
	for (std::list<int>::iterator it = testList.begin(); it != testList.end(); it++)
		std::cout << *it << std::endl;
	std::list<int> copiedList(testList);
}