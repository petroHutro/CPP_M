#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;

public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();

	class GradeTooHighException : std::exception
	{
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : std::exception
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
