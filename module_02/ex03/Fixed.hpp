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

		Fixed& operator= (const Fixed& overload);

	///////------------------------------------ACCESSERS------------------------------------///////

		int getRawBits( void ) const;
		void setRawBits(int const raw);

	///////------------------------------------METHODS------------------------------------///////

		float toFloat( void ) const;
		int toInt( void ) const;

	///////------------------------------------ARITHMETIC_OPERATORS------------------------------------///////

		Fixed operator+ (const Fixed& tmp) const;
		Fixed operator- (const Fixed& tmp) const;
		Fixed operator* (const Fixed& tmp) const;
		Fixed operator/ (const Fixed& tmp) const;

	///////------------------------------------INCREMENT_DECREMENT------------------------------------///////

		Fixed operator++ (int);
		const Fixed& operator++ ();
		Fixed operator-- (int);
		const Fixed& operator-- ();

	///////------------------------------------MIN_MAX------------------------------------///////

		static Fixed& min(Fixed &p1, Fixed& p2);
		static Fixed& max(Fixed &p1, Fixed& p2);
		static const Fixed& min(const Fixed &p1, const Fixed& p2);
		static const Fixed& max(const Fixed &p1, const Fixed& p2);


};

///////------------------------------------OVERLOADS------------------------------------///////

	std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

///////------------------------------------COMPARISON_OPERATORS------------------------------------///////

	bool operator== (const Fixed& p1, const Fixed& p2);
	bool operator!= (const Fixed& p1, const Fixed& p2);
	bool operator>= (const Fixed& p1, const Fixed& p2);
	bool operator<= (const Fixed& p1, const Fixed& p2);
	bool operator< (const Fixed& p1, const Fixed& p2);
	bool operator> (const Fixed& p1, const Fixed& p2);

#endif

///////------------------------------------THE_END------------------------------------///////
