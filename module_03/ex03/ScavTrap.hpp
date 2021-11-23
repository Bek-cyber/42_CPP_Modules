#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& cl_copy);
		ScavTrap(const std::string name);

	///////------------------------------------OVERLOADS------------------------------------///////

		ScavTrap& operator= (const ScavTrap& overload);

	///////------------------------------------FUNCTIONS------------------------------------///////

		void guardGate ();
		void attack(std::string const & target);

};

#endif

///////------------------------------------THE_END------------------------------------///////
