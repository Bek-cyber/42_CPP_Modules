#include "FragTrap.hpp"

int main() {
	FragTrap Jack = FragTrap("Jack");
	FragTrap Jason = FragTrap();
	Jack.attack("Jason");
	Jason.takeDamage(30);
	Jason.beRepaired(30);
	Jack.highFivesGuys();
	Jason.highFivesGuys();

	return 0;
}