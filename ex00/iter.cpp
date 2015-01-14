#include <iostream>
#include <string>

template<typename T>
void	swap(T & a, T & b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min(const T & a, const T & b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T	max(const T & a, const T & b)
{
	if (a > b)
		return a;
	else
		return b;
}

int		main()
{
	int	a = 1;
	int b = 2;
	float c = 0.1;
	float d = 0.2;

	std::cout << a << " " << b << std::endl;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << c<< " " << d << std::endl;
	swap(c, d);
	std::cout << c << " " << d << std::endl;
	std::cout << min(a, b) << " " << min(c, d) << std::endl;
	std::cout << max(a, b) << " " << max(c, d) << std::endl;

	a = 2;
	b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string e = "chaine1";
	std::string f = "chaine2";

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;


	return (0);
}
