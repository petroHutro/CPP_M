#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) 
	: ClapTrap(name + "_clap_name"), FragTrap(name + "_Frag"), ScavTrap(name + "_Scav"), name(name)
{
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
	FragTrap::hit = 100;
	ScavTrap::energy = 50;
	FragTrap::damage = 30;
}

DiamondTrap::DiamondTrap( void )
	: ClapTrap("No name_clap_name"), FragTrap("No name_Frag"), ScavTrap("No name_Scav"), name("No name")
{
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
	FragTrap::hit = 100;
	ScavTrap::energy = 50;
	FragTrap::damage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) 
	: ClapTrap(copy.name + "_clap_name"), FragTrap(copy.name + "_Frag"), ScavTrap(copy.name + "_Scav"), name(copy.name)
{
	FragTrap::hit = copy.FragTrap::hit;
	ScavTrap::energy = copy.ScavTrap::energy;
	FragTrap::damage = copy.FragTrap::damage;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &copy )
{
	this->name = copy.name;
	ClapTrap::operator=(copy);
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name " << this->name << ", ClapTrap " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
