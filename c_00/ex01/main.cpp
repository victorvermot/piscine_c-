#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

std::string	ft_to_upper(std::string str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int main(void)
{
	std::string	option;
	PhoneBook	phonebook;
	int			i;

	i = 0;
	phonebook.display_options();
	while (std::cin >> option)
	{
		if (std::cin.eof())
			return (0);
		std::cin.clear();
		std::cin.ignore(256,'\n');
		option = ft_to_upper(option);
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
		if (std::cin.eof())
			return (0);
		phonebook.display_options();
	}
	return (0);
}
