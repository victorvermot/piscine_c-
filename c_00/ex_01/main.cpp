#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

void    display_options()
{
	std::cout << "Please enter one of the followings option" << std::endl
	<< " -ADD" << std::endl
	<< " -SEARCH" << std::endl
	<< " -EXIT" << std::endl;
}

int main(void)
{
	std::string    option;

	display_options();
	while (std::cin >> option)
	{
		if (option == "EXIT")
			return (0);
		else if (option == "ADD")
			return (0);
		else if (option == "SEARCH")
			return (0);
	}
}