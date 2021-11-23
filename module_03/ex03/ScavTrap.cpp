#include "ScavTrap.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	ScavTrap::ScavTrap() {
		std::cout << "Constructor ScavTrap has been called" << std::endl;
		_name = "Stive";
		_hitpoints = 100;
		_energy_points = 50;
		_attack_damage = 20;
	}

	ScavTrap::~ScavTrap() {
		std::cout << "Destructor ScavTrap has been called" << std::endl;
	}

	ScavTrap::ScavTrap(const ScavTrap& cl_copy) {
		std::cout << "Copy_constructor ScavTrap has been called" << std::endl;
		_name = cl_copy.getName();
		_hitpoints = cl_copy.getHitpoints();
		_energy_points = cl_copy.getEnergy_points();
		_attack_damage = cl_copy.getAttack_damage();
	}

	ScavTrap::ScavTrap(std::string name) {
		std::cout << "Constructor ScavTrap with name has been called" << std::endl;
		_name = name;
		_hitpoints = 100;
		_energy_points = 50;
		_attack_damage = 20;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	ScavTrap& ScavTrap::operator= (const ScavTrap& overload) {
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

	void ScavTrap::attack(const std::string &target) {
		std::cout	<< "ScavTrap " << _name << " attack " << target << " causing " << _attack_damage
					<< " points of damage!" << std::endl;
	}

	void ScavTrap::guardGate() {
		std::cout << _name << " has alredy reached the gate!" << std::endl;
	}

///////------------------------------------THE_END------------------------------------///////
