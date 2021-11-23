#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
	Dog();
	~Dog();
	Dog(const Dog& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
	Dog& operator= (const Dog& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
//	std::string getType(void) const;
//	void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
	virtual void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
