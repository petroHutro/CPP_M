#include "Form.hpp"

Form::Form( std::string name, int grade_sing, int grade_execute )
				: Name(name), b_Signed(false), Grade_sing(grade_sing), Grade_execute(grade_execute)
{
	if (grade_sing > 150 || grade_execute > 150 )
		throw GradeTooLowException();
	if (grade_sing < 0 || grade_execute < 0 )
		thow GradeTooHighException();
}

Form::Form( void ) : Name("No"), b_Signed(false), Grade_sing(1), Grade_execute(1)
{}

Form::~Form( void )
{

}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

const char* Form::SignedException::what() const throw()
{
	return ("Signed.");
}

std::string	Form::getName( void ) const
{
	return (this->Name);
}

bool	Form::getSignet( void ) const
{
	return (this->b_Signed);
}

int	Form::getGrade_sing( void ) const
{
	return (this->Grade_sing);
}

int	Form::getGrade_execute( void ) const
{
	return (this->Grade_execute);
}

void	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if (b_Signed)
		throw SignedException();
	else if (this->Grade_sing >= bureaucrat.getGrade())
		this->b_Signed = true;
	else
		throw GradeTooLowException();
}

std::ostream	&operator << (std::ostream &out, const Form &form)
{
	out << form.getName() << " " << form.getSignet() << " " << form.getGrade_sing() << " " << form.getGrade_execute() << ".";
	return (out);
}
