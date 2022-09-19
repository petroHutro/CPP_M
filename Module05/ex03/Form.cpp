#include "Form.hpp"

Form::Form( std::string name, int grade_sing, int grade_execute )
	: Name(name), b_Signed(false), Grade_sing(grade_sing), Grade_execute(grade_execute)
{
	if (grade_sing > 150 || grade_execute > 150 )
		throw GradeTooLowException();
	if (grade_sing < 0 || grade_execute < 0 )
		throw GradeTooHighException();
}

Form::Form( void )
	: Name("No name"), b_Signed(false), Grade_sing(1), Grade_execute(1)
{}

Form::Form( const Form &copy )
	: Name(copy.Name), b_Signed(copy.b_Signed), Grade_sing(copy.Grade_sing), Grade_execute(copy.Grade_execute)
{}

Form	&Form::operator=( const Form &copy )
{
	b_Signed = copy.b_Signed;
	return (*this);
}

Form::~Form( void )
{}

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
	return ("Signed not.");
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
		throw Form::SignedException();
	else if (this->Grade_sing >= bureaucrat.getGrade())
		this->b_Signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator << (std::ostream &out, const Form &form)
{
	out << form.getName() << " " << form.getSignet() << " " << form.getGrade_sing() 
							<< " " << form.getGrade_execute() << ".";
	return (out);
}
