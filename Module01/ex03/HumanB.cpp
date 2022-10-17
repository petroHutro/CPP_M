#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB( void)
{}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}
