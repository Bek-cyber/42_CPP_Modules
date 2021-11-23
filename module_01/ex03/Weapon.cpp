#include "Weapon.hpp"

Weapon::Weapon() {
	name_of_weapon = "bare hands";
}

Weapon::~Weapon() {}

Weapon::Weapon(std::string name) {
	name_of_weapon = name;
}

void Weapon::setType(std::string name) {
	name_of_weapon = name;
}

std::string Weapon::getType() const {
	return name_of_weapon;
}