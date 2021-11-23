#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {

protected:

	///////------------------------------------VARIABLES------------------------------------///////
	
		std::string _type;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
		
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& cl_copy);
		AMateria(std::string const & type);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		AMateria& operator= (const AMateria& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string const & getType() const;
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &);

};

#endif

///////------------------------------------THE_END------------------------------------///////
