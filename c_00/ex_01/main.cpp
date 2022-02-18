#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"


int main(void)
{
	std::string	option;
	PhoneBook	phonebook;
	Contact 	contacts[8];
	int			i;

	i = 0;
	phonebook.display_options();
	while (std::cin >> option)
	{
		if (option == "EXIT")
			return (0);
		else if (option == "ADD")
			contacts[i++].get_infos();
		else if (option == "SEARCH")
			return (0);
		else
			std::cout << "Please enter a valid option" << std::endl << "- ";
		phonebook.display_options();
	}
	return (0);
}
