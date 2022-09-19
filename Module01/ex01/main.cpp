#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*horde;
	int		n = 5;

	if (argc != 2)
		return (1);
	horde = zombieHorde(n, argv[1]);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
