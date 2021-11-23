#include "ClapTrap.hpp"

int main() {
	ClapTrap Jack = ClapTrap("Jack");
	ClapTrap Bob = ClapTrap();
	Jack.attack("Bob");
	Bob.takeDamage(5);
	Bob.beRepaired(5);
	return 0;
}