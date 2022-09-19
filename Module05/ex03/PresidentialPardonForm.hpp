#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
private:
	std::string	target;

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string name, std::string target );
	PresidentialPardonForm( const PresidentialPardonForm &copy );
	PresidentialPardonForm	&operator=( const PresidentialPardonForm &copy );
	~PresidentialPardonForm( void );

	void	execute(Bureaucrat const & executor) const;
};
