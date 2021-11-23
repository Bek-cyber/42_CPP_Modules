#include "DiamondTrap.hpp"

int main() {
	DiamondTrap Jack = DiamondTrap("Jack");
	DiamondTrap Jason = DiamondTrap();
	Jack.attack("Jason");
	Jason.takeDamage(30);
	Jason.beRepaired(30);
	Jack.whoAmI();

	return 0;
}