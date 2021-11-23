#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

protected:
	
	///////------------------------------------VARIABLES------------------------------------///////

		std::string _type;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
		
		Animal();
		~Animal();
		Animal(const Animal& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Animal&	operator= (const Animal& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getType(void) const;
		void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
