#include "Karen.hpp"


void    pick_case(int level, void(Karen::*f)(std::string), Karen instance)
{
	switch (level)
	{
	case DEBUG:
		(instance.*f)("Debug");
	case INFO:
		(instance.*f)("Info");
	case WARNING:
		(instance.*f)("Warning");
	case ERROR:
		(instance.*f)("Error");
		break ;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int argc, char **argv)
{
	void	(Karen::*f)(std::string);
	int		(Karen::*filter_lvl)(std::string);
	int		level;
	Karen	instance;

	if (argc != 2)
	{
		std::cout << "Karen, I already told you you can only complain about one thing at a time"
		<< std::endl;
		return (1);
	}
	f = &Karen::complain;
	filter_lvl = &Karen::get_filter_lvl;
	level = (instance.*filter_lvl)(argv[1]);
	pick_case(level, f, instance);
}
