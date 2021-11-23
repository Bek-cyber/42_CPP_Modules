#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

private:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		Brain* _brain;
	
public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Cat();
		~Cat();
		Cat(const Cat& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Cat& operator= (const Cat& overload);
	
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
