#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string	name ) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " left the factory." << std::endl;
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap " << name << " left the factory." << std::endl;
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " finished work." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{	
	if (hit < 1 || energy < 1)
		return ;
	std::cout << "ScavTrap "<< name << " attacks " << target 
				<< ", causing " << damage << " points of damage!" << std::endl;
	energy -= 1;
}

