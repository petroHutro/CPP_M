#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), hit(10), energy(10), damage(0)
{
	std::cout << name << " appeared on the battlefield." << std::endl;
	std::cout << name << "(h:" << hit << "e:" << energy << ")" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{	
	if (hit < 1 || energy < 1)
		return ;
	std::cout << "ClapTrap "<< name << " attacks " << target 
				<< ", causing " << damage << " points of damage!" << std::endl;
	energy -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (hit < 1)
		return ;
	std::cout << "ClapTrap "<< name << " -" << amount << " hit points" << std::endl;
	hit -=amount;
	std::cout << name << "(h:" << hit << "e:" << energy << ")" << std::endl;
	
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (hit < 1 || energy < 1)
		return ;
	std::cout << "ClapTrap "<< name << " +" << amount << " hit points." << std::endl;
	energy -= 1;
	hit += amount;
	std::cout << name << "(h:" << hit << "e:" << energy << ")" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " DIED." << std::endl;
}