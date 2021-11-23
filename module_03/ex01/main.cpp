#include "ScavTrap.hpp"

int main() {
	ScavTrap Jack = ScavTrap("Jack");
	ScavTrap Bob = ScavTrap();
	Jack.attack("Bob");
	Bob.takeDamage(15);
	Bob.beRepaired(15);
	return 0;
}