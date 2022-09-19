#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{
	this->type = "";
}

std::string	*Weapon::getType(void)
{
	return (&type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
