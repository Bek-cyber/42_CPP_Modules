#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		virtual ~IMateriaSource() {}
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif

///////------------------------------------THE_END------------------------------------///////
