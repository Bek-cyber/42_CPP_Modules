#include "Fixed.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

Fixed::Fixed() {
	value = 0;
	//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	value = roundf(num * (1 << num_of_bits));
}

Fixed::Fixed(const int num) {
	value = num << num_of_bits;
}

Fixed::Fixed(const Fixed& cl_copy) {
	//	std::cout << "Copy constructor called" << std::endl;
	value = cl_copy.getRawBits();
}
///////------------------------------------OVERLOADS------------------------------------///////

Fixed& Fixed::operator=(const Fixed& overload) {
	//	std::cout << "Assignation operator called" << std::endl;
	if (this == &overload) {
		return *this;
	}
	value = overload.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed) {
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
	//    std::cout << "setRawBits member function called" << std::endl;
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

///////------------------------------------COMPARISON_OPERATORS------------------------------------///////

bool operator== (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() == p2.getRawBits());
}

bool operator!= (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() != p2.getRawBits());
}

bool operator>= (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() >= p2.getRawBits());
}

bool operator<= (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() <= p2.getRawBits());
}

bool operator> (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() > p2.getRawBits());
}

bool operator< (const Fixed& p1, const Fixed& p2) {
	return (p1.getRawBits() < p2.getRawBits());
}

///////------------------------------------ARITHMETIC_OPERATORS------------------------------------///////

Fixed Fixed::operator+ (const Fixed& tmp) const {
	Fixed new_one;
	new_one.setRawBits(this->getRawBits() + tmp.getRawBits());
	return new_one;
}

Fixed Fixed::operator- (const Fixed& tmp) const {
	Fixed new_one;
	new_one.setRawBits(this->getRawBits() - tmp.getRawBits());
	return new_one;
}

Fixed Fixed::operator* (const Fixed& tmp) const {
	float num = this->toFloat() * tmp.toFloat();
	Fixed new_one(num);
	return new_one;
}

Fixed Fixed::operator/ (const Fixed& tmp) const {
	float num = this->toFloat() / tmp.toFloat();
	Fixed new_one(num);
	return new_one;
}

///////------------------------------------INCREMENT_DECREMENT------------------------------------///////

Fixed Fixed::operator++ (int) {
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

const Fixed& Fixed::operator++ () {
	this->value++;
	return *this;
}

Fixed Fixed::operator-- (int) {
	Fixed tmp(*this);
	this->value--;
	return tmp;
}

const Fixed& Fixed::operator-- () {
	this->value--;
	return *this;
}

///////------------------------------------MIN_MAX------------------------------------///////

Fixed& Fixed::min(Fixed &p1, Fixed& p2) {
	return ((p1 < p2) ? p1 : p2);
}

Fixed& Fixed::max(Fixed &p1, Fixed& p2) {
	return ((p1 > p2) ? p1 : p2);
}

const Fixed& Fixed::min(const Fixed &p1, const Fixed& p2) {
	return ((p1 < p2) ? p1 : p2);
}

const Fixed& Fixed::max(const Fixed &p1, const Fixed& p2) {
	return ((p1 > p2) ? p1 : p2);
}

///////------------------------------------THE_END------------------------------------///////