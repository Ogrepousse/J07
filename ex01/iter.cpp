#include <iostream>
#include <string>

typedef void (*f)(int&);

template<typename T, typename F>
void	iter(T * tab, int len, F lol)
{
	for (int i = 0; i < len; i++)
	{
		lol(tab[i]);
	}
}

template<typename T>
void	add(T & a)
{
	a++;
}

int		main()
{
	int tab[] = {1, 2, 3, 4};
	iter<int, f>(tab, 4, &add);
	for (int i = 0; i < 4; i++)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}
