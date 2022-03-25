#include "Contact.class.hpp"
#include <string.h>

Contact::Contact(void)
{
	// std::cout << "Basic constructor called." << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called." << std::endl;
	return ;
}

int	Contact::_contact_num = 0;

std::string	Contact::_ft_whitespace(std::string buffer)
{
	std::string ret;
	int	 i;
	int	 j;

	i = 0;
	j = 0;
	while (isspace(buffer[i]))
		i++;
	ret = buffer.substr(i, buffer.size());
	return (ret);
}

std::string	Contact::_get_lines(std::string msg)
{
	std::string	buffer;

	std::cout << msg;
	std::getline(std::cin, buffer, '\n');
	buffer = _ft_whitespace(buffer);
	while (buffer.empty())
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(buffer.size());
			return (buffer);
		}
		std::cout << "You must enter a valid string!"
		<< std::endl << "Try again : ";
		std::getline(std::cin, buffer, '\n');
	}
	return (buffer);
}

void	Contact::get_infos()
{
	if (_contact_num < 8)
		_contact_num++;
	this->_first_name = _get_lines( "Please enter first name : ");
	this->_last_name =  _get_lines( "Please enter last name : ");
	this->_nickname =  _get_lines( "Please enter nickname : ");
	this->_phone_number =  _get_lines( "Please enter phone number : ");
	this->_secret =  _get_lines( "Please enter secret : ");
	std::cout << "The contact was succesfully created !" << std::endl;
}

void Contact::_print_details(Contact contacts)
{
	std::cout << BOLD "First name : " UNBOLD<< contacts._first_name << std::endl
	<< BOLD "Last name : " UNBOLD << contacts._last_name << std::endl
	<< BOLD "Nickname : " UNBOLD << contacts._nickname << std::endl
	<< BOLD "Phone Number : " UNBOLD << contacts._phone_number << std::endl
	<< BOLD "Secret : " UNBOLD <<contacts._secret << std::endl;
}

void Contact::_format_strings(std::string str)
{
	int	len;

	len = str.length();
	for (int i = 0; i + len <= 10; i++)
		std::cout << ' ';
	if (len <= 10)
		std::cout << str << '|';
	else
	{
		for (int i = 0; i < 10; i++)
			std::cout << str[i];
		std::cout << '.' << '|';
	}
}

void Contact::search(Contact contacts[8])
{
	int	choice;

	choice = 0;
	if (!_contact_num)
	{
		std::cout << "Please add an entry first.\n";
		return ;
	}
	for (int i = 0; i < _contact_num; i++)
	{
		std::cout << "        " << i + 1 << "|";
		_format_strings(contacts[i]._first_name);
		_format_strings(contacts[i]._last_name);
		_format_strings(contacts[i]._nickname);
		std::cout << std::endl;
	}
	std::cout << "Chose an entry to get all its details : ";
	std::cin >> choice;
	while ((std::cin.fail() || !choice || choice > _contact_num))
	{
		if (std::cin.eof())
			return ;
        std::cout << "Invalid input : Try again : ";
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> choice;
    }
	_print_details(contacts[choice - 1]);
	std::cin.ignore(256, '\n');
	std::cin.clear();
}
