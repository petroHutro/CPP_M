#include <iostream>
#include "iter.hpp"

template <typename T>
void	funk_1(T &a)
{
	if (a % 2 == 0)
		std::cout << "Y" << std::endl;
	else
		std::cout << "N" << std::endl;
}

template <typename T>
void	funk_print(T &a)
{
	std::cout << a << " ";
}

int	main()
{
	int	mass[10];

	for (size_t i = 0; i < 10; i++)
	{
		mass[i] = i;
	}
	iter(mass, 10, &funk_print);
	std::cout << std::endl;
	iter(mass, 10, &funk_1);

	std::string	mass_s[] = {"123", "456", "789", "abc", "ABC"};
	iter(mass_s, sizeof(mass_s)/sizeof(mass_s[0]), &funk_print);
}
