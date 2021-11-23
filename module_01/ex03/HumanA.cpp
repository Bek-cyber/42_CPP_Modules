#include "HumanA.hpp"

//HumanA::HumanA() {}

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon &weapon) {
	name_of_humanA = name;
	weapon_A = &weapon;
}

void HumanA::attack() {
	std::cout << name_of_humanA << " attacks with " << weapon_A->getType() << std::endl;
}