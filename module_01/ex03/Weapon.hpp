#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string name_of_weapon;
public:
	Weapon();
	~Weapon();
	Weapon(std::string name);
	void setType(std::string name);
	std::string getType() const;

};

#endif