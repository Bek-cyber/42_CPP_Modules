#include "Brain.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Brain::Brain() {
		std::cout << YELLOW << "Brain constructor has been called!" << RESET << std::endl;
		_ideas_arr[0] = "I've no idea!";
}

	Brain::~Brain() { std::cout << BOLDYELLOW << "Brain destructor has been called!" << RESET << std::endl; }

	Brain::Brain(const Brain& cl_copy) {
		std::cout << YELLOW << "Brain copy constructor has been called!" << RESET << std::endl;
		for (int i = 0; i < NUM_OF_IDEAS; i++) { _ideas_arr[i] = cl_copy.getIdea(i); }
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Brain& Brain::operator=(const Brain& overload) {
		if (this == &overload) { return *this; }
		for (int i = 0; i < NUM_OF_IDEAS; i++) { _ideas_arr[i] = overload.getIdea(i); }
		return *this;
	}


///////------------------------------------ACCESSERS------------------------------------///////

	std::string Brain::getIdea(int i) const {
		if (i < 1 || i > NUM_OF_IDEAS) { return "No such idea!"; }
		return _ideas_arr[i - 1];
	}
	
	void Brain::setIdea(const std::string &line) {
		for (int i = 0; (!_ideas_arr[i].empty() && i < NUM_OF_IDEAS); i++) { _ideas_arr[i] = line; }
	}

///////------------------------------------THE_END------------------------------------///////
