#include "WrongCat.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	WrongCat::WrongCat() {
		std::cout << "WrongCat constructor has been called!" << std::endl;
		_type = "WrongCat";
	}
	
	WrongCat::~WrongCat() { std::cout << "WrongCat destructor has been called!" << std::endl; }
	
	WrongCat::WrongCat(const WrongCat& cl_copy) {
		std::cout << "WrongCat copy constructor has been called!" << std::endl;
		_type = cl_copy._type;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	WrongCat& WrongCat::operator=(const WrongCat& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void WrongCat::makeSound() const { std::cout << "_wrongCat sound_" << std::endl; }

///////------------------------------------THE_END------------------------------------///////
