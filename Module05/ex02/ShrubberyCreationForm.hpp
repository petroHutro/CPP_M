#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string name, std::string target );
	~ShrubberyCreationForm( void );

	void	execute(Bureaucrat const & executor) const;
};
