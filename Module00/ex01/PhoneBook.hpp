#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int		size;

	void	print_val(std::string str);
	void	list_contacts();

public:

	PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
	void	auto_p(void);//dell
};

#endif
