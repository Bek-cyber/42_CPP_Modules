#include "HumanB.hpp"

//HumanB::HumanB() {
//}

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) {
	name_of_humanB = name;
}

HumanB::HumanB(std::string name, Weapon &weapon) {
	name_of_humanB = name;
	weapon_B = &weapon;
}

void HumanB::attack() {
	std::cout << name_of_humanB << " attacks with " << weapon_B->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	weapon_B = &weapon;
}