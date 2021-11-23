#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		std::string _type;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		WrongAnimal& operator= (const WrongAnimal& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getType(void) const;
		void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
