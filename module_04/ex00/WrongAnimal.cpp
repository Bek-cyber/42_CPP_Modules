#include "WrongAnimal.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	WrongAnimal::WrongAnimal() {
		std::cout << "WrongAnimal constructor has been called!" << std::endl;
		_type = "WrongAnimale";
	}
	
	WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor has been called!" << std::endl; }
	
	WrongAnimal::WrongAnimal(const WrongAnimal& cl_copy) {
		std::cout << "WrongAnimal copy constructor has been called!" << std::endl;
		_type = cl_copy._type;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	WrongAnimal& WrongAnimal::operator= (const WrongAnimal& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string WrongAnimal::getType() const { return _type; }
	void WrongAnimal::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void WrongAnimal::makeSound() const { std::cout << "_wrongAnimal sound_" << std::endl; }

///////------------------------------------THE_END------------------------------------///////
