#include<iostream>

int		main(int ac, char **av)
{
	std::string str;

	if (ac != 1) {
		for (int i = 1; i < ac; i++) {
			for (size_t j = 0; j < std::strlen(av[i]); j++) {
				std::cout << (char) std::toupper(av[i][j]);
			}
			std::cout << " ";
		}
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}
