#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

///////------------------------------------VARIABLES------------------------------------///////

	int value;
	static const int num_of_bits = 8;

public:

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Fixed();
	~Fixed();
	Fixed(const Fixed& cl_copy);
	Fixed(float const num);
	Fixed(int const num);

///////------------------------------------OVERLOADS------------------------------------///////

	Fixed& operator = (const Fixed& overload);

///////------------------------------------ACCESSERS------------------------------------///////

	int getRawBits( void ) const;
	void setRawBits(int const raw);

///////------------------------------------METHODS------------------------------------///////

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream& operator << (std::ostream &out, const Fixed& fixed);

#endif

///////------------------------------------THE_END------------------------------------///////
