#include "Zombie.hpp"

Zombie::Zombie() {
	name_of_zombie = "Jack";
}

Zombie::Zombie(std::string name) {
	name_of_zombie = name;
	std::cout << "Zombie " << name_of_zombie << " is alive now" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name_of_zombie << " has been bored. That's why he went :'(" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name_of_zombie << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
	name_of_zombie = name;
}