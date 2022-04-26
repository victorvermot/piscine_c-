#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <iostream>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() {}
	MutantStack<T>(const MutantStack<T>& src)
	{
		std::cout << "Copy constructor called." << std::endl;
		*this = src;
	}
	MutantStack<T>& operator=(const MutantStack<T>& rhs)
	{
		std::cout << "Equal operator overload called." << std::endl;
		this->c = rhs.c;
		return *this;
	}
	~MutantStack<T>() {}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif