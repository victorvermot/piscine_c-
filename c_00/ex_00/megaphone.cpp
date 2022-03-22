#include <iostream>

char	*ft_to_upper(char *str)
{
	int i;

	i = -1;
	while (str[++i])
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
			argv[i] = ft_to_upper(argv[i]);
			std::cout << argv[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
