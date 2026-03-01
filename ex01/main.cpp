#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string str;
	PhoneBook ph;

	while (1)
	{
		std::cout	<< "Phonebook command : " << std::flush;
		if (!(std::getline(std::cin, str)))
			break ;
		else if (!str.compare("ADD"))
		{
			// std::cout << "ADD\n" << std::flush;
			ph.addContact();
		}
		else if (!str.compare("SEARCH"))
		{
			// std::cout << "SEARCH\n" << std::flush;
			ph.search();
		}
		else if (!str.compare("EXIT"))
			break ;
		else
			std::cout << "Wrong command !\n" << std::flush;
	}

	// ph.delContacts();
	return (0);
}
