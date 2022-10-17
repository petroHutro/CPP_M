#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created!." << std::endl;
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap " << name << " created!." << std::endl;
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy ) : ClapTrap(copy)
{}

FragTrap &FragTrap::operator=( const FragTrap &copy )
{
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " ﬁves request." << std::endl;
}
