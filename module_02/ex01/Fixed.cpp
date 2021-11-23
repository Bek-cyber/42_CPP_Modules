#include "Fixed.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Fixed::Fixed() {
		value = 0;
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed::~Fixed() {
		std::cout << "Destructor called" << std::endl;
	}

	Fixed::Fixed(const float num) {
		std::cout << "Float constructor called" << std::endl;
		value = roundf(num * (1 << num_of_bits));
	}

	Fixed::Fixed(const int num) {
		std::cout << "Int constructor called" << std::endl;
		value = num << num_of_bits;
	}

	Fixed::Fixed(const Fixed& cl_copy) {
		std::cout << "Copy constructor called" << std::endl;
		*this = cl_copy;
	}
///////------------------------------------OVERLOADS------------------------------------///////

	Fixed& Fixed::operator=(const Fixed& overload) {
		std::cout << "Assignation operator called" << std::endl;
		value = overload.getRawBits();
		return *this;
	}

	std::ostream& operator << (std::ostream& out, const Fixed& fixed) {
		out << fixed.toFloat();
		return (out);
	}
///////------------------------------------ACCESSERS------------------------------------///////

	int	Fixed::getRawBits() const {
	//	std::cout << "getRawBits member function called" << std::endl;
		return value;
}

	void Fixed::setRawBits(const int raw) {
		value = raw;
		std::cout << "setRawBits member function called" << std::endl;
	}

///////------------------------------------METHODS------------------------------------///////

	float Fixed::toFloat() const {
		float f_value = (float) value / ((float) (1 << num_of_bits));
		return f_value;
	}

	int Fixed::toInt() const {
		int i_value = value / (1 << num_of_bits);
		return i_value;
	}

///////------------------------------------THE_END------------------------------------///////
