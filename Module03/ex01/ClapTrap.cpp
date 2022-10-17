#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), hit(10), energy(10), damage(0)
{
	std::cout << name << " appeared on the battlefield." << std::endl;
	std::cout << name << "(h:" << hit << "e:" << energy << ")" << std::endl;
}

ClapTrap::ClapTrap( void ) : name("No name"), hit(10), energy(10), damage(0)
{
	std::cout << name << " appeared on the battlefield." << std::endl;
	std::cout << name << "(h:" << hit << "e:" << energy << ")" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap )
{
	this->operator=(claptrap);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hit = claptrap.hit;
	this->energy = claptrap.energy;
	this->damage = claptrap.damage;

	return (*this);
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
	std::cout << "ClapTrap " << name << " -" << amount << " hit points" << std::endl;
	hit -= amount;
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
