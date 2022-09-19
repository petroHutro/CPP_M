#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : type(type)
{
}

AMateria::~AMateria( void )
{
}

std::string const	&AMateria::getType( void ) const
{
	return (this->type);
}

// void	AMateria::use( ICharacter &target )
// {

// }