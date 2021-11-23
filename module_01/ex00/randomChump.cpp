#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie new_one = Zombie(name);

	new_one.announce();
}