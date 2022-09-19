#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string name, std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm &copy );
	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &copy );
	~ShrubberyCreationForm( void );

	void	execute(Bureaucrat const & executor) const;
};
