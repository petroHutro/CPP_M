#pragma once

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon( std::string type );
	Weapon( void );
	~Weapon( void );

	const std::string	&getType( void ) const;
	void		setType( std::string new_type);
};
