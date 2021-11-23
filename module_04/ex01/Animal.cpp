#include "Animal.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Animal::Animal() {
		std::cout << "Animal constructor has been called!" << std::endl;
		_type = "Animal";
	}

	Animal::~Animal() { std::cout << "Animal destructor has been called!" << std::endl; }

	Animal::Animal(const Animal& cl_copy) {
		std::cout << "Animal copy constructor has been called!" << std::endl;
		_type = cl_copy._type;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Animal& Animal::operator=(const Animal& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string Animal::getType() const { return _type; }

	void Animal::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Animal::makeSound() const { std::cout << "---Animal sound---" << std::endl; }

///////------------------------------------THE_END------------------------------------///////
