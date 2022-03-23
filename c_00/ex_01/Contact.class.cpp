#include "Contact.class.hpp"
#include <string.h>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called." << std::endl;
	return ;
}

int	Contact::_contact_num = 0;

char	*Contact::_ft_whitespace(std::string buffer)
{
	char *ret;
	int	 i;
	int	 j;

	ret = new char(buffer.size());
	i = 0;
	j = 0;
	while (buffer[i])
	{
		if (!isspace(buffer[i]))
			ret[j++] = buffer[i];
		i++;
	}
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
	std::cout << "\e[1mFirst name : \e[0m"<< contacts._first_name << std::endl
	<< "\e[1mLast name : \e[0m" << contacts._last_name << std::endl
	<< "\e[1mNickname : \e[0m" << contacts._nickname << std::endl
	<< "\e[1mPhone Number : \e[0m" << contacts._phone_number << std::endl
	<< "\e[1mSecret : \e[0m" <<contacts._secret << std::endl;
}

int	Contact::_ft_strlen(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void Contact::_format_strings(std::string str)
{
	int	len;
	int	i;

	i = 0;
	len = _ft_strlen(str);
	while (i + len <= 10)
	{
		std::cout << ' ';
		i++;
	}
	if (len <= 10)
		std::cout << str << '|';
	else
	{
		i = 0;
		while (i < 10)
			std::cout << str[i++];
		std::cout << '.' << '|';
	}
}

void Contact::search(Contact contacts[8])
{
	int	i;
	int	choice;

	i = -1;
	choice = 0;
	if (!_contact_num)
	{
		std::cout << "Please add an entry first.\n";
		return ;
	}
	while (++i < _contact_num)
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
