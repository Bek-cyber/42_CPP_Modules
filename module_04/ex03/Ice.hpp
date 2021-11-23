#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Ice();
		virtual ~Ice();
		Ice(const Ice& cl_copy);
		Ice(std::string const & type);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Ice& operator= (const Ice& overload);

	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif

///////------------------------------------THE_END------------------------------------///////
