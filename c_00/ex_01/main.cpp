#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"


int main(void)
{
	std::string	option;
	PhoneBook	phonebook;
	int			i;

	i = 0;
	phonebook.display_options();
	while (std::cin >> option)
	{
		if (option == "EXIT")
			return (0);
		else if (option == "ADD")
			phonebook.contacts[i++].get_infos();
		else if (option == "SEARCH")
			phonebook.contacts->search(phonebook.contacts);
		else
			std::cout << "Please enter a valid option" << std::endl << "- ";
		if (i == 8)
			i = 0;
		phonebook.display_options();
	}
	return (0);
}
