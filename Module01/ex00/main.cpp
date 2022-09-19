#include "Zombie.hpp"

int	main()
{
	randomChump("Tom");

	Zombie	*jack;
	jack = newZombie("jack");
	jack->announce();
	delete jack;

	Zombie	bob("bob");
	bob.announce();
}