#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Cure();
		virtual ~Cure();
		Cure(const Cure& cl_copy);
		Cure(std::string const & type);
		
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Cure& operator= (const Cure& overload);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif

///////------------------------------------THE_END------------------------------------///////
