#include "iter.hpp"

int main(void)
{
	int tab_int[] = {11, 2, 3, 9, 4};
	char tab_char[] = {'+', 'c', '?','\\', 'z'};
	float tab_float[] = {11.23f, 2.25f, 3.31f, 9.89f, 4.12f};
	std::cout << BOLD "A tab of ints : " UNBOLD << std::endl;
	iter(tab_int, 5, &double_num);
	std::cout << BOLD "A tab of chars : " UNBOLD << std::endl;
	iter(tab_char, 5, &double_num);
	std::cout << BOLD "A tab of floats :" UNBOLD << std::endl;
	iter(tab_float, 5, &double_num);
}
