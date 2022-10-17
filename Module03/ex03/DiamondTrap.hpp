#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;

public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap &copy );

	DiamondTrap	&operator = ( const DiamondTrap &copy );

	void	whoAmI( void );
	void	attack(const std::string& target);

	~DiamondTrap( void );
};
