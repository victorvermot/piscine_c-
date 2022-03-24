#include "Harl.hpp"


void    pick_case(int level, Harl instance)
{
	switch (level)
	{
	case DEBUG:
		instance.complain("Debug");
	case INFO:
		instance.complain("Info");
	case WARNING:
		instance.complain("Warning");
	case ERROR:
		instance.complain("Error");
		break ;
	default :
			" << std::endl;
	}
}

int main(int argc, char **argv)
{
	int		level;
	Harl	instance;

	if (argc != 2)
	{
		std::cout << "Harl, I already told you you can only complain about one thing at a time"
		<< std::endl;
		return (1);
	}
	level = instance.get_filter_lvl(argv[1]);
	pick_case(level,instance);
}
