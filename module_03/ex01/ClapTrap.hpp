#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

protected:

	///////------------------------------------VARIABLES------------------------------------///////

		std::string _name;
		int	_hitpoints;
		int _energy_points;
		int _attack_damage;

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& cl_copy);
		ClapTrap(std::string name);


	///////------------------------------------OVERLOADS------------------------------------///////

		ClapTrap& operator= (const ClapTrap& overload);

	///////------------------------------------ACCESSERS------------------------------------///////

		std::string getName( void ) const;
		int getHitpoints( void ) const;
		int getEnergy_points( void ) const;
		int getAttack_damage( void ) const;
		void setName(std::string name);
		void setHitpoints(int hitpoints);
		void setEnergy_points(int energy_points);
		void setAttack_damage(int attack_damage);

	///////------------------------------------FUNCTIONS------------------------------------///////

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif

///////------------------------------------THE_END------------------------------------///////
