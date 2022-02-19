#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

int	Contact::_contact_num = 0;

void	Contact::get_infos()
{
	std::cout << "Please enter first name : ";
	std::cin >> this->first_name;
	std::cout << "Please enter last name : ";
	std::cin >> this->last_name;
	std::cout << "Please enter nickname : ";
	std::cin >> this->nickname;
	std::cout << "Please enter phone number : ";
	std::cin >> this->phone_number;
	std::cout << "Please enter secret : ";
	std::cin >> this->secret;
	std::cout << "The contact was succesfully created !" << std::endl;
	if (_contact_num < 8)
		_contact_num++;
}

void Contact::print_details(Contact contacts)
{
	std::cout << contacts.first_name << std::endl
	<< contacts.last_name << std::endl
	<< contacts.nickname << std::endl
	<< contacts.phone_number << std::endl
	<< contacts.secret << std::endl;
}

void Contact::search(Contact contacts[8])
{
	int	i;
	int	choice;

	i = -1;
	while (++i < _contact_num)
	{
		std::cout << i + 1 << "|"
		<< contacts[i].first_name << "|"
		<< contacts[i].last_name << "|"
		<< contacts[i].nickname << "|"
		<< std::endl;
	}
	std::cout << "Chose an entry to get all its details : ";
	std::cin >> choice;
	if (!choice || choice > _contact_num)
		std::cout << "Invalid index";
	else
		print_details(contacts[choice - 1]);
}
