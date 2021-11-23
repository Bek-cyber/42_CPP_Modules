#include "DiamondTrap.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	DiamondTrap::DiamondTrap() {
		std::cout << "Constructor DiamondTrap has been called!" << std::endl;
		name = "Bond";
		ClapTrap::_name = "Noname_to_clap_name";
		_hitpoints = FragTrap::_hitpoints;
		_energy_points = ScavTrap::_energy_points;
		_attack_damage = FragTrap::_attack_damage;
	}

	DiamondTrap::~DiamondTrap() {
		std::cout << "Destructor DiamondTrap has been called!" << std::endl;
	}

	DiamondTrap::DiamondTrap(const DiamondTrap &cl_copy) {
		std::cout << "Copy constructor in DiamondTrap has been called!" << std::endl;
		name = cl_copy.getName();
		ClapTrap::_name = ((ClapTrap)cl_copy).getName();
		_hitpoints = cl_copy.getHitpoints();
		_energy_points = cl_copy.getEnergy_points();
		_attack_damage = cl_copy.getAttack_damage();
	}

	DiamondTrap::DiamondTrap(std::string name) {
		std::cout << "Construtor with name in DiamondTrap has been called!" << std::endl;
		this->name = name;
		ClapTrap::_name = name + "_clap_name";
		_hitpoints = FragTrap::_hitpoints;
		_energy_points = ScavTrap::_energy_points;
		_attack_damage = FragTrap::_attack_damage;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	DiamondTrap& DiamondTrap::operator=(const DiamondTrap &overload) {
		if (this == &overload)
			return *this;
		name = overload.getName();
		ClapTrap::_name = ((ClapTrap)overload).getName();
		_hitpoints = overload.getHitpoints();
		_energy_points = overload.getEnergy_points();
		_attack_damage = overload.getAttack_damage();

		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void DiamondTrap::whoAmI() {
		std::cout << "clapTrap_name = " << ClapTrap::_name << std::endl;
		std::cout << "diamondTrap_name = " << name << std::endl;
	}

	void DiamondTrap::attack(const std::string &target) {
		ScavTrap::attack(target);
	}

///////------------------------------------THE_END------------------------------------///////
