#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main()
{
	// std::vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
	std::vector<int> a(10);
	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		std::cout << easyfind(a, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
