#include "Array.hpp"
#include <iostream>

int		main()
{
	Array<int>	tab(2);
	tab[0] = 1;
	tab[1] = 2;
	Array<int>	t(tab);
	Array<int>	t2 = tab;

	std::cout << tab[0] << " " << tab[1] << std::endl;
	std::cout << t[0] << " " << t[1] << std::endl;
	std::cout << t2[0] << " " << t2[1] << std::endl;


	srandom(time(NULL));

	Array<int> array(10);
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = random() % 42 + 1;

	Array<int> array2 = array;
	array2[9] = 666;

	std::cout << "array: ";
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << ' ' << array[i];
	std::cout << std::endl;

	std::cout << "array2:";
	for (unsigned int i = 0; i < array2.size(); i++)
		std::cout << ' ' << array2[i];
	std::cout << std::endl;

	try
	{
		array[42] = -1;
	}
	catch (std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	return 0;

	return (0);
}
