#include "iter.hpp"

int main(void)
{
	int tab_int[] = {11, 2, 3, 9, 4};
	char tab_char[] = {'+', 'c', '?','\\', 'z'};
	float tab_float[] = {11.23f, 2.25f, 3.31f, 9.89f, 4.12f};

	std::cout << "Tab of int before iter function " << std::endl;
	print_tab(tab_int);
	iter(tab_int, 5, &double_num);
	std::cout << "Tab of int after iter function " << std::endl;
	print_tab(tab_int);

	std::cout << "Tab of char before iter function " << std::endl;
	print_tab(tab_char);
	iter(tab_char, 5, &double_num);
	std::cout << "Tab of char after iter function " << std::endl;
	std::cout << "Chars too big won't be displayed " << std::endl;
	print_tab(tab_char);

	std::cout << "Tab of float before iter function " << std::endl;
	print_tab(tab_float);
	iter(tab_float, 5, &double_num);
	std::cout << "Tab of float after iter function " << std::endl;
	print_tab(tab_float);
}
