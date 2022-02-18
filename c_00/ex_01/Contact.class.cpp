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
	contact_num++;
}
