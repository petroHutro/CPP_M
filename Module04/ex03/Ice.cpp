#include "Ice.hpp"


Ice::Ice( void ) : AMateria("ice")
{
	// std::cout << "Constructor Ice" << std::endl;
}

Ice::~Ice( void )
{
	// std::cout << "Destructor Ice" << std::endl;
}

AMateria	*Ice::clone( void ) const
{
	return new Ice();
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
