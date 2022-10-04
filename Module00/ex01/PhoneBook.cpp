#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	size = 0;
}

void	PhoneBook::add_contact( void )
{
	size %= 8;
	for (int i = 0; i < 5; i+=0)
	{
		std::string	temp;
		std::cout << contact[size].get_fields(i) << ":";
		std::getline(std::cin, temp);
		if (temp.empty())
			std::cout << "no valid" << std::endl;
		else
		{
			contact[size].set_info(temp, i);
			i++;
		}
	}
	size++;
}

// void	PhoneBook::auto_p( void )
// {
// 	std::string	temp[5];

// 	size = 8;
// 	temp[0] = "12345678912";
// 	temp[1] = "987654321";
// 	temp[2] = "1234567890";
// 	temp[3] = "44444";
// 	temp[4] = "55555";

// 	for (int i = 0; i < size; i++)
// 		for (int j = 0; j < 5; j++)
// 			contact[i].set_info(temp[j], j);
// }

void	PhoneBook::print_val(std::string str)
{
	std::string result = str.size() > 10 ? str.substr(0, 9) + "." : str;

	std::cout.width(10);
	std::cout << result;
	std::cout << "|";
}

void	PhoneBook::list_contacts( void )
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (int j = 0; j < 8 && contact[j].get_person(0) != ""; j++)
	{
		std::cout << "|";
		print_val(std::to_string(j + 1));
		for (int i = 0; i < 3; i++)
			print_val(contact[j].get_person(i));
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::search_contact( void )
{
	if (size == 0)
	{
		std::cout << "Pysto" << std::endl;
		return ;
	}
	list_contacts();
	int	index;
	while (1)
	{
		std::cout << "Index>";
		std::cin >> index;
		if (!index)
		{
			std::cin.clear();
			std::cin.ignore(INT32_MAX, '\n');
		}
		else 
			if (index > 0 && index < 9)
				if (contact[index - 1].get_person(0) != "")
					break;
		std::cout << "Invalid index" << std::endl;
	}
	std::cin.ignore(INT32_MAX, '\n');
	for (int i = 0; i < 5; i++)
			std::cout << contact[0].get_fields(i) + ": " << contact[index - 1].get_person(i) << std::endl;
}
