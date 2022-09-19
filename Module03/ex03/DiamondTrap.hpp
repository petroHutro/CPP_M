#ifndef DIAMODTRAP_HPP
# define DIAMODTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, ScavTrap
{
private:
	std::string	name;

public:
	DiamondTrap( std::string name );
	~DiamondTrap();

	void	whoAmI();
};

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name), ScavTrap(name)
{
}

DiamondTrap::~DiamondTrap()
{
}


#endif