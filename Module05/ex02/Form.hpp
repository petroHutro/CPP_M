#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	Name;
	bool				b_Signed;
	int const			Grade_sing;
	int const			Grade_execute;


public:
	Form( std::string name, int grade_sing, int grade_execute );
	Form( void );
	~Form( void );

	class GradeTooHighException : std::exception
	{
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : std::exception
	{
		virtual const char	*what() const throw();
	};

	class SignedException : std::exception
	{
		virtual const char	*what() const throw();
	};

	std::string	getName( void ) const;
	bool		getSignet( void ) const;
	int			getGrade_sing( void ) const;
	int			getGrade_execute( void ) const;
	void		beSigned( const Bureaucrat &bureaucrat );

	virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator << (std::ostream &out, const Form &form);

#endif
