#include "Cat.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Cat::Cat() {
		std::cout << MAGENTA << "Cat constructor has been called!" << RESET << std::endl;
		_type = "Cat";
		_brain = new Brain();
	}

	Cat::~Cat() {
		std::cout << BOLDMAGENTA << "Cat destructor has been called!" << RESET << std::endl;
		delete _brain;
}

	Cat::Cat(const Cat& cl_copy) {
		std::cout << MAGENTA << "Cat copy constructor has been called!" << RESET << std::endl;
		_type = cl_copy._type;
		_brain = new Brain();
		*(this->_brain) = *(cl_copy._brain);
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Cat& Cat::operator=(const Cat& overload) {
		if (this == &overload) { return *this; }
		_type = overload._type;
		delete _brain;
		_brain = new Brain();
		*(this->_brain) = *(overload._brain);
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string Cat::getIdea(int i) const { return _brain->getIdea(i); }
	
	void Cat::setIdea(const std::string& line) { _brain->setIdea(line); }

	//std::string Cat::getType() const { return _type; }
	//void Cat::setType(std::string type) { _type = type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Cat::makeSound() const { std::cout << MAGENTA << "Meeeooooww...." << RESET << std::endl; }

///////------------------------------------THE_END------------------------------------///////
