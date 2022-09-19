#include "Data.hpp"

int	main()
{
	Data	data;

	data.n = 777;

	std::cout << "b:" << &data << std::endl;

	uintptr_t	u = data.serialize(&data);

	std::cout << "s:" << u << std::endl;

	std::cout << "d:" << data.deserialize(u) << std::endl;
}
