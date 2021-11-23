#include "Zombie.hpp"

int main() {
	std::cout << "BOOM.BOOM..BOOOM..." << std::endl;
	std::cout << "BE CAREFULL, CAUSE THEY ARE COMMING" << std::endl;
	Zombie first = Zombie("First");
	Zombie*	second = newZombie("Second");

	first.announce();
	second->announce();

	randomChump("Third");

	delete second;
	return 0;
}