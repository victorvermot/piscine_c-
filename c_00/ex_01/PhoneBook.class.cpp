#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called." << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

void    PhoneBook::display_options()
{
	std::cout << "Please enter one of the followings option" << std::endl
	<< " -ADD" << std::endl
	<< " -SEARCH" << std::endl
	<< " -EXIT" << std::endl
	<< "- ";
	return ;
}
