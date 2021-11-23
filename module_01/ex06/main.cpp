#include "Karen.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Wrong number of arguments, bro! >:/" << std::endl;
		return -1;
	}
	Karen karen;
	std::string words[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string line = std::string(av[1]);
	int i;
	for (i = 0; i < 4; i++) {
		if (!line.compare(words[i]))
			break;
	}
	karen.complain(i);
	return 0;
}