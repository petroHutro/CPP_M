#pragma once

# include "Weapon.hpp"

class HumanA
{
private:
	std::string			name;
	const Weapon		&weapon;

public:
	HumanA( std::string name, const Weapon &weapon );
	~HumanA( void );

	void	attack( void );
};
