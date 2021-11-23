#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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

///////------------------------------------OVERLOADS------------------------------------///////

	Fixed& operator = (const Fixed& overload);

///////------------------------------------ACCESSERS------------------------------------///////

	int getRawBits( void ) const;
	void setRawBits(int const raw);

};

#endif

///////------------------------------------THE_END------------------------------------///////
