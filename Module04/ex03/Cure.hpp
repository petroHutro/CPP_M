#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Cure( const Cure &cure );
	Cure( void );
	~Cure( void );

	AMateria	*clone( void ) const;
	virtual void		use( ICharacter &target );
};

#endif
