#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		WrongCat& operator= (const WrongCat& overload);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
