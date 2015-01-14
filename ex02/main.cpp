#include "Array.hpp"
#include <iostream>

int		main()
{
	Array<int>	tab(2);
	tab[0] = 1;
	tab[2] = 2;
	Array<int>	t(tab);
	Array<int>	t2 = tab;

	std::cout << tab[0] << " " << tab[1] << std::endl;
	std::cout << t[0] << " " << t[1] << std::endl;
	std::cout << t2[0] << " " << t2[1] << std::endl;
	return (0);
}
