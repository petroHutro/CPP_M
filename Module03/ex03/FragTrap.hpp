#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;

public:
	FragTrap( std::string name );
	~FragTrap();

	void	highFivesGuys( void );
};

#endif