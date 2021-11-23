#include "Dog.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Dog::Dog() {
		std::cout << "Dog constructor has been called!" << std::endl;
		_type = "Dog";
	}
	
	Dog::~Dog() { std::cout << "Dog destructor has been called!" << std::endl; }
	
	Dog::Dog(const Dog& cl_copy) {
		std::cout << "Dog copy constructor has been called!" << std::endl;
		_type = cl_copy._type;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Dog& Dog::operator=(const Dog& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

//	std::string Dog::getType() const { return _type; }
//	void Dog::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Dog::makeSound() const { std::cout << "Gaafff...." << std::endl; }

///////------------------------------------THE_END------------------------------------///////
