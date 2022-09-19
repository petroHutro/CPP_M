#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	// std::cout << "Constructor Cure" << std::endl;
}

// Cure::Cure( const Cure &cure ) : AMateria(cure)
// {
// 	std::cout << "Constructor Cure" << std::endl;
// }

Cure::~Cure( void )
{
	// std::cout << "Destructor Cure" << std::endl;
}

AMateria	*Cure::clone( void ) const
{
	return new Cure();
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
