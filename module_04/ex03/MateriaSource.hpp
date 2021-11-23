#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

private:
	
	///////------------------------------------VARIABLES------------------------------------///////

		AMateria* _materiaArr[4];

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		MateriaSource& operator= (const MateriaSource& overload);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(std::string const & type);

};

#endif

///////------------------------------------THE_END------------------------------------///////
