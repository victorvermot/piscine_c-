#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

std::string	Harl::_ft_to_upper(std::string str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}


void Harl::_debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
	<< std::endl << std::endl;
}

void Harl::_info( void )
{
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
	<< std::endl << std::endl;
}

void Harl::_warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl << std::endl;
}

void Harl::_error( void )
{
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable ! I want to speak to the manager now."
	<< std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	level = _ft_to_upper(level);
	if (level == "DEBUG")
		_debug();
	else if (level == "INFO")
		_info();
	else if (level == "WARNING")
		_warning();
	else if (level == "ERROR")
		_error();
}

int Harl::get_filter_lvl(std::string level)
{
	level = _ft_to_upper(level);
	if (level == "DEBUG")
		return (DEBUG);
	else if (level == "INFO")
		return (INFO);
	else if (level == "WARNING")
		return (WARNING);
	else if (level == "ERROR")
		return (ERROR);
	return (0);
}
