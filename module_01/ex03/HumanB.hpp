#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string name_of_humanB;
	Weapon* weapon_B;

public:
//	HumanB();
	~HumanB();
	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon);
	void attack();
	void setWeapon(Weapon& weapon);
};

#endif