#include "Dog.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Dog::Dog() {
		std::cout << GREEN << "Dog constructor has been called!" << RESET << std::endl;
		_type = "Dog";
		_brain = new Brain();
	}
	
	Dog::~Dog() {
		std::cout << BOLDGREEN << "Dog destructor has been called!" << RESET << std::endl;
		delete _brain;
}
	
	Dog::Dog(const Dog& cl_copy) {
		std::cout << GREEN << "Dog copy constructor has been called!" << RESET << std::endl;
		_type = cl_copy._type;
		_brain = new Brain();
		*(this->_brain) = *(cl_copy._brain);
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Dog& Dog::operator=(const Dog& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		delete _brain;
		_brain = new Brain();
		*(this->_brain) = *(overload._brain);
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string Dog::getIdea(int i) const { return _brain->getIdea(i); }

	void Dog::setIdea(const std::string& line) { _brain->setIdea(line); }

	//	std::string Dog::getType() const { return _type; }
	//	void Dog::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Dog::makeSound() const { std::cout << GREEN << "Gaafff...." << RESET << std::endl; }

///////------------------------------------THE_END------------------------------------///////
