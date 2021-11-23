#include "Zombie.hpp"

int main() {
	std::cout << "Hello my friend! Please write a number of zombies: ";
	std::string str;
	std::getline(std::cin, str);
	int num = std::atoi(str.c_str());
	if (num < 0) {
		std::cout << "Incorrect input! I'm out >:'(" << std::endl;
		return (0);
	}
	std::cout << "Good job! Now Please write a name for your zombies: ";
	std::getline(std::cin, str);
	Zombie* array = zombieHorde(num, str);
	for (int i = 0; i < num; i++)
		array[i].announce();
	delete [] array;
	return 0;
}