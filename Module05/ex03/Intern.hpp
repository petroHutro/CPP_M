#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern( void );
	Intern( Intern const &copy );
	Intern	&operator=( Intern const &copy );
	~Intern( void );

	class FormNotKnownException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	Form*	makeForm( std::string name, std::string target );
};

#endif
