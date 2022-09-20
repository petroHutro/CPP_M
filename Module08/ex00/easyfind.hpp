#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
int	easyfind(T container, int number)
{
	for (size_t i = 0; i < container.size(); i++)
	{
		typename T::iterator	result = std::find(container.begin(), container.end(), number);
		if (result != container.end())
			return (*result);
	}
	throw std::runtime_error("Number is not found.");
}
