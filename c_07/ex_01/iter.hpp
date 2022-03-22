#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
T   double_num(T num)
{
	num *= 2;
	return (num);
}

template <typename T>
void    iter(T tab[], int size, T (*f)(T))
{
	int i;

	i = 0;
	while (i < size)
	{
		std::cout << tab[i] << "    ";
		tab[i] = f(tab[i]);
		std::cout << "Doubled : " << tab[i] << std::endl;
		i++;
	}
}

#endif