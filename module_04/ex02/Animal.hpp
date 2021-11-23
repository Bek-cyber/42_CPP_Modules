#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Colors.hpp"

class Animal {

protected:
	
	///////------------------------------------VARIABLES------------------------------------///////

		std::string _type;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
		
		Animal();
		virtual ~Animal();
		Animal(const Animal& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Animal&	operator= (const Animal& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getType(void) const;
		void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void makeSound() const = 0;
};

#endif

///////------------------------------------THE_END------------------------------------///////
