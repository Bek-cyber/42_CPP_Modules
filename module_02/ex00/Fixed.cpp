#include "Fixed.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Fixed::Fixed() {
		value = 0;
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed::~Fixed() {
		std::cout << "Destructor called" << std::endl;
	}

	Fixed::Fixed(const Fixed& cl_copy) {
		std::cout << "Copy constructor called" << std::endl;
		value = cl_copy.getRawBits();
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Fixed& Fixed::operator=(const Fixed& overload) {
		std::cout << "Assignation operator called" << std::endl;
		value = overload.getRawBits();
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	int	Fixed::getRawBits() const {
		std::cout << "getRawBits member function called" << std::endl;
		return value;
	}

	void Fixed::setRawBits(const int raw) {
		value = raw;
		std::cout << "setRawBits member function called" << std::endl;
	}

///////------------------------------------THE_END------------------------------------///////
