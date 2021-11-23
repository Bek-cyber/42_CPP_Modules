#include "ClapTrap.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	ClapTrap::ClapTrap() {
		std::cout << "Constructor has been called" << std::endl;
		_name = "No_name";
		_hitpoints = 10;
		_energy_points = 10;
		_attack_damage = 0;
	}

	ClapTrap::~ClapTrap() {
		std::cout << "Destructor has been called" << std::endl;
	}

	ClapTrap::ClapTrap(const ClapTrap& cl_copy) {
		std::cout << "Copy_constructor has been called" << std::endl;
		_name = cl_copy.getName();
		_hitpoints = cl_copy.getHitpoints();
		_energy_points = cl_copy.getEnergy_points();
		_attack_damage = cl_copy.getAttack_damage();
	}

	ClapTrap::ClapTrap(std::string name) {
		std::cout << "Constructor with name has been called" << std::endl;
		_name = name;
		_hitpoints = 10;
		_energy_points = 10;
		_attack_damage = 0;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	ClapTrap& ClapTrap::operator= (const ClapTrap& overload) {
		if (this == &overload) {
			return *this;
		}
		_name = overload.getName();
		_hitpoints = overload.getHitpoints();
		_energy_points = overload.getEnergy_points();
		_attack_damage = overload.getAttack_damage();

		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string ClapTrap::getName() const { return _name; }

	int	ClapTrap::getHitpoints() const { return _hitpoints; }

	int ClapTrap::getEnergy_points() const { return _energy_points; }

	int ClapTrap::getAttack_damage() const { return _attack_damage; }

	void ClapTrap::setName(std::string name) { _name = name; }

	void ClapTrap::setHitpoints(int hitpoints) { _hitpoints = hitpoints; }

	void ClapTrap::setEnergy_points(int energy_points) { _energy_points = energy_points; }

	void ClapTrap::setAttack_damage(int attack_damage) { _attack_damage = attack_damage; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void ClapTrap::attack(const std::string& target) {
		std::cout	<< "ClapTrap " << _name << " attack " << target << " causing " << _attack_damage
					<< " points of damage!" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount) {
		std::cout	<< "ClapTrap " << _name << " take damage " << amount << "."
					<< " He's got " << _hitpoints - amount << " hitpoints!" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount) {
		std::cout	<< "ClapTrap " << _name << " be repaired " << amount << " points."
					<< "He's got " << _hitpoints + amount << " hitpoints!" << std::endl;
	}

///////------------------------------------THE_END------------------------------------///////
