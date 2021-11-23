#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

private:

	///////------------------------------------VARIABLES------------------------------------///////

		const Fixed x;
		const Fixed y;

public:

	///////------------------------------------CONSTRUCTORS------------------------------------///////

		Point();
		~Point();
		Point(const Point& cl_copy);
		Point(const float x, const float y);

	///////------------------------------------OVERLOADS------------------------------------///////

		Point& operator= (const Point& overload);

	///////------------------------------------ACCESSERS------------------------------------///////

		float get_float_X( void ) const;
		float get_float_Y( void ) const;

};

///////------------------------------------FUNCTIONS------------------------------------///////

	bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

///////------------------------------------THE_END------------------------------------///////
