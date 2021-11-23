#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& cl_copy);
		FragTrap(const std::string name);

	///////------------------------------------OVERLOADS------------------------------------///////

		FragTrap& operator= (const FragTrap& overload);

	///////------------------------------------FUNCTIONS------------------------------------///////

		void highFivesGuys(void);

};

#endif

///////------------------------------------THE_END------------------------------------///////
