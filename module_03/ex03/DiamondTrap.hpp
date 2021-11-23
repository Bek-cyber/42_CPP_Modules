#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

private:

	///////------------------------------------VARIABLES------------------------------------///////

		std::string name;

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& cl_copy);
		DiamondTrap(std::string name);

	///////------------------------------------OVERLOADS------------------------------------///////

		DiamondTrap& operator= (const DiamondTrap& overload);

	///////------------------------------------FUNCTIONS------------------------------------///////

		void whoAmI();
		void attack(std::string const & target);

};

#endif

///////------------------------------------THE_END------------------------------------///////
