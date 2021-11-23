#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class ICharacter
{
public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		virtual ~ICharacter() {}
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		virtual std::string const & getName() const = 0;
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void equip(AMateria * m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif

///////------------------------------------THE_END------------------------------------///////
