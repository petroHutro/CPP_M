#pragma once

# include "Weapon.hpp"

class HumanB
{
private:
	const Weapon		*weapon;
	std::string			name;

public:
	HumanB( std::string name );
	~HumanB( void);

	void	attack( void );
	void	setWeapon( const Weapon &weapon );
};
