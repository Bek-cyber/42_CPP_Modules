#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

private:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		Brain* _brain;
	
public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Dog();
		~Dog();
		Dog(const Dog& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Dog& operator= (const Dog& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getIdea(int i) const;
		void setIdea(const std::string& line);
	
		//	std::string getType(void) const;
		//	void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
