#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Jack");
	
	a.takeDamage(3);
	a.attack("Bob");
	a.beRepaired(3);
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.takeDamage(2);
	a.takeDamage(4);
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.takeDamage(6);
	a.takeDamage(2);
	a.beRepaired(3);
	a.beRepaired(3);
}