#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat(  const Bureaucrat &copy );
	Bureaucrat	&operator=( const Bureaucrat &copy );
	~Bureaucrat( void );

	class GradeTooHighException : public std::exception
	{
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char	*what() const throw();
	};

	std::string		getName( void ) const;
	int				getGrade( void ) const;
	void			incrementGrade( void );
	void			decrementGrade( void );
	void			signForm( Form &form ) const;
	void			executeForm(Form const & form);
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
