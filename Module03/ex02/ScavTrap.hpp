#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( std::string name );
	ScavTrap( void );
	ScavTrap( const ScavTrap &copy );
	~ScavTrap( void );

	ScavTrap &operator = (const ScavTrap &copy);

	void	guardGate();
	void	attack( const std::string& target );
};
