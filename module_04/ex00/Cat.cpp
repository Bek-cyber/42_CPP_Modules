#include "Cat.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

Cat::Cat() {
	std::cout << "Cat constructor has been called!" << std::endl;
	_type = "Cat";
}

Cat::~Cat() { std::cout << "Cat destructor has been called!" << std::endl; }

Cat::Cat(const Cat& cl_copy) {
	std::cout << "Cat copy constructor has been called!" << std::endl;
	_type = cl_copy._type;
}

///////------------------------------------OVERLOADS------------------------------------///////

Cat& Cat::operator=(const Cat& overload) {
	if (this == &overload) { return *this; }
	_type = overload._type;
	return *this;
}

///////------------------------------------ACCESSERS------------------------------------///////

//std::string Cat::getType() const { return _type; }
//void Cat::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

void Cat::makeSound() const { std::cout << "Meeeooooww...." << std::endl; }

///////------------------------------------THE_END------------------------------------///////
