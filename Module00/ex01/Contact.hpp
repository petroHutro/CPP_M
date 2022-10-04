#pragma once

#include <iostream>
#include <string>

class Contact
{
private:
	// ﬁrst name, last name, nickname, phone number and darkest secret.
	std::string person[5];
	std::string fields[5];

public:

	Contact();
	void	set_info(std::string info, int i);
	std::string	get_fields(int i);
	std::string	get_person(int i);
};
