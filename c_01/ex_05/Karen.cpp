#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

std::string	Karen::_ft_to_upper(std::string str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}


void Karen::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
	<< std::endl;
}

void Karen::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
	<< std::endl;
}

void Karen::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Karen::_error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
	<< std::endl;
}

void Karen::complain(std::string level)
{
	std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	my_function f[] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	i = -1;
	level = _ft_to_upper(level);
	while (++i < 4)
	{
		if (names[i] == level)
			(this->*f[i])();
	}
}
