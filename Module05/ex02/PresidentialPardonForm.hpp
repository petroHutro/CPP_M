#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;

public:
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );

	void	execute(Bureaucrat const & executor) const;
};
 