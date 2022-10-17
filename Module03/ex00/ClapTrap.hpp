#pragma once

# include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;

public:
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& claptrap );
	ClapTrap( void );

	ClapTrap& operator=(const ClapTrap& claptrap);

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	~ClapTrap( void );
};
