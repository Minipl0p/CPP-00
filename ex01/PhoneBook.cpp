#include <iostream>
#include <iomanip>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

bool	readNonEmptyLine(const char *prompt, std::string& out)
{
	while (true)
	{
		std::cout << prompt << std::flush;
		if (!std::getline(std::cin, out))
			return false;
		if (!out.empty())
			return true;
		std::cout << "Field could'nt be empty, try again !" << std::endl;
	}
}

bool	PhoneBook::addContact()
{
	Contact&	c = contacts[nextIdx];

	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	number;
	std::string	secret;

	// SET ALL VARIABLE AND CHECK IF ALL OF THEM WORK
	if (!readNonEmptyLine("What is the first name ?", first))		return false;
	if (!readNonEmptyLine("What is the last name ?", last))			return false;
	if (!readNonEmptyLine("What is the nickname ?", nick))			return false;
	if (!readNonEmptyLine("What is the number ?", number))			return false;
	if (!readNonEmptyLine("What is the darkest secret ?", secret))	return false;

	// SET CLASS CONTACT WITH VARIABLES
	c.setFirstName(first);
	c.setLastName(last);
	c.setNickname(nick);
	c.setNumber(number);
	c.setDarkestSecret(secret);

	// INCREASE COUNT AND UPDATE NEXTIDX
	if (count < 8)
		count++;
	nextIdx = (nextIdx + 1) % 8;
	
	return true;
}

static std::string formatField(std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::search() const
{

	// PRINT ARRAY OF CONTACT WITH INDEX
	std::cout << "|==========|==========|==========|==========|\n";
	std::cout << "|Index     |First Name|Last Name |Nickname  |\n";
	std::cout << "|==========|==========|==========|==========|\n";
	for (int i = 0; i < count; i++)
	{
		std::cout	<< "|"
					<< std::setw(10) << i << "|"
					<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
	}



	//ask for index
	//if index exist print les infos else prevoir un behaviour
}
