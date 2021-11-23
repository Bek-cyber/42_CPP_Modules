#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character: public ICharacter {

private:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////

		Character();

protected:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		std::string _name;
		AMateria* _matArr[4];
	
public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
		
		~Character();
		Character(const Character& cl_copy);
		Character(std::string const & name);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Character& operator= (const Character& overload);

	///////------------------------------------ACCESSERS------------------------------------///////
	
		virtual std::string const & getName() const;
		
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

};

#endif

///////------------------------------------THE_END------------------------------------///////
