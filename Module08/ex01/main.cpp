#include <iostream>
#include <iterator>
#include <vector>
#include "Span.hpp"

int	main()
{
	std::vector<int> a;

	try
	{
		// Span sp = Span(5);
		// sp.addNumber(4);
		// sp.addNumber(14);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(3);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
		// sp.addNumber(11);
		Span sp = Span(10000);
		srand(time(NULL));
		for(int i = 0; i < 10000; i++)
			sp.addNumber(rand() % 1000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
