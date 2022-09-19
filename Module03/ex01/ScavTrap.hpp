#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;

public:
	ScavTrap( std::string name );
	~ScavTrap();

	void	guardGate();
	void	attack( const std::string& target );
};

#endif