#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	while (1)
	{
		if (!(std::cin >> str))
			break ;
		else if (!str.compare("ADD"))
		{
			std::cout << "ADD\n";
			//add contact
		}
		else if (!str.compare("SEARCH"))
		{
			std::cout << "SEARCH\n";
			//search contact
		}
		else if (!str.compare("EXIT"))
			break ;
		else
			std::cout << "Wrong command !\n";
	}
	return (0);
}
