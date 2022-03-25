#include <iostream>

std::string	ft_to_upper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			std::string str(argv[i]);
			std::cout << ft_to_upper(str);
			if (i + 1 != argc)
				std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
