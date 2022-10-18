#pragma once

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal( std::string type = "No" );
	Animal( const Animal &copy );

	Animal& operator=( const Animal &copy );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

	virtual	~Animal( void );
};
