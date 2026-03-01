#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	*contacts[8];
	int		nextIdx;
	int		count;

public:
	bool	addContact();
	void	search() const;
	void	delContacts();
};

#endif
