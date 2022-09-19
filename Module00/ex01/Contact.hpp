#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "library.hpp"

class Contact
{
private:
	// ﬁrst name, last name, nickname, phone number, anddarkest secret.
	std::string person[5];
	std::string fields[5];

public:

	Contact();
	void	set_info(std::string info, int i);
	std::string	get_fields(int i);
	std::string	get_person(int i);
};

#endif
