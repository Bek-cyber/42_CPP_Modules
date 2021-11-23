#include "main_header.hpp"

int	main()
{
	Book	book;
	std::string str;

	while (true)
	{
		std::cout << "Please give me some work: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str == "ADD")
			book.add_contact();
		else if (str == "SEARCH")
			book.search_contact();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Incorrect command! Please write again :)" << std::endl;
	}
	return (0);
}