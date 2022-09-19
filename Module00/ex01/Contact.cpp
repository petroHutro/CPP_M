#include "Contact.hpp"

Contact::Contact()
{
	fields[0] = "First name";
	fields[1] = "Last name";
	fields[2] = "Nickname";
	fields[3] = "Phone number";
	fields[4] = "Secret";
}

void	Contact::set_info(std::string info, int i)
{
	person[i] = info;
}

std::string	Contact::get_fields(int i)
{
	return (fields[i]);
}

std::string	Contact::get_person(int i)
{
	return (person[i]);
}