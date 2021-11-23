#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Cat();
		~Cat();
		Cat(const Cat& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Cat& operator= (const Cat& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
//		std::string getType(void) const;
//		void setType(std::string type);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void makeSound() const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
