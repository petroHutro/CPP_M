#pragma once

# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	void	set_name( std::string name );
};

Zombie	*zombieHorde( int N, std::string name );
