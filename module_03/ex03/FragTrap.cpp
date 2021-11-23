#include "FragTrap.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	FragTrap::FragTrap() {
		std::cout << "Constructor FragTrap has been called" << std::endl;
		_name = "Jason";
		_hitpoints = 100;
		_energy_points = 100;
		_attack_damage = 30;
	}

	FragTrap::~FragTrap() {
		std::cout << "Destructor FragTrap has been called" << std::endl;
	}

	FragTrap::FragTrap(const FragTrap& cl_copy) {
		std::cout << "Copy_constructor FragTrap has been called" << std::endl;
		_name = cl_copy.getName();
		_hitpoints = cl_copy.getHitpoints();
		_energy_points = cl_copy.getEnergy_points();
		_attack_damage = cl_copy.getAttack_damage();
	}

	FragTrap::FragTrap(std::string name) {
		std::cout << "Constructor FragTrap with name has been called" << std::endl;
		_name = name;
		_hitpoints = 100;
		_energy_points = 100;
		_attack_damage = 30;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	FragTrap& FragTrap::operator= (const FragTrap& overload) {
		if (this == &overload) {
			return *this;
		}
		_name = overload.getName();
		_hitpoints = overload.getHitpoints();
		_energy_points = overload.getEnergy_points();
		_attack_damage = overload.getAttack_damage();

		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void FragTrap::highFivesGuys() {
		std::cout << "Hi! Give my a high five!" << std::endl;
	}

///////------------------------------------THE_END------------------------------------///////
