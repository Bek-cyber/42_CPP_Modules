#ifndef	HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string name_of_humanA;
	Weapon* weapon_A;

public:
//	HumanA();
	~HumanA();
	HumanA(std::string name, Weapon& weapon);
	void attack();
};

#endif